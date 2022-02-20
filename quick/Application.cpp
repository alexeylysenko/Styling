#include "Application.h"

#include <QFontDatabase>
#include <QLoggingCategory>
#include <QQmlContext>

#include <styleA/StyleA.h>
#include <styleB/StyleB.h>

// Q_INIT_RESOURCE can't be used in a namespace
inline void initResources() { Q_INIT_RESOURCE(font); }

void installFonts() {
  const QVector<QString> fonts{QLatin1String(":/font/Roboto-Light.ttf"),
                               QLatin1String(":/font/Roboto-Medium.ttf"),
                               QLatin1String(":/font/Roboto-Regular.ttf")};
  for (const auto &font : fonts) {
    qint32 fontId = QFontDatabase::addApplicationFont(font);
    if (fontId == -1) {
      qCritical() << "Couldn't load a font" << font;
      QCoreApplication::exit(-1);
      return;
    }
  }
}

Application::Application(int &argc, char **argv) : QGuiApplication(argc, argv) {
  m_appStyle = new style::StyleB();
  qmlRegisterSingletonInstance("my.style", 1, 0, "AppStyle", m_appStyle);

  initResources();
  installFonts();

  m_qmlEngine.addImportPath("qrc:/qml/");
  const QUrl url(QStringLiteral("qrc:/qml/main.qml"));
  connect(
      &m_qmlEngine, &QQmlApplicationEngine::objectCreated, this,
      [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl) {
          qCritical() << "Couldn't load a root QML object";
          QCoreApplication::exit(-1);
        }
      },
      Qt::QueuedConnection);
  m_qmlEngine.load(url);
}
