# Project Setup
cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(one-definition-rule LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)

# Third party library target
add_library(headerlib INTERFACE)
target_include_directories(headerlib INTERFACE third-party/headerlib)

# Int Even Library
add_library(even
  include/libeven/isIntEven.h
  src/isIntEven.cpp
)
target_include_directories(even PUBLIC include/libeven)
target_compile_definitions(even PRIVATE -DEVEN_EXPORTS -DNDEBUG)
target_link_libraries(even PRIVATE headerlib)

# Int Odd Library
add_library(odd
  include/libodd/isIntOdd.h
  src/isIntOdd.cpp
)
target_include_directories(odd PUBLIC include/libodd)
target_compile_definitions(odd PRIVATE -DODD_EXPORTS)
target_link_libraries(odd PRIVATE headerlib)

# Executable (link odd, then even)
add_executable(oddeven
  src/main.cpp
)
target_link_libraries(oddeven PRIVATE
  odd 
  even
)

# Executable (link even, then odd)
add_executable(evenodd
  src/main.cpp
)
target_link_libraries(evenodd PRIVATE
  even 
  odd
)
