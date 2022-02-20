#pragma once

#include <style/MyUiStyle.h>

namespace style {
/*!
 * \brief A class contains style properties used within A application.
 * \class StyleA
 */
class StyleA : public MyUiStyle {
  Q_OBJECT
public:
  explicit StyleA(QObject *parent = nullptr);
};
} // namespace style
