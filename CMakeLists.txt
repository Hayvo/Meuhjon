cmake_minimum_required(VERSION 3.0.0)
project(Meuhjon VERSION 0.1.0)

FILE(GLOB mainSources *.cpp)
FILE(GLOB srcSources src/*.cpp)

add_executable(meuhjon  
${mainSources}
${srcSources}
)

target_include_directories(meuhjon PUBLIC
        "${PROJECT_SOURCE_DIR}/include"
        )

set(CPACK_PROJECT_NAME ${Meuhjon})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_link_libraries(rogue ncurses)