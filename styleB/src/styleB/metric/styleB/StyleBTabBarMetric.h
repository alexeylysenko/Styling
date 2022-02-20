#pragma once

#include "style/metric/base/ITabBarMetric.h"

namespace style {
/*!
 * \brief A metric class for TabBar component.
 * \class StyleBTabBarMetric
 */
class StyleBTabBarMetric : public ITabBarMetric {
  Q_OBJECT
  DECLARE_INT_PROPERTY(rightButtonMargin)
public:
  explicit StyleBTabBarMetric(MyUiStyle *style) : ITabBarMetric(style) {
    m_borderWidth = qRound(BorderWidth * style->tu());
    m_borderRadius = qRound(BorderRadius * style->tu());
    m_borderTopMargin = qRound(BorderTopMargin * style->tu());
    m_contentHeight = qRound(ContentHeight * style->tu());
    m_buttonMargin = qRound(ButtonMargin * style->tu());
    m_spacing = qRound(Spacing * style->tu());
    m_buttonVerticalOffset = qRound(ButtonVerticalOffset * style->tu());
    m_rightButtonMargin = qRound(RightButtonMargin * style->tu());
  }

private:
  static constexpr qreal BorderWidth = 0.021;
  static constexpr qreal BorderRadius = 0.125;
  static constexpr qreal BorderTopMargin = 0.125;
  static constexpr qreal ContentHeight = 1.0;
  static constexpr qreal ButtonMargin = 0.5;
  static constexpr qreal ButtonVerticalOffset = 0.083;
  static constexpr qreal Spacing = 0.5;
  static constexpr qreal RightButtonMargin = 1.166;
};
} // namespace style
