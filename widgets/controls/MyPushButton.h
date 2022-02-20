#pragma once

#include <QPushButton>
#include <style/MyUiStyle.h>

class MyPushButton : public QPushButton {
  Q_OBJECT
public:
  MyPushButton(style::MyUiStyle *style, QWidget *parent = nullptr);

protected:
  style::MyUiStyle *m_style = nullptr;
};
