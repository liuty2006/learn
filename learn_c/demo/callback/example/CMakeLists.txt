cmake_minimum_required(VERSION 3.10)
project(DownloaderExample)

set(CMAKE_CXX_STANDARD 11)

# 设置库的包含路径
include_directories(${CMAKE_SOURCE_DIR}/../include)

# 链接静态库（或者动态库）
link_directories(${CMAKE_SOURCE_DIR}/../bin/linux/x64/debug)

# Linux
if(CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
    # CMake 中使用 find_package 命令寻找特定的第三方库时，CMake 会搜索 CMAKE_PREFIX_PATH 中指定的路径
    set(CMAKE_PREFIX_PATH "${QT_CMAKE_PATH_LINUX}")
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        message("x64 Debug")
        SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin/linux/x64/debug)
        link_directories(${CMAKE_SOURCE_DIR}/../bin/linux/x64/debug)
        link_libraries(downloader)
    else()
        message("x64 release")
        SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin/ioserver/linux/x64/release)
        link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../bin/ioserver/linux/x64/release)
        link_libraries(pthread)
        link_libraries(s7 opc modbustcp modbusrtu snap7 mosquitto tinyxml2)
    endif()

    # Windows
elseif(CMAKE_HOST_SYSTEM_NAME STREQUAL "Windows")
    set(CMAKE_PREFIX_PATH "${QT_CMAKE_PATH_WIN}")
    #if(CMAKE_SIZEOF_VOID_P EQUAL 8)   #x64
    if(CMAKE_CL_64 )   #x64
        message("x64 architecture")
        #set(CMAKE_PREFIX_PATH "${QT_CMAKE_PATH_WIN}")
        if(CMAKE_BUILD_TYPE STREQUAL "Debug")
            message("x64 Debug")
            SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin/win/x64/debug)
            link_directories(${CMAKE_SOURCE_DIR}/../bin/win/x64/debug)
            link_libraries(downloader)
        else()
            message("x64 release")
            SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin/ioserver/win/x64/release)
            link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../bin/ioserver/win/x64/release)
            link_libraries(s7 opc modbustcp modbusrtu mosquitto tinyxml2)
        endif()
        #elseif(CMAKE_SIZEOF_VOID_P EQUAL 4)    #x86
    else()
        message("x86 architecture")
        if(CMAKE_BUILD_TYPE STREQUAL "Debug")
            message("x86 Debug")
            SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin/ioserver/win/x86/debug)
            link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../bin/ioserver/win/x86/debug)
            link_libraries(s7 opc)
        else()
            message("x86 release")
            SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin/ioserver/win/x86/release)
            link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../bin/ioserver/win/x86/release)
            link_libraries(s7 opc)
        endif()
    endif()
endif()

# 创建示例程序
add_executable(main main.c)

# 链接库到示例程序
target_link_libraries(main downloader)

