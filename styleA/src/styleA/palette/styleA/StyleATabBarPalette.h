#pragma once

#include "style/MyColors.h"
#include "style/palette/base/ITabBarPalette.h"

namespace style {
/*!
 * \brief A palette class for TabBar component.
 * \class StyleATabBarPalette
 */
class StyleATabBarPalette : public ITabBarPalette {
  Q_OBJECT
public:
  explicit StyleATabBarPalette(QObject *parent = nullptr)
      : ITabBarPalette(parent) {
    m_bgColor = MyColors::greyWhite_8();
    m_currentTabBgColor = MyColors::greyWhite_8();
    m_tabTextColor = MyColors::yellow_dark_1();
    m_borderColor = MyColors::yellow_hp_2();
  }
};
} // namespace style
