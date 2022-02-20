#pragma once

#include <QMainWindow>

namespace style {
class MyUiStyle;
}

class MyPushButton;

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);

private:
  style::MyUiStyle *m_appStyle = nullptr;
  MyPushButton *m_pushButton = nullptr;
};
