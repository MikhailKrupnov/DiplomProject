cmake_minimum_required(VERSION 2.8.11)

project(SignatureScanner)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)

# Tell CMake to create the helloworld executable
add_executable(SignatureScanner
    main.cpp
    mainwindow.cpp
    mainwindow.ui
    )

# Use the Widgets module from Qt 5.
target_link_libraries(SignatureScanner MACOSX_BUNDLE Qt5Widgets Qt5Core Qt5Gui)

