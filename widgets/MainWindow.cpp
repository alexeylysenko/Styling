#include "MainWindow.h"

#include <QVBoxLayout>

#include <style/MyUiStyle.h>
#include <styleA/StyleA.h>
#include <styleB/StyleB.h>

#include "controls/MyPushButton.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
  m_appStyle = new style::StyleB(this);

  auto centralWidget = new QWidget(this);
  auto layout = new QVBoxLayout(centralWidget);

  m_pushButton = new MyPushButton(m_appStyle, this);
  m_pushButton->setText("I'm a button");
  layout->addWidget(m_pushButton);

  setCentralWidget(centralWidget);
}
