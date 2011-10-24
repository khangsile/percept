#CmakeLists.txt in src dir

include_directories(${CMAKEDEMO_SOURCE_DIR}/src)
link_directories(${CMAKEDEMO_BINARY_DIR}/src)

#the one Cpp file
add_executable(DemoApp demoapp.cpp)
TARGET_LINK_LIBRARIES( DemoApp ${OpenCV_LIBS} )