# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\govin\Desktop\CPP_Practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/struct_practice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/struct_practice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/struct_practice.dir/flags.make

CMakeFiles/struct_practice.dir/struct_practice.cpp.obj: CMakeFiles/struct_practice.dir/flags.make
CMakeFiles/struct_practice.dir/struct_practice.cpp.obj: ../struct_practice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/struct_practice.dir/struct_practice.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\struct_practice.dir\struct_practice.cpp.obj -c C:\Users\govin\Desktop\CPP_Practice\struct_practice.cpp

CMakeFiles/struct_practice.dir/struct_practice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/struct_practice.dir/struct_practice.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\govin\Desktop\CPP_Practice\struct_practice.cpp > CMakeFiles\struct_practice.dir\struct_practice.cpp.i

CMakeFiles/struct_practice.dir/struct_practice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/struct_practice.dir/struct_practice.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\govin\Desktop\CPP_Practice\struct_practice.cpp -o CMakeFiles\struct_practice.dir\struct_practice.cpp.s

# Object files for target struct_practice
struct_practice_OBJECTS = \
"CMakeFiles/struct_practice.dir/struct_practice.cpp.obj"

# External object files for target struct_practice
struct_practice_EXTERNAL_OBJECTS =

struct_practice.exe: CMakeFiles/struct_practice.dir/struct_practice.cpp.obj
struct_practice.exe: CMakeFiles/struct_practice.dir/build.make
struct_practice.exe: CMakeFiles/struct_practice.dir/linklibs.rsp
struct_practice.exe: CMakeFiles/struct_practice.dir/objects1.rsp
struct_practice.exe: CMakeFiles/struct_practice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable struct_practice.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\struct_practice.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/struct_practice.dir/build: struct_practice.exe

.PHONY : CMakeFiles/struct_practice.dir/build

CMakeFiles/struct_practice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\struct_practice.dir\cmake_clean.cmake
.PHONY : CMakeFiles/struct_practice.dir/clean

CMakeFiles/struct_practice.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\govin\Desktop\CPP_Practice C:\Users\govin\Desktop\CPP_Practice C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug\CMakeFiles\struct_practice.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/struct_practice.dir/depend

