# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/flags.make

CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.obj: CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/flags.make
CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.obj"
	C:\MINGWW~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UVA_10055_Hashmat_the_Brave_Warrior.dir\main.cpp.obj -c "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\main.cpp"

CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.i"
	C:\MINGWW~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\main.cpp" > CMakeFiles\UVA_10055_Hashmat_the_Brave_Warrior.dir\main.cpp.i

CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.s"
	C:\MINGWW~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\main.cpp" -o CMakeFiles\UVA_10055_Hashmat_the_Brave_Warrior.dir\main.cpp.s

# Object files for target UVA_10055_Hashmat_the_Brave_Warrior
UVA_10055_Hashmat_the_Brave_Warrior_OBJECTS = \
"CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.obj"

# External object files for target UVA_10055_Hashmat_the_Brave_Warrior
UVA_10055_Hashmat_the_Brave_Warrior_EXTERNAL_OBJECTS =

UVA_10055_Hashmat_the_Brave_Warrior.exe: CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/main.cpp.obj
UVA_10055_Hashmat_the_Brave_Warrior.exe: CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/build.make
UVA_10055_Hashmat_the_Brave_Warrior.exe: CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/linklibs.rsp
UVA_10055_Hashmat_the_Brave_Warrior.exe: CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/objects1.rsp
UVA_10055_Hashmat_the_Brave_Warrior.exe: CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UVA_10055_Hashmat_the_Brave_Warrior.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UVA_10055_Hashmat_the_Brave_Warrior.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/build: UVA_10055_Hashmat_the_Brave_Warrior.exe

.PHONY : CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/build

CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UVA_10055_Hashmat_the_Brave_Warrior.dir\cmake_clean.cmake
.PHONY : CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/clean

CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior" "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior" "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\cmake-build-debug" "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\cmake-build-debug" "C:\Users\toby0\Desktop\CPE\UVA 10055 Hashmat the Brave Warrior\cmake-build-debug\CMakeFiles\UVA_10055_Hashmat_the_Brave_Warrior.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/UVA_10055_Hashmat_the_Brave_Warrior.dir/depend

