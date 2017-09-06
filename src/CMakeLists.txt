project(iron_learning CXX)

set(SOURCES "features.cpp")
set(HEADERS "features.h")

add_library(lib ${SOURCES} ${HEADERS})
