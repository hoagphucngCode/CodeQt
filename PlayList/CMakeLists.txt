cmake_minimum_required(VERSION 3.16)

project(PlayList VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

find_package(Qt6 REQUIRED COMPONENTS Multimedia)

qt_add_executable(appPlayList
    main.cpp
)

qt_add_qml_module(appPlayList
    URI PlayList
    VERSION 1.0
    QML_FILES main.qml
    RESOURCES icon/PlayList.png
    RESOURCES bkg/bkg_test.png
    RESOURCES icon/shuffle-arrows.png
    RESOURCES icon/next.png icon/previous.png
    SOURCES buttonhandler.h buttonhandler.cpp
    QML_FILES ShuffleList.js
    RESOURCES icon/Adding.png
    RESOURCES icon/Loop.svg icon/LoopOne.svg
    RESOURCES icon/Loop.png
    RESOURCES icon/LoopOne.png
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appPlayList PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appPlayList
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appPlayList
    PRIVATE Qt6::Quick Qt6::Multimedia)

include(GNUInstallDirs)
install(TARGETS appPlayList
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
