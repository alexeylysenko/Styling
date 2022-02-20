#pragma once

#include "style/MyColors.h"
#include "style/palette/base/IComboBoxPalette.h"

namespace style {
/*!
 * \brief A palette class for ComboBox component.
 * \class StyleBComboBoxPalette
 */
class StyleBComboBoxPalette : public IComboBoxPalette {
  Q_OBJECT
public:
  explicit StyleBComboBoxPalette(QObject *parent) : IComboBoxPalette(parent) {
    m_textColor = MyColors::greyDark_1();
    m_indicatorColor = MyColors::blueBlack_1();
  }
};
} // namespace style
