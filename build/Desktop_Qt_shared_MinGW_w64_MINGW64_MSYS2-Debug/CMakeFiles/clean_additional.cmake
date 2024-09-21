# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Forma_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Forma_autogen.dir\\ParseCache.txt"
  "Forma_autogen"
  )
endif()
