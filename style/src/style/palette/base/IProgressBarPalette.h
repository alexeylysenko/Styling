#pragma once

#include <QObject>

#include "style/Macro.h"

namespace style {
/*!
 * \brief A base palette class for ProgressBar component.
 * \class IProgressBarPalette
 */
class IProgressBarPalette : public QObject {
  Q_OBJECT
  DECLARE_CONSTANT_PROPERTY(QColor, bgColor)
  DECLARE_CONSTANT_PROPERTY(QColor, indicatorColor)
  DECLARE_CONSTANT_PROPERTY(QColor, doneIndicatorColor)
  DECLARE_CONSTANT_PROPERTY(QColor, errorIndicatorColor)
  DECLARE_CONSTANT_PROPERTY(QColor, breathingIndicatorColor)
protected:
  explicit IProgressBarPalette(QObject *parent = nullptr) : QObject(parent) {}
};
} // namespace style
