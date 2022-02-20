#pragma once

#include "style/MyColors.h"
#include "style/palette/base/IComboBoxPalette.h"

namespace style {
/*!
 * \brief A palette class for ComboBox component.
 * \class StyleAComboBoxPalette
 */
class StyleAComboBoxPalette : public IComboBoxPalette {
  Q_OBJECT
public:
  explicit StyleAComboBoxPalette(QObject *parent) : IComboBoxPalette(parent) {
    m_textColor = MyColors::greyDark_1();
    m_indicatorColor = MyColors::orangeMain_hp_1();
  }
};
} // namespace style
