# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/UVA_10140_Prime_Distance.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/UVA_10140_Prime_Distance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UVA_10140_Prime_Distance.dir/flags.make

CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.obj: CMakeFiles/UVA_10140_Prime_Distance.dir/flags.make
CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.obj"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UVA_10140_Prime_Distance.dir\main.cpp.obj -c "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\main.cpp"

CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.i"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\main.cpp" > CMakeFiles\UVA_10140_Prime_Distance.dir\main.cpp.i

CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.s"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\main.cpp" -o CMakeFiles\UVA_10140_Prime_Distance.dir\main.cpp.s

# Object files for target UVA_10140_Prime_Distance
UVA_10140_Prime_Distance_OBJECTS = \
"CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.obj"

# External object files for target UVA_10140_Prime_Distance
UVA_10140_Prime_Distance_EXTERNAL_OBJECTS =

UVA_10140_Prime_Distance.exe: CMakeFiles/UVA_10140_Prime_Distance.dir/main.cpp.obj
UVA_10140_Prime_Distance.exe: CMakeFiles/UVA_10140_Prime_Distance.dir/build.make
UVA_10140_Prime_Distance.exe: CMakeFiles/UVA_10140_Prime_Distance.dir/linklibs.rsp
UVA_10140_Prime_Distance.exe: CMakeFiles/UVA_10140_Prime_Distance.dir/objects1.rsp
UVA_10140_Prime_Distance.exe: CMakeFiles/UVA_10140_Prime_Distance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UVA_10140_Prime_Distance.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UVA_10140_Prime_Distance.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UVA_10140_Prime_Distance.dir/build: UVA_10140_Prime_Distance.exe
.PHONY : CMakeFiles/UVA_10140_Prime_Distance.dir/build

CMakeFiles/UVA_10140_Prime_Distance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UVA_10140_Prime_Distance.dir\cmake_clean.cmake
.PHONY : CMakeFiles/UVA_10140_Prime_Distance.dir/clean

CMakeFiles/UVA_10140_Prime_Distance.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance" "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance" "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\cmake-build-debug" "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\cmake-build-debug" "C:\Users\toby0\Downloads\CPE-Practice-Code\UVA 10140 Prime Distance\cmake-build-debug\CMakeFiles\UVA_10140_Prime_Distance.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/UVA_10140_Prime_Distance.dir/depend

