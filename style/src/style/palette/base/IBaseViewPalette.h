#pragma once

#include <QObject>

#include "style/Macro.h"

namespace style {
/*!
 * \brief A base palette class for BaseView component.
 * \class IBaseViewPalette
 */
class IBaseViewPalette : public QObject {
  Q_OBJECT
  DECLARE_CONSTANT_PROPERTY(QColor, bgColor)
protected:
  explicit IBaseViewPalette(QObject *parent = nullptr) : QObject(parent) {}
};
} // namespace style
