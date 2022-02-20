#pragma once

#include <QColor>
#include <QObject>

#include "Macro.h"

namespace style {
DECLARE_BASE_PALETTE_METRIC_CLASSES(TopIndicatorBar)
DECLARE_BASE_PALETTE_METRIC_CLASSES(TabBar)
DECLARE_BASE_PALETTE_METRIC_CLASSES(Button)
DECLARE_BASE_METRIC_CLASS(ButtonWithIcon)
DECLARE_BASE_PALETTE_METRIC_CLASSES(ComboBox)
DECLARE_BASE_PALETTE_METRIC_CLASSES(ProgressBar)
DECLARE_BASE_PALETTE_METRIC_CLASSES(Toggle)
DECLARE_BASE_PALETTE_CLASS(BaseView)

class MyFonts;

/*!
 * \brief A base class for styling.
 * It contains the common properties within all projects. The class has to be
 * used only as a base class for the concrete style implementation.
 * \class MyUiStyle
 */
class MyUiStyle : public QObject {
  Q_OBJECT
  DECLARE_PALETTE_METRIC_PROPERTIES(TopIndicatorBar, topIndicatorBar)
  DECLARE_PALETTE_METRIC_PROPERTIES(TabBar, tabBar)
  DECLARE_PALETTE_METRIC_PROPERTIES(Button, button)
  DECLARE_METRIC_PROPERTY(ButtonWithIcon, buttonWithIcon)
  DECLARE_PALETTE_METRIC_PROPERTIES(ComboBox, comboBox)
  DECLARE_PALETTE_METRIC_PROPERTIES(ProgressBar, progressBar)
  DECLARE_PALETTE_METRIC_PROPERTIES(Toggle, toggle)
  DECLARE_PALETTE_PROPERTY(BaseView, baseView)
  DECLARE_CONSTANT_PROPERTY_DEFAULT_VALUE(quint32, tu, 0)
  DECLARE_CONSTANT_PROPERTY_DEFAULT_VALUE(quint32, minimumTu, 0)
  DECLARE_CONSTANT_PROPERTY_DEFAULT_VALUE(MyFonts *, fonts, nullptr)

protected:
  explicit MyUiStyle(QObject *parent = nullptr) : QObject(parent) {}
};
} // namespace style
