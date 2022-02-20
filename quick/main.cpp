#include "Application.h"
#include <QQmlApplicationEngine>

int main(int argc, char *argv[]) {
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  Application app(argc, argv);

  return app.exec();
}
