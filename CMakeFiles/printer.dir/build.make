# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_SOURCE_DIR = /home/arpangreat/cppexamples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arpangreat/cppexamples

# Include any dependencies generated for this target.
include CMakeFiles/printer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/printer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/printer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printer.dir/flags.make

CMakeFiles/printer.dir/fmtExs/printer.cpp.o: CMakeFiles/printer.dir/flags.make
CMakeFiles/printer.dir/fmtExs/printer.cpp.o: fmtExs/printer.cpp
CMakeFiles/printer.dir/fmtExs/printer.cpp.o: CMakeFiles/printer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arpangreat/cppexamples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/printer.dir/fmtExs/printer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/printer.dir/fmtExs/printer.cpp.o -MF CMakeFiles/printer.dir/fmtExs/printer.cpp.o.d -o CMakeFiles/printer.dir/fmtExs/printer.cpp.o -c /home/arpangreat/cppexamples/fmtExs/printer.cpp

CMakeFiles/printer.dir/fmtExs/printer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/printer.dir/fmtExs/printer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arpangreat/cppexamples/fmtExs/printer.cpp > CMakeFiles/printer.dir/fmtExs/printer.cpp.i

CMakeFiles/printer.dir/fmtExs/printer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/printer.dir/fmtExs/printer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arpangreat/cppexamples/fmtExs/printer.cpp -o CMakeFiles/printer.dir/fmtExs/printer.cpp.s

# Object files for target printer
printer_OBJECTS = \
"CMakeFiles/printer.dir/fmtExs/printer.cpp.o"

# External object files for target printer
printer_EXTERNAL_OBJECTS =

bin/printer: CMakeFiles/printer.dir/fmtExs/printer.cpp.o
bin/printer: CMakeFiles/printer.dir/build.make
bin/printer: /usr/local/lib/libfmt.so.9.1.1
bin/printer: CMakeFiles/printer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/arpangreat/cppexamples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/printer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/printer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printer.dir/build: bin/printer
.PHONY : CMakeFiles/printer.dir/build

CMakeFiles/printer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/printer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/printer.dir/clean

CMakeFiles/printer.dir/depend:
	cd /home/arpangreat/cppexamples && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arpangreat/cppexamples /home/arpangreat/cppexamples /home/arpangreat/cppexamples /home/arpangreat/cppexamples /home/arpangreat/cppexamples/CMakeFiles/printer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printer.dir/depend

