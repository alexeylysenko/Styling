#pragma once

#include "style/MyColors.h"
#include "style/palette/base/IBaseViewPalette.h"

namespace style {
/*!
 * \brief A palette class for BaseView component.
 * \class StyleABaseViewPalette
 */
class StyleABaseViewPalette : public IBaseViewPalette {
  Q_OBJECT
public:
  explicit StyleABaseViewPalette(QObject *parent = nullptr)
      : IBaseViewPalette(parent) {
    m_bgColor = MyColors::greyWhite_hp_7();
  }
};
} // namespace style
