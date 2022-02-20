cmake_minimum_required(VERSION 3.14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

project(StyleB VERSION 0.1.0 LANGUAGES CXX)

find_package(Qt5 COMPONENTS Core Gui REQUIRED)

add_library(${PROJECT_NAME} STATIC
    src/styleB/StyleB.cpp
    src/styleB/StyleB.h
    src/styleB/palette/styleB/StyleBTopIndicatorBarPalette.h
    src/styleB/palette/styleB/StyleBTabBarPalette.h
    src/styleB/palette/styleB/StyleBBaseViewPalette.h
    src/styleB/palette/styleB/StyleBButtonPalette.h
    src/styleB/palette/styleB/StyleBComboBoxPalette.h
    src/styleB/palette/styleB/StyleBProgressBarPalette.h
    src/styleB/palette/styleB/StyleBTogglePalette.h
    src/styleB/metric/styleB/StyleBButtonMetric.h
    src/styleB/metric/styleB/StyleBComboBoxMetric.h
    src/styleB/metric/styleB/StyleBTabBarMetric.h
    src/styleB/metric/styleB/StyleBTopIndicatorBarMetric.h
    src/styleB/metric/styleB/StyleBProgressBarMetric.h
    src/styleB/metric/styleB/StyleBButtonWithIconMetric.h
    src/styleB/metric/styleB/StyleBToggleMetric.h
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
