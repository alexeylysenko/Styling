#pragma once

#include "style/MyColors.h"
#include "style/palette/base/IButtonPalette.h"

namespace style {
/*!
 * \brief A palette class for Button component.
 * \class StyleBButtonPalette
 */
class StyleBButtonPalette : public IButtonPalette {
  Q_OBJECT
public:
  explicit StyleBButtonPalette(QObject *parent) : IButtonPalette(parent) {
    m_bgColor = MyColors::blueBase_hp_2();
    m_bgPressedColor = MyColors::blueBlack_1();
    m_bgDisabledColor = MyColors::greyLight_hp_4();
    m_textColor = MyColors::greyWhite_8();
  }
};
} // namespace style
