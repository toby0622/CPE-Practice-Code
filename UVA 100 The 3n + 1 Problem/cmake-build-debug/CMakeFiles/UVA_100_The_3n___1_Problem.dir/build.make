# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/UVA_100_The_3n___1_Problem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UVA_100_The_3n___1_Problem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UVA_100_The_3n___1_Problem.dir/flags.make

CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.obj: CMakeFiles/UVA_100_The_3n___1_Problem.dir/flags.make
CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.obj"
	C:\MINGWW~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UVA_100_The_3n___1_Problem.dir\main.cpp.obj -c "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\main.cpp"

CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.i"
	C:\MINGWW~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\main.cpp" > CMakeFiles\UVA_100_The_3n___1_Problem.dir\main.cpp.i

CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.s"
	C:\MINGWW~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\main.cpp" -o CMakeFiles\UVA_100_The_3n___1_Problem.dir\main.cpp.s

# Object files for target UVA_100_The_3n___1_Problem
UVA_100_The_3n___1_Problem_OBJECTS = \
"CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.obj"

# External object files for target UVA_100_The_3n___1_Problem
UVA_100_The_3n___1_Problem_EXTERNAL_OBJECTS =

UVA_100_The_3n___1_Problem.exe: CMakeFiles/UVA_100_The_3n___1_Problem.dir/main.cpp.obj
UVA_100_The_3n___1_Problem.exe: CMakeFiles/UVA_100_The_3n___1_Problem.dir/build.make
UVA_100_The_3n___1_Problem.exe: CMakeFiles/UVA_100_The_3n___1_Problem.dir/linklibs.rsp
UVA_100_The_3n___1_Problem.exe: CMakeFiles/UVA_100_The_3n___1_Problem.dir/objects1.rsp
UVA_100_The_3n___1_Problem.exe: CMakeFiles/UVA_100_The_3n___1_Problem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UVA_100_The_3n___1_Problem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UVA_100_The_3n___1_Problem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UVA_100_The_3n___1_Problem.dir/build: UVA_100_The_3n___1_Problem.exe

.PHONY : CMakeFiles/UVA_100_The_3n___1_Problem.dir/build

CMakeFiles/UVA_100_The_3n___1_Problem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UVA_100_The_3n___1_Problem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/UVA_100_The_3n___1_Problem.dir/clean

CMakeFiles/UVA_100_The_3n___1_Problem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem" "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem" "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\cmake-build-debug" "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\cmake-build-debug" "C:\Users\toby0\Desktop\CPE\UVA 100 The 3n + 1 Problem\cmake-build-debug\CMakeFiles\UVA_100_The_3n___1_Problem.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/UVA_100_The_3n___1_Problem.dir/depend

