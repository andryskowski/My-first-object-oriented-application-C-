# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /home/student/clion-2019.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/student/clion-2019.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/Pulpit/224247/trunk/poprawny_projekt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/Pulpit/224247/trunk/poprawny_projekt/cmake-build-debug

# Utility rule file for check.

# Include the progress variables for this target.
include biblioteka/CMakeFiles/check.dir/progress.make

biblioteka/CMakeFiles/check:
	/home/student/clion-2019.2.2/bin/cmake/linux/bin/cmake -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all /home/student/clion-2019.2.2/bin/cmake/linux/bin/ctest -C Debug --verbose

check: biblioteka/CMakeFiles/check
check: biblioteka/CMakeFiles/check.dir/build.make

.PHONY : check

# Rule to build all files generated by this target.
biblioteka/CMakeFiles/check.dir/build: check

.PHONY : biblioteka/CMakeFiles/check.dir/build

biblioteka/CMakeFiles/check.dir/clean:
	cd /home/student/Pulpit/224247/trunk/poprawny_projekt/cmake-build-debug/biblioteka && $(CMAKE_COMMAND) -P CMakeFiles/check.dir/cmake_clean.cmake
.PHONY : biblioteka/CMakeFiles/check.dir/clean

biblioteka/CMakeFiles/check.dir/depend:
	cd /home/student/Pulpit/224247/trunk/poprawny_projekt/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/Pulpit/224247/trunk/poprawny_projekt /home/student/Pulpit/224247/trunk/poprawny_projekt/biblioteka /home/student/Pulpit/224247/trunk/poprawny_projekt/cmake-build-debug /home/student/Pulpit/224247/trunk/poprawny_projekt/cmake-build-debug/biblioteka /home/student/Pulpit/224247/trunk/poprawny_projekt/cmake-build-debug/biblioteka/CMakeFiles/check.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : biblioteka/CMakeFiles/check.dir/depend

