#pragma once

#include "style/MyColors.h"
#include "style/palette/base/ITopIndicatorBarPalette.h"

namespace style {
/*!
 * \brief A palette class for TopIndicatorBar component.
 * \class StyleATopIndicatorBarPalette
 */
class StyleATopIndicatorBarPalette : public ITopIndicatorBarPalette {
  Q_OBJECT
public:
  explicit StyleATopIndicatorBarPalette(QObject *parent = nullptr)
      : ITopIndicatorBarPalette(parent) {
    m_bgColor = MyColors::yellow_hp_2();
  }
};
} // namespace style
