#pragma once

#include "style/MyColors.h"
#include "style/palette/base/ITogglePalette.h"

namespace style {
/*!
 * \brief A gentleMACS palette class for Toggle component.
 * \class StyleATogglePalette
 */
class StyleATogglePalette : public ITogglePalette {
  Q_OBJECT
public:
  explicit StyleATogglePalette(QObject *parent) : ITogglePalette(parent) {
    m_bgColor = MyColors::greyWhite_8();
    m_bgCheckedColor = MyColors::orangeMain_h_2();
    m_borderColor = MyColors::grey_3();
    m_borderCheckedColor = MyColors::orangeMain_h_2();
    m_indicatorColor = MyColors::greyWhite_8();
    m_indicatorDownColor = MyColors::grey_3();
    m_indicatorBorderColor = MyColors::greyLight_hp_4();
    m_indicatorBorderCheckedColor = MyColors::orangeMain_h_2();
  }
};
} // namespace style
