# CMAKE generated file: DO NOT EDIT!
# Generated by "MSYS Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/D/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "/D/Program Files/CMake/bin/cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /D/Documents/Base-utils

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /D/Documents/Base-utils/build

# Include any dependencies generated for this target.
include src/CMakeFiles/yes.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/yes.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/yes.dir/flags.make

src/CMakeFiles/yes.dir/yes.c.obj: src/CMakeFiles/yes.dir/flags.make
src/CMakeFiles/yes.dir/yes.c.obj: src/CMakeFiles/yes.dir/includes_C.rsp
src/CMakeFiles/yes.dir/yes.c.obj: ../src/yes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/D/Documents/Base-utils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/yes.dir/yes.c.obj"
	cd /D/Documents/Base-utils/build/src && /D/mingw64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/yes.dir/yes.c.obj   -c /D/Documents/Base-utils/src/yes.c

src/CMakeFiles/yes.dir/yes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/yes.dir/yes.c.i"
	cd /D/Documents/Base-utils/build/src && /D/mingw64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/Documents/Base-utils/src/yes.c > CMakeFiles/yes.dir/yes.c.i

src/CMakeFiles/yes.dir/yes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/yes.dir/yes.c.s"
	cd /D/Documents/Base-utils/build/src && /D/mingw64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/Documents/Base-utils/src/yes.c -o CMakeFiles/yes.dir/yes.c.s

# Object files for target yes
yes_OBJECTS = \
"CMakeFiles/yes.dir/yes.c.obj"

# External object files for target yes
yes_EXTERNAL_OBJECTS =

bin/yes.exe: src/CMakeFiles/yes.dir/yes.c.obj
bin/yes.exe: src/CMakeFiles/yes.dir/build.make
bin/yes.exe: src/CMakeFiles/yes.dir/linklibs.rsp
bin/yes.exe: src/CMakeFiles/yes.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/D/Documents/Base-utils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../bin/yes.exe"
	cd /D/Documents/Base-utils/build/src && "/D/Program Files/CMake/bin/cmake.exe" -E remove -f CMakeFiles/yes.dir/objects.a
	cd /D/Documents/Base-utils/build/src && /D/mingw64/bin/ar.exe cr CMakeFiles/yes.dir/objects.a @CMakeFiles/yes.dir/objects1.rsp
	cd /D/Documents/Base-utils/build/src && /D/mingw64/bin/gcc.exe    -Wl,--whole-archive CMakeFiles/yes.dir/objects.a -Wl,--no-whole-archive  -o ../bin/yes.exe -Wl,--out-implib,../Lib/libyes.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/yes.dir/linklibs.rsp

# Rule to build all files generated by this target.
src/CMakeFiles/yes.dir/build: bin/yes.exe

.PHONY : src/CMakeFiles/yes.dir/build

src/CMakeFiles/yes.dir/clean:
	cd /D/Documents/Base-utils/build/src && $(CMAKE_COMMAND) -P CMakeFiles/yes.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/yes.dir/clean

src/CMakeFiles/yes.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/Documents/Base-utils /D/Documents/Base-utils/src /D/Documents/Base-utils/build /D/Documents/Base-utils/build/src /D/Documents/Base-utils/build/src/CMakeFiles/yes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/yes.dir/depend

