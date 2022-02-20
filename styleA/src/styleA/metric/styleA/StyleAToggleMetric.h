#pragma once

#include "style/metric/base/IToggleMetric.h"

namespace style {
/*!
 * \brief A gentleMACS metric class for Toggle component.
 * \class StyleAToggleMetric
 */
class StyleAToggleMetric : public IToggleMetric {
  Q_OBJECT
public:
  explicit StyleAToggleMetric(MyUiStyle *style) : IToggleMetric(style) {
    m_width = qRound(Width * style->tu());
    m_height = qRound(Height * style->tu());
    m_radius = qRound(Radius * style->tu());
    m_indicatorWidth = qRound(IndicatorWidth * style->tu());
    m_indicatorHeight = qRound(IndicatorHeight * style->tu());
    m_indicatorRadius = qRound(IndicatorRadius * style->tu());
  }

private:
  static constexpr qreal Width = 1.0;
  static constexpr qreal Height = 0.5;
  static constexpr qreal Radius = 0.25;
  static constexpr qreal IndicatorWidth = 0.5;
  static constexpr qreal IndicatorHeight = 0.5;
  static constexpr qreal IndicatorRadius = 0.25;
};
} // namespace style
