cmake_minimum_required(VERSION 3.15)
project("ReaScriptAPI" VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
endif()

if(APPLE)
	set(CMAKE_OSX_ARCHITECTURES arm64)
	OPTION(PNG_HARDWARE_OPTIMIZATIONS OFF)
endif()

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  set(CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS "${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} -undefined dynamic_lookup")
endif()


OPTION(PNG_BUILD_ZLIB ON)
add_subdirectory(./WDL/zlib)
add_subdirectory(./WDL/libpng)

 include_directories(
	./WDL/swell/
	./WDL/lice
	./WDL/jpeglib
	./WDL/libpng
	./WDL/zlib
)

find_library(COCOA_LIBRARY Cocoa)
find_library(APPKIT_LIBRARY AppKit)

file(GLOB_RECURSE JPEGLIB_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "./WDL/jpeglib/*.c")
add_library(reaper_js_ReaScriptAPI 
  SHARED
	${JPEGLIB_SOURCES}
	js_ReaScriptAPI.cpp 
	js_ReaScriptAPI_ObjC.mm 
	./WDL/swell/swell-modstub.mm
	./WDL/lice/lice_png_write.cpp
	./WDL/lice/lice_jpg.cpp
	./WDL/lice/lice_jpg_write.cpp
	./WDL/lice/lice_colorspace.cpp
	./WDL/lice/lice.cpp
  )
target_compile_definitions(reaper_js_ReaScriptAPI PRIVATE SWELL_PROVIDED_BY_APP=1)
target_link_libraries(reaper_js_ReaScriptAPI zlib png ${COCOA_LIBRARY} ${APPKIT_LIBRARY})
