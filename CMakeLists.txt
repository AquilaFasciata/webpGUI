cmake_minimum_required(VERSION 3.5)

<<<<<<< HEAD
project(webpGui VERSION 0.1 LANGUAGES CXX)
=======
project(QWebT VERSION 0.1 LANGUAGES CXX)
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

<<<<<<< HEAD
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
=======
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES QWebT_en_US.ts)
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
<<<<<<< HEAD
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(webpGui
=======
        ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(QWebT
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
<<<<<<< HEAD
#    set_property(TARGET webpGui APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(webpGui SHARED
=======
#    set_property(TARGET QWebT APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(QWebT SHARED
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
<<<<<<< HEAD
        add_executable(webpGui
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(webpGui PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
=======
        add_executable(QWebT
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(QWebT PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
<<<<<<< HEAD
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.webpGui)
endif()
set_target_properties(webpGui PROPERTIES
=======
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.QWebT)
endif()
set_target_properties(QWebT PROPERTIES
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
<<<<<<< HEAD
install(TARGETS webpGui
=======
install(TARGETS QWebT
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
<<<<<<< HEAD
    qt_finalize_executable(webpGui)
=======
    qt_finalize_executable(QWebT)
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)
endif()
