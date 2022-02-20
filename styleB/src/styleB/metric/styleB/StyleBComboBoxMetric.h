#pragma once

#include "style/metric/base/IComboBoxMetric.h"

namespace style {
/*!
 * \brief A metric class for ComboBox component.
 * \class StyleBComboBoxMetric
 */
class StyleBComboBoxMetric : public IComboBoxMetric {
  Q_OBJECT
public:
  explicit StyleBComboBoxMetric(MyUiStyle *style)
      : IComboBoxMetric(style) {
    m_margin = qRound(Margin * style->tu());
    m_height = qRound(Height * style->tu());
    m_contentLeftPadding = qRound(ContentLeftPadding * style->tu());
    m_popupRadius = qRound(PopupRadius * style->tu());
    m_indicatorWidth = qRound(IndicatorWidth * style->tu());
    m_indicatorHeight = qRound(IndicatorHeight * style->tu());
    m_indicatorLineWidth = qRound(IndicatorLineWidth * style->tu());
  }

private:
  static constexpr qreal Margin = 0.5;
  static constexpr qreal Height = 0.46;
  static constexpr qreal ContentLeftPadding = 0.25;
  static constexpr qreal PopupRadius = 0.05;
  static constexpr qreal IndicatorWidth = 0.25;
  static constexpr qreal IndicatorHeight = 0.2;
  static constexpr qreal IndicatorLineWidth = 0.05;
};
} // namespace style
