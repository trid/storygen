project(common)

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost COMPONENTS system filesystem)
include_directories(${BOOST_INCLUDEDIR})

set(SOURCE_FILES
        Object.cpp
        ObjectRegistry.cpp Manager.cpp Manager.h Role.cpp Role.h Action.cpp Action.h Goal.cpp Goal.h World.cpp World.h)

add_library(common STATIC ${SOURCE_FILES})