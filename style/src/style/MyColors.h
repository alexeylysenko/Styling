#pragma once

#include <QColor>

namespace style {

/*!
 * \brief A class contains all color variations within all projects.
 * \class MyColors
 */
class MyColors {
public:
  // red
  static constexpr QColor redDark_h_1() { return QColor(0x9b, 0x0d, 0x21); }
  static constexpr QColor redDark_2() { return QColor(0xaf, 0x09, 0x19); }
  static constexpr QColor redMain_h_3() { return QColor(0xc1, 0x0a, 0x24); }
  static constexpr QColor redMain_4() { return QColor(0xd3, 0x0d, 0x2a); }
  static constexpr QColor redBright_hp_5() { return QColor(0xea, 0x13, 0x23); }
  static constexpr QColor redBright_6() { return QColor(0xf2, 0x27, 0x27); }
  static constexpr QColor redLight_hp_7() { return QColor(0xf9, 0x41, 0x41); }
  static constexpr QColor redLight_8() { return QColor(0xfc, 0x59, 0x59); }

  // orange
  static constexpr QColor orangeMain_hp_1() { return QColor(0xc9, 0x69, 0x00); }
  static constexpr QColor orangeMain_h_2() { return QColor(0xe5, 0x7d, 0x00); }
  static constexpr QColor orangeMain_3() { return QColor(0xff, 0x99, 0x00); }
  static constexpr QColor orangeMainBright_hp_4() {
    return QColor(0xfc, 0xa5, 0x32);
  }
  static constexpr QColor orangeMainBright_5() {
    return QColor(0xfc, 0xae, 0x47);
  }
  static constexpr QColor orangeLight_6() { return QColor(0xf9, 0xbb, 0x69); }
  static constexpr QColor orangeReact_hp_7() {
    return QColor(0xf9, 0xcc, 0x95);
  }
  static constexpr QColor orangeReact_8() { return QColor(0xff, 0xe2, 0xb3); }

  // yellow
  static constexpr QColor yellow_dark_1() { return QColor(0xe5, 0xc0, 0x0a); }
  static constexpr QColor yellow_hp_2() { return QColor(0xf4, 0xc7, 0x0b); }
  static constexpr QColor yellow_3() { return QColor(0xff, 0xda, 0x00); }
  static constexpr QColor yellowBright_4() { return QColor(0xff, 0xdf, 0x43); }
  static constexpr QColor yellowLight_hp_5() {
    return QColor(0xff, 0xe7, 0x80);
  }
  static constexpr QColor yellowLight_6() { return QColor(0xff, 0xf6, 0xc0); }

  // green
  static constexpr QColor greenDark_1() { return QColor(0x0f, 0x66, 0x00); }
  static constexpr QColor greenText_2() { return QColor(0x1d, 0x93, 0x05); }
  static constexpr QColor greenReady_3() { return QColor(0x18, 0xc1, 0x00); }
  static constexpr QColor greenBright_4() { return QColor(0x3f, 0xea, 0x21); }
  static constexpr QColor greenLight_5() { return QColor(0x8e, 0xf4, 0x7f); }

  // turquoise
  static constexpr QColor turquoiseDark_1() { return QColor(0x00, 0x5e, 0x63); }
  static constexpr QColor turquoise_hp_2() { return QColor(0x00, 0x70, 0x7c); }
  static constexpr QColor turquoise_3() { return QColor(0x00, 0x7d, 0x91); }
  static constexpr QColor turquoiseSolid_4() {
    return QColor(0x00, 0x8f, 0x9e);
  }
  static constexpr QColor turquoiseBright_5() {
    return QColor(0x00, 0xa5, 0xad);
  }
  static constexpr QColor turquoiseLight_hp_6() {
    return QColor(0x00, 0xbc, 0xbc);
  }
  static constexpr QColor turquoiseLight_7() {
    return QColor(0x00, 0xcc, 0xc6);
  }
  static constexpr QColor turquoiseExtraLight_8() {
    return QColor(0x00, 0xe5, 0xd9);
  }

  // blue
  static constexpr QColor blueBlack_1() { return QColor(0x00, 0x33, 0x66); }
  static constexpr QColor blueBase_hp_2() { return QColor(0x0d, 0x43, 0xa3); }
  static constexpr QColor blueBase_3() { return QColor(0x00, 0x53, 0xcc); }
  static constexpr QColor blueRun_hp_4() { return QColor(0x07, 0x72, 0xd3); }
  static constexpr QColor blueRun_5() { return QColor(0x00, 0x8a, 0xfc); }
  static constexpr QColor blueLiquid_hp_6() { return QColor(0x00, 0xb1, 0xff); }
  static constexpr QColor blueLiquid_7() { return QColor(0x4d, 0xc9, 0xff); }
  static constexpr QColor blueLight_hp_8() { return QColor(0x80, 0xde, 0xff); }
  static constexpr QColor blueLight_9() { return QColor(0xbe, 0xf3, 0xfc); }

  // grey
  static constexpr QColor greyDark_1() { return QColor(0x33, 0x33, 0x33); }
  static constexpr QColor grey_hp_2() { return QColor(0x96, 0x96, 0x96); }
  static constexpr QColor grey_3() { return QColor(0xba, 0xba, 0xba); }
  static constexpr QColor greyLight_hp_4() { return QColor(0xe0, 0xe0, 0xe0); }
  static constexpr QColor greyLight_h_5() { return QColor(0xe7, 0xe7, 0xe7); }
  static constexpr QColor greyLight_6() { return QColor(0xee, 0xee, 0xee); }
  static constexpr QColor greyWhite_hp_7() { return QColor(0xf8, 0xf8, 0xf8); }
  static constexpr QColor greyWhite_8() { return QColor(0xff, 0xff, 0xff); }

  // transparent
  static constexpr QColor transparent() {
    return QColor(0x00, 0x00, 0x00, 0x00);
  }

private:
  MyColors() = default;
};
} // namespace style
