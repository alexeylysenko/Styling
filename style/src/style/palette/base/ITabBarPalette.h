#pragma once

#include <QObject>

#include "style/Macro.h"

namespace style {
/*!
 * \brief A base palette class for TabBar component.
 * \class ITabBarPalette
 */
class ITabBarPalette : public QObject {
  Q_OBJECT
  DECLARE_CONSTANT_PROPERTY(QColor, bgColor)
  DECLARE_CONSTANT_PROPERTY(QColor, currentTabBgColor)
  DECLARE_CONSTANT_PROPERTY(QColor, tabTextColor)
  DECLARE_CONSTANT_PROPERTY(QColor, borderColor)
protected:
  explicit ITabBarPalette(QObject *parent = nullptr) : QObject(parent) {}
};
} // namespace style
