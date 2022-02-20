#pragma once

#include "style/metric/base/IButtonMetric.h"

namespace style {
/*!
 * \brief A metric class for Button component.
 * \class StyleBButtonMetric
 */
class StyleBButtonMetric : public IButtonMetric {
  Q_OBJECT
public:
  explicit StyleBButtonMetric(MyUiStyle *style) : IButtonMetric(style) {
    m_margin = qRound(Margin * style->tu());
    m_height = qRound(Height * style->tu());
    m_radius = qRound(Radius * style->tu());
  }

private:
  static constexpr qreal Margin = 0.2;
  static constexpr qreal Height = 0.46;
  static constexpr qreal Radius = 0.05;
};
} // namespace style
