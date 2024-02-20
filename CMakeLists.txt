cmake_minimum_required(VERSION 3.10)

project(my_service)

# Указываем префикс установки Qt5DBus в переменной CMAKE_PREFIX_PATH
# Предполагаем, что Qt5DBus установлен данном путе 
set(CMAKE_PREFIX_PATH "/usr/lib/x86_64-linux-gnu/qt5")

find_package(Qt5DBus REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(my_service main.cpp my_service.h my_service.cpp)

target_link_libraries(my_service Qt5::DBus)