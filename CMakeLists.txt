cmake_minimum_required (VERSION 2.6)

project (libcoffee C CXX)

add_library (libcoffee SHARED coffee/coffeetypes.hpp)
set_target_properties(libcoffee PROPERTIES LINKER_LANGUAGE CXX)
