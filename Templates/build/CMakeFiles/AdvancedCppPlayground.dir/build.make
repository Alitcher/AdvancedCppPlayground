# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/build

# Include any dependencies generated for this target.
include CMakeFiles/AdvancedCppPlayground.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AdvancedCppPlayground.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AdvancedCppPlayground.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AdvancedCppPlayground.dir/flags.make

CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o: CMakeFiles/AdvancedCppPlayground.dir/flags.make
CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o: ../src/TemplateController.cpp
CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o: CMakeFiles/AdvancedCppPlayground.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o -MF CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o.d -o CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o -c /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/src/TemplateController.cpp

CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/src/TemplateController.cpp > CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.i

CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/src/TemplateController.cpp -o CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.s

# Object files for target AdvancedCppPlayground
AdvancedCppPlayground_OBJECTS = \
"CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o"

# External object files for target AdvancedCppPlayground
AdvancedCppPlayground_EXTERNAL_OBJECTS =

AdvancedCppPlayground: CMakeFiles/AdvancedCppPlayground.dir/src/TemplateController.cpp.o
AdvancedCppPlayground: CMakeFiles/AdvancedCppPlayground.dir/build.make
AdvancedCppPlayground: CMakeFiles/AdvancedCppPlayground.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AdvancedCppPlayground"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AdvancedCppPlayground.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AdvancedCppPlayground.dir/build: AdvancedCppPlayground
.PHONY : CMakeFiles/AdvancedCppPlayground.dir/build

CMakeFiles/AdvancedCppPlayground.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AdvancedCppPlayground.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AdvancedCppPlayground.dir/clean

CMakeFiles/AdvancedCppPlayground.dir/depend:
	cd /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/build /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/build /media/alicia/Alicia/TemplateAnu/GPTExercise/AdvancedCppPlayground/Templates/build/CMakeFiles/AdvancedCppPlayground.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AdvancedCppPlayground.dir/depend

