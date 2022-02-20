#pragma once

#include <QObject>

#include "style/Macro.h"
#include "style/MyUiStyle.h"

namespace style {
/*!
 * \brief A base metric class for TopIndicatorBar component.
 * \class ITopIndicatorBarMetric
 */
class ITopIndicatorBarMetric : public QObject {
  Q_OBJECT
  DECLARE_INT_PROPERTY(height)
  DECLARE_INT_PROPERTY(leftMargin)
protected:
  explicit ITopIndicatorBarMetric(MyUiStyle *style) : QObject(style) {}
};
} // namespace style
