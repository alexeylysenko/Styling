#include "StyleB.h"

#include <style/Macro.h>
#include <style/MyColors.h>
#include <style/MyFonts.h>

#include "metric/styleB/StyleBButtonMetric.h"
#include "metric/styleB/StyleBButtonWithIconMetric.h"
#include "metric/styleB/StyleBComboBoxMetric.h"
#include "metric/styleB/StyleBProgressBarMetric.h"
#include "metric/styleB/StyleBTabBarMetric.h"
#include "metric/styleB/StyleBToggleMetric.h"
#include "metric/styleB/StyleBTopIndicatorBarMetric.h"
#include "palette/styleB/StyleBBaseViewPalette.h"
#include "palette/styleB/StyleBButtonPalette.h"
#include "palette/styleB/StyleBComboBoxPalette.h"
#include "palette/styleB/StyleBProgressBarPalette.h"
#include "palette/styleB/StyleBTabBarPalette.h"
#include "palette/styleB/StyleBTogglePalette.h"
#include "palette/styleB/StyleBTopIndicatorBarPalette.h"

namespace style {

static constexpr quint32 TU = 48;
static constexpr quint32 MinimumTU = 40;

StyleB::StyleB(QObject *parent) : MyUiStyle(parent) {
  m_tu = TU;
  m_minimumTu = MinimumTU;
  CREATE_PROPERTY(ITopIndicatorBarPalette *, topIndicatorBarPalette,
                  StyleBTopIndicatorBarPalette)
  CREATE_PROPERTY(ITopIndicatorBarMetric *, topIndicatorBarMetric,
                  StyleBTopIndicatorBarMetric)
  CREATE_PROPERTY(ITabBarPalette *, tabBarPalette, StyleBTabBarPalette)
  CREATE_PROPERTY(ITabBarMetric *, tabBarMetric, StyleBTabBarMetric)
  CREATE_PROPERTY(IBaseViewPalette *, baseViewPalette, StyleBBaseViewPalette)
  CREATE_PROPERTY(IButtonPalette *, buttonPalette, StyleBButtonPalette)
  CREATE_PROPERTY(IButtonMetric *, buttonMetric, StyleBButtonMetric)
  CREATE_PROPERTY(IButtonWithIconMetric *, buttonWithIconMetric,
                  StyleBButtonWithIconMetric)
  CREATE_PROPERTY(IComboBoxPalette *, comboBoxPalette, StyleBComboBoxPalette)
  CREATE_PROPERTY(IComboBoxMetric *, comboBoxMetric, StyleBComboBoxMetric)
  CREATE_PROPERTY(IProgressBarPalette *, progressBarPalette,
                  StyleBProgressBarPalette)
  CREATE_PROPERTY(IProgressBarMetric *, progressBarMetric,
                  StyleBProgressBarMetric)
  CREATE_PROPERTY(ITogglePalette *, togglePalette, StyleBTogglePalette)
  CREATE_PROPERTY(IToggleMetric *, toggleMetric, StyleBToggleMetric)
  CREATE_PROPERTY(MyFonts *, fonts, MyFonts)
}
} // namespace style
