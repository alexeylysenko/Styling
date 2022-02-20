cmake_minimum_required(VERSION 3.14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

project(Style VERSION 0.1.0 LANGUAGES CXX)

find_package(Qt5 COMPONENTS Core Gui REQUIRED)

add_library(${PROJECT_NAME} STATIC
    font.qrc
    src/style/Macro.h
    src/style/MyColors.h
    src/style/MyFonts.h
    src/style/MyUiStyle.h
    src/style/palette/base/ITopIndicatorBarPalette.h
    src/style/palette/base/ITabBarPalette.h
    src/style/palette/base/IBaseViewPalette.h
    src/style/palette/base/IButtonPalette.h
    src/style/palette/base/IComboBoxPalette.h
    src/style/palette/base/IProgressBarPalette.h
    src/style/palette/base/ITogglePalette.h
    src/style/metric/base/IButtonMetric.h
    src/style/metric/base/IComboBoxMetric.h
    src/style/metric/base/ITabBarMetric.h
    src/style/metric/base/ITopIndicatorBarMetric.h
    src/style/metric/base/IProgressBarMetric.h
    src/style/metric/base/IButtonWithIconMetric.h
    src/style/metric/base/IToggleMetric.h
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

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Gui)
