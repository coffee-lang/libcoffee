cmake_minimum_required (VERSION 2.6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project (libcoffee C CXX)

add_library (coffee SHARED coffee/coffeetypes.cpp)
set_target_properties(coffee PROPERTIES LINKER_LANGUAGE CXX)

set_target_properties(coffee PROPERTIES PUBLIC_HEADER "coffee/coffeetypes.hpp")
INSTALL(TARGETS coffee 
        LIBRARY DESTINATION /usr/lib/coffee
        PUBLIC_HEADER DESTINATION /usr/include/coffee
)
