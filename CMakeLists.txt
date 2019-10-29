cmake_minimum_required (VERSION 2.6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project (libcoffee C CXX)

add_library (libcoffee SHARED coffee/coffeetypes.cpp)
set_target_properties(libcoffee PROPERTIES LINKER_LANGUAGE CXX)

set_target_properties(libcoffee PROPERTIES PUBLIC_HEADER "coffee/coffeetypes.hpp")
INSTALL(TARGETS libcoffee 
        LIBRARY DESTINATION /usr/lib/coffee
        PUBLIC_HEADER DESTINATION /usr/include/coffee
)
