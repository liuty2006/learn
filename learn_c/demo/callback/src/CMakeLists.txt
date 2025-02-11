cmake_minimum_required(VERSION 3.10)
project(DownloaderLibrary)

set(CMAKE_CXX_STANDARD 11)

# 定义包含目录
include_directories(../include)

# 创建静态库
#add_library(downloader STATIC src/downloader.c)

# 如果你想要创建动态库，可以使用下面的行代替
add_library(downloader SHARED downloader.c)

# Linux
if(CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        set_target_properties(downloader PROPERTIES
            LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin/linux/x64/debug
        )
    else()
        message("x64 release")
        set_target_properties(downloader PROPERTIES
            LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin/linux/x64/release
        )
    endif()
# Windows
elseif(CMAKE_HOST_SYSTEM_NAME STREQUAL "Windows")
    set(CMAKE_PREFIX_PATH "${QT_CMAKE_PATH_WIN}")
    if(CMAKE_CL_64 )   #x64
        message("x64 architecture")
        if(CMAKE_BUILD_TYPE STREQUAL "Debug")
            message("x64 Debug")
            set_target_properties(downloader PROPERTIES
                LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin/win/x64/debug
                RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin/win/x64/debug
                ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin/win/x64/debug
            )
            set_target_properties(downloader PROPERTIES
                IMPORT_PREFIX ""
                OUTPUT_NAME "downloader"
            )
        else()
            message("x64 release")
            set_target_properties(downloader PROPERTIES
                LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin/win/x64/release
                RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin/win/x64/release
                ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin/win/x64/release
            )
        endif()
    else()          #86
        message("x86 architecture")
        if(CMAKE_BUILD_TYPE STREQUAL "Debug")
            message("x86 Debug")
            set_target_properties(downloader PROPERTIES
                LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/win/x86/debug
                RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/win/x86/debug
                ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/win/x86/debug
            )
        else()
            message("x86 release")
            set_target_properties(downloader PROPERTIES
                LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/win/x86/release
                RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/win/x86/release
                ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/win/x86/release
            )
        endif()
    endif()
endif()
