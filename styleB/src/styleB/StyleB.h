#pragma once

#include <style/MyUiStyle.h>

namespace style {

/*!
 * \brief A class contains style properties used within B application.
 * \class StyleB
 */
class StyleB : public MyUiStyle {
  Q_OBJECT
public:
  explicit StyleB(QObject *parent = nullptr);
};
} // namespace style
