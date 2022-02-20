#pragma once

#include <QObject>

#include "style/Macro.h"
#include "style/MyUiStyle.h"

namespace style {
/*!
 * \brief A base metric class for TabBar component.
 * \class ITabBarMetric
 */
class ITabBarMetric : public QObject {
  Q_OBJECT
  DECLARE_INT_PROPERTY(borderWidth)
  DECLARE_INT_PROPERTY(borderRadius)
  DECLARE_INT_PROPERTY(borderTopMargin)
  DECLARE_INT_PROPERTY(contentHeight)
  DECLARE_INT_PROPERTY(buttonMargin)
  DECLARE_INT_PROPERTY(buttonVerticalOffset)
  DECLARE_INT_PROPERTY(spacing)
protected:
  explicit ITabBarMetric(MyUiStyle *style) : QObject(style) {}
};
} // namespace style
