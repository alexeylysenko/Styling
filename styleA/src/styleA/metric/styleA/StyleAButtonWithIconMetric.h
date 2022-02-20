#pragma once

#include "style/metric/base/IButtonWithIconMetric.h"

namespace style {
/*!
 * \brief A metric class for ButtonWithIcon component.
 * \class StyleAButtonWithIconMetric
 */
class StyleAButtonWithIconMetric : public IButtonWithIconMetric {
  Q_OBJECT
public:
  explicit StyleAButtonWithIconMetric(MyUiStyle *style)
      : IButtonWithIconMetric(style) {
    m_margin = qRound(Margin * style->tu());
    m_height = qRound(Height * style->tu());
    m_radius = qRound(Radius * style->tu());
    m_spacing = qRound(Spacing * style->tu());
    m_iconSize = qRound(IconSize * style->tu());
  }

private:
  static constexpr qreal Margin = 0.2;
  static constexpr qreal Height = 0.46;
  static constexpr qreal Radius = 0.05;
  static constexpr qreal Spacing = 0.2;
  static constexpr qreal IconSize = 0.4;
};
} // namespace style
