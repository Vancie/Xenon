



#SPDLOG


add_subdirectory(thirdParty/spdlog)
find_package(spdlog)

#GLFW
add_subdirectory(thirdParty/glfw)
find_package(glfw)

add_subdirectory(thirdParty/imgui)
find_package(imgui)


#XENON ENGINE SOURCES
set(LIB_SOURCES 
  src/Xenon/Application.cpp
  src/Xenon/Logger.cpp
  src/Platform/MacOS/MacWindow.cpp
  src/Xenon/Layer.cpp
  src/Xenon/LayerStack.cpp
  src/Platform/OpenGL/ImGuiOpenGLRenderer.cpp
  src/Xenon/imgui/ImguiLayer.cpp
)

#Third party dependencies
set(EXTERNAL_LIBS
  spdlog
  glfw
  imgui
)

#OPENGL

find_package(OPENGL REQUIRED)


add_subdirectory(thirdParty/glad)


add_library(XenonEngine SHARED ${LIB_SOURCES})

target_include_directories(XenonEngine PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src)






if(DARWIN)
  add_compile_definitions(XENON_PLATFORM_MACOS=1)
endif()



# Precompiled headers
target_precompile_headers(XenonEngine PUBLIC "${CMAKE_CURRENT_LIST_DIR}/src/XenonPCH.hpp")
target_link_libraries(XenonEngine ${EXTERNAL_LIBS} OpenGL::GL glad)

