cmake_minimum_required(VERSION 3.14)

project(StyleSampleWidget LANGUAGES CXX)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(StyleSampleWidget
    main.cpp
    MainWindow.cpp
    MainWindow.h
    controls/MyPushButton.cpp
    controls/MyPushButton.h
)

target_link_libraries(StyleSampleWidget PRIVATE Qt5::Widgets StyleA StyleB)
