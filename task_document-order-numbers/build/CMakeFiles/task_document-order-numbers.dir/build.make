# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/narvandre/programacioncpp/cristianbravo/task_document-order-numbers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/narvandre/programacioncpp/cristianbravo/build

# Include any dependencies generated for this target.
include CMakeFiles/task_document-order-numbers.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/task_document-order-numbers.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/task_document-order-numbers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task_document-order-numbers.dir/flags.make

CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o: CMakeFiles/task_document-order-numbers.dir/flags.make
CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o: /home/narvandre/programacioncpp/cristianbravo/task_document-order-numbers/src/lector.cpp
CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o: CMakeFiles/task_document-order-numbers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/narvandre/programacioncpp/cristianbravo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o -MF CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o.d -o CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o -c /home/narvandre/programacioncpp/cristianbravo/task_document-order-numbers/src/lector.cpp

CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/narvandre/programacioncpp/cristianbravo/task_document-order-numbers/src/lector.cpp > CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.i

CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/narvandre/programacioncpp/cristianbravo/task_document-order-numbers/src/lector.cpp -o CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.s

# Object files for target task_document-order-numbers
task_document__order__numbers_OBJECTS = \
"CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o"

# External object files for target task_document-order-numbers
task_document__order__numbers_EXTERNAL_OBJECTS =

task_document-order-numbers: CMakeFiles/task_document-order-numbers.dir/src/lector.cpp.o
task_document-order-numbers: CMakeFiles/task_document-order-numbers.dir/build.make
task_document-order-numbers: CMakeFiles/task_document-order-numbers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/narvandre/programacioncpp/cristianbravo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task_document-order-numbers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task_document-order-numbers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task_document-order-numbers.dir/build: task_document-order-numbers
.PHONY : CMakeFiles/task_document-order-numbers.dir/build

CMakeFiles/task_document-order-numbers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task_document-order-numbers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task_document-order-numbers.dir/clean

CMakeFiles/task_document-order-numbers.dir/depend:
	cd /home/narvandre/programacioncpp/cristianbravo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/narvandre/programacioncpp/cristianbravo/task_document-order-numbers /home/narvandre/programacioncpp/cristianbravo/task_document-order-numbers /home/narvandre/programacioncpp/cristianbravo/build /home/narvandre/programacioncpp/cristianbravo/build /home/narvandre/programacioncpp/cristianbravo/build/CMakeFiles/task_document-order-numbers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task_document-order-numbers.dir/depend
