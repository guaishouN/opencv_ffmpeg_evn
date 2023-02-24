cmake_minimum_required(VERSION 3.24)
project(DesayHmiDetector)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

include_directories(./ffmpegLibs/include)
link_directories(./ffmpegLibs/lib)

include_directories(opencvLibs/include)
link_directories(./opencvLibs/x64/mingw/lib)
set(OpenCV_DIR  ".\\opencvLibs\\x64\\mingw\\lib")
find_package(OpenCV REQUIRED)

add_executable(DesayHmiDetector main.cpp)

set(Ffmpeg_LIBS
        avcodec
        avdevice
        avfilter
        avformat
        avutil
        postproc
        swresample
        swscale)

target_link_libraries(
        DesayHmiDetector
        ${Ffmpeg_LIBS}
        ${OpenCV_LIBS}
)