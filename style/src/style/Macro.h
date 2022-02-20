#pragma once

/*!
 * \brief A set of macroses used within a styling framework.
 */

/*!
 * \brief Declares a constant read-only property with corresponding protected
 * class member and public getter.
 */
#define DECLARE_CONSTANT_PROPERTY(type, name)                                  \
protected:                                                                     \
  Q_PROPERTY(type name READ name CONSTANT)                                     \
  type m_##name;                                                               \
                                                                               \
public:                                                                        \
  type name() const { return m_##name; }                                       \
                                                                               \
private:

/*!
 * \brief Declares a constant read-only property with corresponding protected
 * class member initialized with default value and public getter.
 */
#define DECLARE_CONSTANT_PROPERTY_DEFAULT_VALUE(type, name, defaultValue)      \
protected:                                                                     \
  Q_PROPERTY(type name READ name CONSTANT)                                     \
  type m_##name = defaultValue;                                                \
                                                                               \
public:                                                                        \
  type name() const { return m_##name; }                                       \
                                                                               \
private:

/*!
 * \brief Adds a forward declaration for a base palette class of a component.
 * A component name is only needed to be provided.
 */
#define DECLARE_BASE_PALETTE_CLASS(name) class I##name##Palette;

/*!
 * \brief Adds a forward declaration for a base metric class of a component.
 * A component name is only needed to be provided.
 */
#define DECLARE_BASE_METRIC_CLASS(name) class I##name##Metric;

/*!
 * \brief Adds a forward declaration for both palette and metric base classes of
 * a component. A component name is only needed to be provided.
 */
#define DECLARE_BASE_PALETTE_METRIC_CLASSES(name)                              \
  DECLARE_BASE_PALETTE_CLASS(name)                                             \
  DECLARE_BASE_METRIC_CLASS(name)

/*!
 * \brief Adds a forward declaration for a palette class of a component.
 * A component name is only needed to be provided.
 */
#define DECLARE_PALETTE_CLASS(name) class name##Palette;

/*!
 * \brief Adds a forward declaration for a metric class of a component.
 * A component name is only needed to be provided.
 */
#define DECLARE_METRIC_CLASS(name) class name##Metric;

/*!
 * \brief Adds a forward declaration for both palette and metric classes of
 * a component. A component name is only needed to be provided.
 */
#define DECLARE_PALETTE_METRIC_CLASSES(name)                                   \
  DECLARE_PALETTE_CLASS(name)                                                  \
  DECLARE_METRIC_CLASS(name)

/*!
 * \brief Declares a constant read-only palette property initialized with
 * nullptr.
 * A component name and type have to be provided.
 */
#define DECLARE_PALETTE_PROPERTY(type, name)                                   \
  DECLARE_CONSTANT_PROPERTY_DEFAULT_VALUE(I##type##Palette *, name##Palette,   \
                                          nullptr)

/*!
 * \brief Declares a constant read-only metric property initialized with
 * nullptr.
 * A component name and type have to be provided.
 */
#define DECLARE_METRIC_PROPERTY(type, name)                                    \
  DECLARE_CONSTANT_PROPERTY_DEFAULT_VALUE(I##type##Metric *, name##Metric,     \
                                          nullptr)

/*!
 * \brief Declares constant read-only palette and metric properties initialized
 * with nullptr. A component name and type have to be provided.
 */
#define DECLARE_PALETTE_METRIC_PROPERTIES(type, name)                          \
  DECLARE_PALETTE_PROPERTY(type, name)                                         \
  DECLARE_METRIC_PROPERTY(type, name)

/*!
 * \brief Declares a constant read-only qreal property. A property name is only
 * needed to be provided. The default value is sett to 0.0.
 */
#define DECLARE_QREAL_PROPERTY(name)                                           \
  DECLARE_CONSTANT_PROPERTY_DEFAULT_VALUE(qreal, name, 0.0)

/*!
 * \brief Declares a constant read-only int property. A property name is only
 * needed to be provided. The default value is set to 0.
 */
#define DECLARE_INT_PROPERTY(name)                                             \
  DECLARE_CONSTANT_PROPERTY_DEFAULT_VALUE(int, name, 0)

/*!
 * \brief Creates an object of \a type type and assigns it to a property class
 * member. A base_type is used to register the type in meta object system.
 */
#define CREATE_PROPERTY(base_type, name, type)                                 \
  qRegisterMetaType<base_type>(#base_type);                                    \
  m_##name = new type(this);
