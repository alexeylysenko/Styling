#pragma once

#include <QObject>

#include "style/Macro.h"

namespace style {
/*!
 * \brief A base palette class for Button component.
 * \class IButtonPalette
 */
class IButtonPalette : public QObject {
  Q_OBJECT
  DECLARE_CONSTANT_PROPERTY(QColor, bgColor)
  DECLARE_CONSTANT_PROPERTY(QColor, bgPressedColor)
  DECLARE_CONSTANT_PROPERTY(QColor, bgDisabledColor)
  DECLARE_CONSTANT_PROPERTY(QColor, textColor)
protected:
  explicit IButtonPalette(QObject *parent = nullptr) : QObject(parent) {}
};
} // namespace style
