#pragma once

#include "style/metric/base/ITopIndicatorBarMetric.h"

namespace style {
/*!
 * \brief A metric class for TopIndicatorBar component.
 * \class StyleBTopIndicatorBarMetric
 */
class StyleBTopIndicatorBarMetric : public ITopIndicatorBarMetric {
  Q_OBJECT
public:
  explicit StyleBTopIndicatorBarMetric(MyUiStyle *style)
      : ITopIndicatorBarMetric(style) {
    m_height = qRound(Height * style->tu());
    m_leftMargin = qRound(LeftMargin * style->tu());
  }

private:
  static constexpr qreal Height = 1.0;
  static constexpr qreal LeftMargin = 0.25;
};
} // namespace style
