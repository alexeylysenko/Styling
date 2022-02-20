#pragma once

#include <QObject>

#include "style/Macro.h"

namespace style {
/*!
 * \brief A base palette class for TopIndicatorBar component.
 * \class ITopIndicatorBarPalette
 */
class ITopIndicatorBarPalette : public QObject {
  Q_OBJECT
  DECLARE_CONSTANT_PROPERTY(QColor, bgColor)
protected:
  explicit ITopIndicatorBarPalette(QObject *parent = nullptr)
      : QObject(parent) {}
};
} // namespace style
