# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.23.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.23.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/natevance/Developer/Xenon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/natevance/Developer/Xenon/build

# Utility rule file for uninstall.

# Include any custom commands dependencies for this target.
include Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/compiler_depend.make

# Include the progress variables for this target.
include Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/progress.make

Engine/thirdParty/glfw/CMakeFiles/uninstall:
	cd /Users/natevance/Developer/Xenon/build/Engine/thirdParty/glfw && /opt/homebrew/Cellar/cmake/3.23.0/bin/cmake -P /Users/natevance/Developer/Xenon/build/Engine/thirdParty/glfw/cmake_uninstall.cmake

uninstall: Engine/thirdParty/glfw/CMakeFiles/uninstall
uninstall: Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/build.make
.PHONY : uninstall

# Rule to build all files generated by this target.
Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/build: uninstall
.PHONY : Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/build

Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/clean:
	cd /Users/natevance/Developer/Xenon/build/Engine/thirdParty/glfw && $(CMAKE_COMMAND) -P CMakeFiles/uninstall.dir/cmake_clean.cmake
.PHONY : Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/clean

Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/depend:
	cd /Users/natevance/Developer/Xenon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/natevance/Developer/Xenon /Users/natevance/Developer/Xenon/Engine/thirdParty/glfw /Users/natevance/Developer/Xenon/build /Users/natevance/Developer/Xenon/build/Engine/thirdParty/glfw /Users/natevance/Developer/Xenon/build/Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Engine/thirdParty/glfw/CMakeFiles/uninstall.dir/depend
