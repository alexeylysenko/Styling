#pragma once

#include <QObject>

#include "style/Macro.h"
#include "style/MyUiStyle.h"

namespace style {
/*!
 * \brief A base metric class for ComboBox component.
 * \class IComboBoxMetric
 */
class IComboBoxMetric : public QObject {
  Q_OBJECT
  DECLARE_INT_PROPERTY(margin)
  DECLARE_INT_PROPERTY(height)
  DECLARE_INT_PROPERTY(contentLeftPadding)
  DECLARE_INT_PROPERTY(popupRadius)
  DECLARE_INT_PROPERTY(indicatorWidth)
  DECLARE_INT_PROPERTY(indicatorHeight)
  DECLARE_INT_PROPERTY(indicatorLineWidth)
protected:
  explicit IComboBoxMetric(MyUiStyle *style) : QObject(style) {}
};
} // namespace style
