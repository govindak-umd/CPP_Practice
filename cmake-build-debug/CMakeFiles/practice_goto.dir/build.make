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
include CMakeFiles/practice_goto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/practice_goto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practice_goto.dir/flags.make

CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.obj: CMakeFiles/practice_goto.dir/flags.make
CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.obj: ../PRACTICE_goto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\practice_goto.dir\PRACTICE_goto.cpp.obj -c C:\Users\govin\Desktop\CPP_Practice\PRACTICE_goto.cpp

CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\govin\Desktop\CPP_Practice\PRACTICE_goto.cpp > CMakeFiles\practice_goto.dir\PRACTICE_goto.cpp.i

CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\govin\Desktop\CPP_Practice\PRACTICE_goto.cpp -o CMakeFiles\practice_goto.dir\PRACTICE_goto.cpp.s

# Object files for target practice_goto
practice_goto_OBJECTS = \
"CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.obj"

# External object files for target practice_goto
practice_goto_EXTERNAL_OBJECTS =

practice_goto.exe: CMakeFiles/practice_goto.dir/PRACTICE_goto.cpp.obj
practice_goto.exe: CMakeFiles/practice_goto.dir/build.make
practice_goto.exe: CMakeFiles/practice_goto.dir/linklibs.rsp
practice_goto.exe: CMakeFiles/practice_goto.dir/objects1.rsp
practice_goto.exe: CMakeFiles/practice_goto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable practice_goto.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\practice_goto.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practice_goto.dir/build: practice_goto.exe

.PHONY : CMakeFiles/practice_goto.dir/build

CMakeFiles/practice_goto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\practice_goto.dir\cmake_clean.cmake
.PHONY : CMakeFiles/practice_goto.dir/clean

CMakeFiles/practice_goto.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\govin\Desktop\CPP_Practice C:\Users\govin\Desktop\CPP_Practice C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug C:\Users\govin\Desktop\CPP_Practice\cmake-build-debug\CMakeFiles\practice_goto.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/practice_goto.dir/depend

