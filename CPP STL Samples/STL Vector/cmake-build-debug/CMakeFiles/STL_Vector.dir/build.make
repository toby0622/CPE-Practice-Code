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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/STL_Vector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/STL_Vector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/STL_Vector.dir/flags.make

CMakeFiles/STL_Vector.dir/main.cpp.obj: CMakeFiles/STL_Vector.dir/flags.make
CMakeFiles/STL_Vector.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/STL_Vector.dir/main.cpp.obj"
	C:\mingw-w64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\STL_Vector.dir\main.cpp.obj -c "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\main.cpp"

CMakeFiles/STL_Vector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/STL_Vector.dir/main.cpp.i"
	C:\mingw-w64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\main.cpp" > CMakeFiles\STL_Vector.dir\main.cpp.i

CMakeFiles/STL_Vector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/STL_Vector.dir/main.cpp.s"
	C:\mingw-w64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\main.cpp" -o CMakeFiles\STL_Vector.dir\main.cpp.s

# Object files for target STL_Vector
STL_Vector_OBJECTS = \
"CMakeFiles/STL_Vector.dir/main.cpp.obj"

# External object files for target STL_Vector
STL_Vector_EXTERNAL_OBJECTS =

STL_Vector.exe: CMakeFiles/STL_Vector.dir/main.cpp.obj
STL_Vector.exe: CMakeFiles/STL_Vector.dir/build.make
STL_Vector.exe: CMakeFiles/STL_Vector.dir/linklibs.rsp
STL_Vector.exe: CMakeFiles/STL_Vector.dir/objects1.rsp
STL_Vector.exe: CMakeFiles/STL_Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable STL_Vector.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\STL_Vector.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/STL_Vector.dir/build: STL_Vector.exe

.PHONY : CMakeFiles/STL_Vector.dir/build

CMakeFiles/STL_Vector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\STL_Vector.dir\cmake_clean.cmake
.PHONY : CMakeFiles/STL_Vector.dir/clean

CMakeFiles/STL_Vector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector" "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector" "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\cmake-build-debug" "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\cmake-build-debug" "E:\GitHub Repositories\CPE-Practice-Code\CPP STL Samples\STL Vector\cmake-build-debug\CMakeFiles\STL_Vector.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/STL_Vector.dir/depend

