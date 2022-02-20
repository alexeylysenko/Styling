#pragma once

#include <QObject>

#include "style/Macro.h"

namespace style {
/*!
 * \brief A base palette class for ComboBox component.
 * \class IComboBoxPalette
 */
class IComboBoxPalette : public QObject {
  Q_OBJECT
  DECLARE_CONSTANT_PROPERTY(QColor, textColor)
  DECLARE_CONSTANT_PROPERTY(QColor, indicatorColor)
protected:
  explicit IComboBoxPalette(QObject *parent = nullptr) : QObject(parent) {}
};
} // namespace style
