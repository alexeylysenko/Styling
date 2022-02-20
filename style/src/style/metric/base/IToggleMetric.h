#pragma once

#include <QObject>

#include "style/Macro.h"
#include "style/MyUiStyle.h"

namespace style {
/*!
 * \brief A base metric class for Toggle component.
 * \class IToggleMetric
 */
class IToggleMetric : public QObject {
  Q_OBJECT
  DECLARE_INT_PROPERTY(width)
  DECLARE_INT_PROPERTY(height)
  DECLARE_INT_PROPERTY(radius)
  DECLARE_INT_PROPERTY(indicatorWidth)
  DECLARE_INT_PROPERTY(indicatorHeight)
  DECLARE_INT_PROPERTY(indicatorRadius)
protected:
  explicit IToggleMetric(MyUiStyle *style) : QObject(style) {}
};
} // namespace style
