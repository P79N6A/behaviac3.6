message(STATUS "tutorials: ${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB_RECURSE BTUNITTEST_SRC  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE BTUNITTEST_INC  "${CMAKE_CURRENT_SOURCE_DIR}/*.h")

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_SOURCE_DIR}/inc")
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# set(BTUNITTEST_SRC_INC ${BTUNITTEST_SRC} ${BTUNITTEST_INC})

# add the executable
add_executable(tutorial_14 ${BTUNITTEST_INC} ${BTUNITTEST_SRC})

target_link_libraries (tutorial_14 libbehaviac ${CMAKE_THREAD_LIBS_INIT})

set_target_properties(tutorial_14 PROPERTIES PREFIX "")
# set_target_properties(tutorial_14 PROPERTIES OUTPUT_NAME_DEBUG libbehaviac${${CMAKE_DEBUG_POSTFIX}}
# set_target_properties(tutorial_14 PROPERTIES OUTPUT_NAME_RELEASE libbehaviac${${CMAKE_RELEASE_POSTFIX}}
set_target_properties(tutorial_14 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
set_target_properties(tutorial_14 PROPERTIES RELEASE_POSTFIX ${CMAKE_RELEASE_POSTFIX})
