#CmakeLists.txt in test dir

include_directories(${CMAKEDEMO_SOURCE_DIR}/src)
link_directories(${CMAKEDEMO_BINARY_DIR}/src)

#the one Cpp file
add_executable(TestApp testapp.cpp)
TARGET_LINK_LIBRARIES( TestApp ${OpenCV_LIBS} )