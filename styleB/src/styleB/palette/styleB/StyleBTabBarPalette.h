#pragma once

#include "style/MyColors.h"
#include "style/palette/base/ITabBarPalette.h"

namespace style {
/*!
 * \brief A palette class for TabBar component.
 * \class StyleBTabBarPalette
 */
class StyleBTabBarPalette : public ITabBarPalette {
  Q_OBJECT
public:
  explicit StyleBTabBarPalette(QObject *parent = nullptr)
      : ITabBarPalette(parent) {
    m_bgColor = MyColors::greyWhite_8();
    m_currentTabBgColor = MyColors::greyWhite_8();
    m_tabTextColor = MyColors::blueBlack_1();
    m_borderColor = MyColors::blueBase_hp_2();
  }
};
} // namespace style
