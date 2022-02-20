#pragma once

#include <QObject>

#include "style/Macro.h"

namespace style {
/*!
 * \brief A base palette class for Switch component.
 * \class ITogglePalette
 */
class ITogglePalette : public QObject {
  Q_OBJECT
  DECLARE_CONSTANT_PROPERTY(QColor, bgColor)
  DECLARE_CONSTANT_PROPERTY(QColor, bgCheckedColor)
  DECLARE_CONSTANT_PROPERTY(QColor, borderColor)
  DECLARE_CONSTANT_PROPERTY(QColor, borderCheckedColor)
  DECLARE_CONSTANT_PROPERTY(QColor, indicatorColor)
  DECLARE_CONSTANT_PROPERTY(QColor, indicatorDownColor)
  DECLARE_CONSTANT_PROPERTY(QColor, indicatorBorderColor)
  DECLARE_CONSTANT_PROPERTY(QColor, indicatorBorderCheckedColor)
protected:
  explicit ITogglePalette(QObject *parent = nullptr) : QObject(parent) {}
};
} // namespace style
