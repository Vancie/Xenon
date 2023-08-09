

#SPDLOG

add_subdirectory(thirdParty/spdlog)
find_package(spdlog)



#XENON ENGINE SOURCES
set(LIB_SOURCES 
  src/Xenon/Application.cpp
  src/Xenon/Logger.cpp
  )




add_library(XenonEngine SHARED ${LIB_SOURCES})
target_include_directories(XenonEngine PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src)
target_precompile_headers(XenonEngine PUBLIC "${CMAKE_CURRENT_LIST_DIR}/src/XenonPCH.hpp")
target_link_libraries(XenonEngine spdlog)
