# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/showlinux/study

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/showlinux/study/build

# Include any dependencies generated for this target.
include CMakeFiles/study.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/study.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/study.dir/flags.make

CMakeFiles/study.dir/list.c.o: CMakeFiles/study.dir/flags.make
CMakeFiles/study.dir/list.c.o: ../list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/showlinux/study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/study.dir/list.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/study.dir/list.c.o   -c /home/showlinux/study/list.c

CMakeFiles/study.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/study.dir/list.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/showlinux/study/list.c > CMakeFiles/study.dir/list.c.i

CMakeFiles/study.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/study.dir/list.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/showlinux/study/list.c -o CMakeFiles/study.dir/list.c.s

CMakeFiles/study.dir/stack.c.o: CMakeFiles/study.dir/flags.make
CMakeFiles/study.dir/stack.c.o: ../stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/showlinux/study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/study.dir/stack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/study.dir/stack.c.o   -c /home/showlinux/study/stack.c

CMakeFiles/study.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/study.dir/stack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/showlinux/study/stack.c > CMakeFiles/study.dir/stack.c.i

CMakeFiles/study.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/study.dir/stack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/showlinux/study/stack.c -o CMakeFiles/study.dir/stack.c.s

CMakeFiles/study.dir/study.c.o: CMakeFiles/study.dir/flags.make
CMakeFiles/study.dir/study.c.o: ../study.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/showlinux/study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/study.dir/study.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/study.dir/study.c.o   -c /home/showlinux/study/study.c

CMakeFiles/study.dir/study.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/study.dir/study.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/showlinux/study/study.c > CMakeFiles/study.dir/study.c.i

CMakeFiles/study.dir/study.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/study.dir/study.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/showlinux/study/study.c -o CMakeFiles/study.dir/study.c.s

# Object files for target study
study_OBJECTS = \
"CMakeFiles/study.dir/list.c.o" \
"CMakeFiles/study.dir/stack.c.o" \
"CMakeFiles/study.dir/study.c.o"

# External object files for target study
study_EXTERNAL_OBJECTS =

study: CMakeFiles/study.dir/list.c.o
study: CMakeFiles/study.dir/stack.c.o
study: CMakeFiles/study.dir/study.c.o
study: CMakeFiles/study.dir/build.make
study: CMakeFiles/study.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/showlinux/study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable study"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/study.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/study.dir/build: study

.PHONY : CMakeFiles/study.dir/build

CMakeFiles/study.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/study.dir/cmake_clean.cmake
.PHONY : CMakeFiles/study.dir/clean

CMakeFiles/study.dir/depend:
	cd /home/showlinux/study/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/showlinux/study /home/showlinux/study /home/showlinux/study/build /home/showlinux/study/build /home/showlinux/study/build/CMakeFiles/study.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/study.dir/depend

