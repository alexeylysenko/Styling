#pragma once

#include "style/MyColors.h"
#include "style/palette/base/IButtonPalette.h"

namespace style {
/*!
 * \brief A palette class for Button component.
 * \class StyleAButtonPalette
 */
class StyleAButtonPalette : public IButtonPalette {
  Q_OBJECT
public:
  explicit StyleAButtonPalette(QObject *parent) : IButtonPalette(parent) {
    m_bgColor = MyColors::orangeMain_h_2();
    m_bgPressedColor = MyColors::orangeMain_hp_1();
    m_bgDisabledColor = MyColors::greyLight_hp_4();
    m_textColor = MyColors::greyWhite_8();
  }
};
} // namespace style
