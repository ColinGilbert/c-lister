cmake_minimum_required(VERSION 2.8)

project (clister)

find_package(Boost COMPONENTS system filesystem REQUIRED)

add_executable(clister clister.cpp)

target_link_libraries(clister ${Boost_LIBRARIES})

