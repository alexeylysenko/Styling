#include "MyPushButton.h"

#include <style/metric/base/IButtonMetric.h>
#include <style/palette/base/IButtonPalette.h>

MyPushButton::MyPushButton(style::MyUiStyle *style, QWidget *parent)
    : QPushButton(parent), m_style{style} {
  auto palette = this->palette();
  palette.setColor(QPalette::Button, m_style->buttonPalette()->bgColor());
  palette.setColor(QPalette::ButtonText, m_style->buttonPalette()->textColor());
  setAutoFillBackground(true);
  setPalette(palette);
  setFixedHeight(m_style->buttonMetric()->height());
}
