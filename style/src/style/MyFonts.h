#pragma once

#include <QFont>
#include <QObject>

#include "Macro.h"

namespace style {

/*!
 * \brief A class contains all font variations within all projects.
 * \class MyFonts
 */
class MyFonts : public QObject {
  Q_OBJECT
  DECLARE_CONSTANT_PROPERTY(QFont, smallConsult)
  DECLARE_CONSTANT_PROPERTY(QFont, smallCopy)
  DECLARE_CONSTANT_PROPERTY(QFont, copyLight)
  DECLARE_CONSTANT_PROPERTY(QFont, copyButton)
  DECLARE_CONSTANT_PROPERTY(QFont, copyMedium)
  DECLARE_CONSTANT_PROPERTY(QFont, tibType)
  DECLARE_CONSTANT_PROPERTY(QFont, navigationHead)
  DECLARE_CONSTANT_PROPERTY(QFont, navigationHeadBold)
public:
  explicit MyFonts(QObject *parent = nullptr) : QObject(parent) {
    m_smallConsult = QFont(QStringLiteral("Roboto"), 8);
    m_smallCopy = QFont(QStringLiteral("Roboto Medium"), 8);
    m_copyLight = QFont(QStringLiteral("Roboto Light"), 11);
    m_copyButton = QFont(QStringLiteral("Roboto"), 11);
    m_copyMedium = QFont(QStringLiteral("Roboto Medium"), 11);
    m_tibType = QFont(QStringLiteral("Roboto"), 13);
    m_navigationHead = QFont(QStringLiteral("Roboto Light"), 14);
    m_navigationHeadBold = QFont(QStringLiteral("Roboto Medium"), 14);
  }
};
} // namespace style
