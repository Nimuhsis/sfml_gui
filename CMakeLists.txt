cmake_minimum_required(VERSION 3.10)

project(sfmlgui VERSION 1.0)

set(SOURCES
	src/main.cpp
	src/widget/button.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

#set_target_properties(${PROJECT_NAME} PROPERTIES RULE_MESSAGES 0FF)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS 0FF)

target_compile_options(${PROJECT_NAME} PRIVATE 
	-Wall -Wextra -pedantic -Werror)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

find_package(SFML REQUIRED audio network graphics window system)

target_link_libraries(${PROJECT_NAME}
	${SFML_LIBRARIES}
	${SFML_DEPENDENCIES}
)
