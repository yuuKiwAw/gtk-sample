cmake_minimum_required(VERSION 3.0.0)
project(gtk-sample VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
include_directories(${PROJECT_SOURCE_DIR}/include)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

aux_source_directory(./src SrcFiles)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(main ${SrcFiles})

target_link_libraries(main ${GTKMM_LIBRARIES})
