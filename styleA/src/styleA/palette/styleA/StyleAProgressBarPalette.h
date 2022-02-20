#pragma once

#include "style/MyColors.h"
#include "style/palette/base/IProgressBarPalette.h"

namespace style {
/*!
 * \brief A palette class for ProgressBar component.
 * \class StyleAProgressBarPalette
 */
class StyleAProgressBarPalette : public IProgressBarPalette {
  Q_OBJECT
public:
  explicit StyleAProgressBarPalette(QObject *parent)
      : IProgressBarPalette(parent) {
    m_bgColor = MyColors::greyWhite_8();
    m_indicatorColor = MyColors::blueLiquid_7();
    m_doneIndicatorColor = MyColors::grey_hp_2();
    m_errorIndicatorColor = MyColors::redDark_h_1();
    m_breathingIndicatorColor = MyColors::orangeMain_3();
  }
};
} // namespace style
