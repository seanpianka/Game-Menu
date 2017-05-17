cmake_minimum_required(VERSION 3.7)
project(Game-Menu)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")

set(SOURCE_FILES
        src/character.cpp
        src/entity.cpp
        src/function.cpp
        src/game.cpp
        src/gamewindow.cpp
        src/main.cpp
        src/role.cpp
        src/unique_id.cpp)


include_directories(
        include
        lib/SFML/include
)

add_executable(Game-Menu ${SOURCE_FILES})

link_directories(
        lib/SFML/lib/
)

target_link_libraries(${PROJECT_NAME}
        sfml-graphics
        sfml-window
        sfml-system
        sfml-network
        sfml-audio
)
