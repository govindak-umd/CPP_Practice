# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/govind/Desktop/CPP_Practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/govind/Desktop/CPP_Practice/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/selection_sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/selection_sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/selection_sort.dir/flags.make

CMakeFiles/selection_sort.dir/selection_sort.cpp.o: CMakeFiles/selection_sort.dir/flags.make
CMakeFiles/selection_sort.dir/selection_sort.cpp.o: ../selection_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/govind/Desktop/CPP_Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/selection_sort.dir/selection_sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/selection_sort.dir/selection_sort.cpp.o -c /home/govind/Desktop/CPP_Practice/selection_sort.cpp

CMakeFiles/selection_sort.dir/selection_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/selection_sort.dir/selection_sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/govind/Desktop/CPP_Practice/selection_sort.cpp > CMakeFiles/selection_sort.dir/selection_sort.cpp.i

CMakeFiles/selection_sort.dir/selection_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/selection_sort.dir/selection_sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/govind/Desktop/CPP_Practice/selection_sort.cpp -o CMakeFiles/selection_sort.dir/selection_sort.cpp.s

# Object files for target selection_sort
selection_sort_OBJECTS = \
"CMakeFiles/selection_sort.dir/selection_sort.cpp.o"

# External object files for target selection_sort
selection_sort_EXTERNAL_OBJECTS =

selection_sort: CMakeFiles/selection_sort.dir/selection_sort.cpp.o
selection_sort: CMakeFiles/selection_sort.dir/build.make
selection_sort: CMakeFiles/selection_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/govind/Desktop/CPP_Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable selection_sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/selection_sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/selection_sort.dir/build: selection_sort

.PHONY : CMakeFiles/selection_sort.dir/build

CMakeFiles/selection_sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/selection_sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/selection_sort.dir/clean

CMakeFiles/selection_sort.dir/depend:
	cd /home/govind/Desktop/CPP_Practice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/govind/Desktop/CPP_Practice /home/govind/Desktop/CPP_Practice /home/govind/Desktop/CPP_Practice/cmake-build-debug /home/govind/Desktop/CPP_Practice/cmake-build-debug /home/govind/Desktop/CPP_Practice/cmake-build-debug/CMakeFiles/selection_sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/selection_sort.dir/depend

