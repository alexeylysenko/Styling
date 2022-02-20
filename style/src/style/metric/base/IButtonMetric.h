#pragma once

#include <QObject>

#include "style/Macro.h"
#include "style/MyUiStyle.h"

namespace style {
/*!
 * \brief A base metric class for Button component.
 * \class IButtonMetric
 */
class IButtonMetric : public QObject {
  Q_OBJECT
  DECLARE_INT_PROPERTY(margin)
  DECLARE_INT_PROPERTY(height)
  DECLARE_INT_PROPERTY(radius)
protected:
  explicit IButtonMetric(MyUiStyle *style) : QObject(style) {}
};
} // namespace style
