#pragma once

#include "IButtonMetric.h"

#include "style/Macro.h"
#include "style/MyUiStyle.h"

namespace style {
/*!
 * \brief A base metric class for ButtonWithIcon component.
 * \class IButtonWithIconMetric
 * \sa IButtonMetric
 */
class IButtonWithIconMetric : public IButtonMetric {
  Q_OBJECT
  DECLARE_INT_PROPERTY(spacing)
  DECLARE_INT_PROPERTY(iconSize)
protected:
  explicit IButtonWithIconMetric(MyUiStyle *style)
      : IButtonMetric(style) {}
};
} // namespace style
