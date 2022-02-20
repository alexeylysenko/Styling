cmake_minimum_required(VERSION 3.14)

project(StyleSampleQuick LANGUAGES CXX)

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

add_executable(StyleSampleQuick
    qml.qrc
    icon.qrc
    main.cpp
    Application.cpp
    Application.h
)

target_compile_definitions(StyleSampleQuick
  PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(StyleSampleQuick
  PRIVATE Qt5::Core Qt5::Quick StyleA StyleB)
