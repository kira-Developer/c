cmake_minimum_required(VERSION 3.17)
set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")
project(C C)

set(CMAKE_C_STANDARD 99)

find_package(glfw3 CONFIG REQUIRED)
find_package(unofficial-libmariadb CONFIG REQUIRED)
find_package(GDAL REQUIRED)
add_executable(Glfw Glfw.c)
add_executable(Query Query.c)
add_executable(Variables Variables.c)
add_executable(Printf Printf.c)
add_executable(Constants Constants.c)
add_executable(GettingUserInput GettingUserInput.c)
add_executable(WorkingWithNumbers WorkingWithNumbers.c)
add_executable(BuildingABasicCalculator BuildingABasicCalculator.c)
add_executable(BuildingAMadLibsGame BuildingAMadLibsGame.c)
add_executable(Array Array.c)
add_executable(Functions Functions.c)


target_link_libraries(Glfw PRIVATE glfw)
target_link_libraries(Query PRIVATE libmariadb mariadbclient)

target_include_directories(Query PRIVATE ${GDAL_INCLUDE_DIRS})
target_link_libraries(Query PRIVATE ${GDAL_LIBRARIES})