#pragma once

#include "style/MyColors.h"
#include "style/palette/base/ITogglePalette.h"

namespace style {
/*!
 * \brief A palette class for Toggle component.
 * \class StyleBTogglePalette
 */
class StyleBTogglePalette : public ITogglePalette {
  Q_OBJECT
public:
  explicit StyleBTogglePalette(QObject *parent) : ITogglePalette(parent) {
    m_bgColor = MyColors::greyWhite_8();
    m_bgCheckedColor = MyColors::blueBase_hp_2();
    m_borderColor = MyColors::grey_3();
    m_borderCheckedColor = MyColors::blueBase_hp_2();
    m_indicatorColor = MyColors::greyWhite_8();
    m_indicatorDownColor = MyColors::grey_3();
    m_indicatorBorderColor = MyColors::greyLight_hp_4();
    m_indicatorBorderCheckedColor = MyColors::blueBase_hp_2();
  }
};
} // namespace style
