#pragma once

#include <QObject>

#include "style/Macro.h"
#include "style/MyUiStyle.h"

namespace style {
/*!
 * \brief A base metric class for ProgressBar component.
 * \class IProgressBarMetric
 */
class IProgressBarMetric : public QObject {
  Q_OBJECT
  DECLARE_INT_PROPERTY(height)
  DECLARE_INT_PROPERTY(indicatorHeight)
  DECLARE_INT_PROPERTY(radius)
  DECLARE_INT_PROPERTY(border)
protected:
  explicit IProgressBarMetric(MyUiStyle *style) : QObject(style) {}
};
} // namespace style
