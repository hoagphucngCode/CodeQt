# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appPlayList_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appPlayList_autogen.dir\\ParseCache.txt"
  "appPlayList_autogen"
  )
endif()
