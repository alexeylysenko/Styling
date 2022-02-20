#pragma once

#include "style/MyColors.h"
#include "style/palette/base/ITopIndicatorBarPalette.h"

namespace style {
/*!
 * \brief A palette class for TopIndicatorBar component.
 * \class StyleBTopIndicatorBarPalette
 */
class StyleBTopIndicatorBarPalette : public ITopIndicatorBarPalette {
  Q_OBJECT
public:
  explicit StyleBTopIndicatorBarPalette(QObject *parent = nullptr)
      : ITopIndicatorBarPalette(parent) {
    m_bgColor = MyColors::blueBase_hp_2();
  }
};
} // namespace style
