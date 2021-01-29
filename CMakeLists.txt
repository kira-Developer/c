cmake_minimum_required(VERSION 3.17)
set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")
project(CTest C)

set(CMAKE_C_STANDARD 99)

find_package(glfw3 CONFIG REQUIRED)
find_package(unofficial-libmariadb CONFIG REQUIRED)
find_package(GDAL REQUIRED)
add_executable(Glfw glfw.c)
add_executable(Query query.c)

target_link_libraries(Glfw PRIVATE glfw)
target_link_libraries(Query PRIVATE libmariadb mariadbclient)

target_include_directories(Query PRIVATE ${GDAL_INCLUDE_DIRS})
target_link_libraries(Query PRIVATE ${GDAL_LIBRARIES})