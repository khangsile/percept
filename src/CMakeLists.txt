#CmakeLists.txt in src dir

include_directories(${CMAKEDEMO_SOURCE_DIR}/src)
link_directories(${CMAKEDEMO_BINARY_DIR}/src)

#the one Cpp file
add_executable(main main.cpp)
TARGET_LINK_LIBRARIES( main ${OpenCV_LIBS} )