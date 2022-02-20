#include "StyleA.h"

#include <style/Macro.h>
#include <style/MyColors.h>
#include <style/MyFonts.h>

#include "metric/styleA/StyleAButtonMetric.h"
#include "metric/styleA/StyleAButtonWithIconMetric.h"
#include "metric/styleA/StyleAComboBoxMetric.h"
#include "metric/styleA/StyleAProgressBarMetric.h"
#include "metric/styleA/StyleATabBarMetric.h"
#include "metric/styleA/StyleAToggleMetric.h"
#include "metric/styleA/StyleATopIndicatorBarMetric.h"
#include "palette/styleA/StyleABaseViewPalette.h"
#include "palette/styleA/StyleAButtonPalette.h"
#include "palette/styleA/StyleAComboBoxPalette.h"
#include "palette/styleA/StyleAProgressBarPalette.h"
#include "palette/styleA/StyleATabBarPalette.h"
#include "palette/styleA/StyleATogglePalette.h"
#include "palette/styleA/StyleATopIndicatorBarPalette.h"

namespace style {

static constexpr quint32 TU = 48;
static constexpr quint32 MinimumTU = 40;

StyleA::StyleA(QObject *parent) : MyUiStyle(parent) {
  m_tu = TU;
  m_minimumTu = MinimumTU;
  CREATE_PROPERTY(ITopIndicatorBarPalette *, topIndicatorBarPalette,
                  StyleATopIndicatorBarPalette)
  CREATE_PROPERTY(ITopIndicatorBarMetric *, topIndicatorBarMetric,
                  StyleATopIndicatorBarMetric)
  CREATE_PROPERTY(ITabBarPalette *, tabBarPalette, StyleATabBarPalette)
  CREATE_PROPERTY(ITabBarMetric *, tabBarMetric, StyleATabBarMetric)
  CREATE_PROPERTY(IBaseViewPalette *, baseViewPalette, StyleABaseViewPalette)
  CREATE_PROPERTY(IButtonPalette *, buttonPalette, StyleAButtonPalette)
  CREATE_PROPERTY(IButtonMetric *, buttonMetric, StyleAButtonMetric)
  CREATE_PROPERTY(IButtonWithIconMetric *, buttonWithIconMetric,
                  StyleAButtonWithIconMetric)
  CREATE_PROPERTY(ITogglePalette *, togglePalette, StyleATogglePalette)
  CREATE_PROPERTY(IToggleMetric *, toggleMetric, StyleAToggleMetric)
  CREATE_PROPERTY(IComboBoxPalette *, comboBoxPalette, StyleAComboBoxPalette)
  CREATE_PROPERTY(IComboBoxMetric *, comboBoxMetric, StyleAComboBoxMetric)
  CREATE_PROPERTY(IProgressBarPalette *, progressBarPalette,
                  StyleAProgressBarPalette)
  CREATE_PROPERTY(IProgressBarMetric *, progressBarMetric,
                  StyleAProgressBarMetric)
  CREATE_PROPERTY(MyFonts *, fonts, MyFonts)
}
} // namespace style
