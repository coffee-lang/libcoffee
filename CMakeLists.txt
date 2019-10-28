cmake_minimum_required (VERSION 2.6)

project (libcoffee C CXX)

add_library (libcoffee SHARED coffee/coffeetypes.hpp)
set_target_properties(libcoffee PROPERTIES LINKER_LANGUAGE CXX)

set_target_properties(libcoffee PROPERTIES PUBLIC_HEADER "coffee/coffeetypes.hpp")
INSTALL(TARGETS libcoffee 
        LIBRARY DESTINATION /usr/lib/coffee
        PUBLIC_HEADER DESTINATION /usr/include/coffee
)
