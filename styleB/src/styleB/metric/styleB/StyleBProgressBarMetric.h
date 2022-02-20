#pragma once

#include "style/metric/base/IProgressBarMetric.h"

namespace style {
/*!
 * \brief A metric class for ProgressBar component.
 * \class StyleBProgressBarMetric
 */
class StyleBProgressBarMetric : public IProgressBarMetric {
  Q_OBJECT
public:
  explicit StyleBProgressBarMetric(MyUiStyle *style)
      : IProgressBarMetric(style) {
    m_height = qRound(Height * style->tu());
    m_indicatorHeight = qRound(IndicatorHeight * style->tu());
    m_radius = qRound(Radius * style->tu());
    m_border = qRound(Border * style->tu());
  }

private:
  static constexpr qreal Height = 0.125;
  static constexpr qreal IndicatorHeight = 0.085;
  static constexpr qreal Radius = 0.02;
  static constexpr qreal Border = 0.02;
};
} // namespace style
