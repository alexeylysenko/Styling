cmake_minimum_required(VERSION 3.14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

project(StyleA VERSION 0.1.0 LANGUAGES CXX)

find_package(Qt5 COMPONENTS Core Gui REQUIRED)

add_library(${PROJECT_NAME} STATIC
    src/styleA/StyleA.cpp
    src/styleA/StyleA.h
    src/styleA/palette/styleA/StyleATopIndicatorBarPalette.h
    src/styleA/palette/styleA/StyleATabBarPalette.h
    src/styleA/palette/styleA/StyleABaseViewPalette.h
    src/styleA/palette/styleA/StyleAButtonPalette.h
    src/styleA/palette/styleA/StyleAComboBoxPalette.h
    src/styleA/palette/styleA/StyleAProgressBarPalette.h
    src/styleA/palette/styleA/StyleATogglePalette.h
    src/styleA/metric/styleA/StyleAButtonMetric.h
    src/styleA/metric/styleA/StyleAComboBoxMetric.h
    src/styleA/metric/styleA/StyleATabBarMetric.h
    src/styleA/metric/styleA/StyleATopIndicatorBarMetric.h
    src/styleA/metric/styleA/StyleAProgressBarMetric.h
    src/styleA/metric/styleA/StyleAButtonWithIconMetric.h
    src/styleA/metric/styleA/StyleAToggleMetric.h
)

# Option to build all unit tests
option(BUILD_TESTS "Build unit tests" ON)

# Option to use AddressSanitizer(ASAN) - memory error detector
option(ENABLE_ASAN "Enable AddressSanitizer tool" OFF)

if (BUILD_TESTS)
    add_subdirectory(test)
endif()

if (ENABLE_ASAN)
    set(asan_options -fsanitize=address -O1 -fno-omit-frame-pointer)
    add_compile_options(${asan_options})
    add_link_options(${asan_options})
endif()

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(${PROJECT_NAME} PRIVATE 
    $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)

target_link_libraries(${PROJECT_NAME} PUBLIC Qt5::Core Qt5::Gui Style)
