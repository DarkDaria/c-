# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Fibonacci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Fibonacci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fibonacci.dir/flags.make

CMakeFiles/Fibonacci.dir/cw_5_5.c.obj: CMakeFiles/Fibonacci.dir/flags.make
CMakeFiles/Fibonacci.dir/cw_5_5.c.obj: ../cw_5_5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Fibonacci.dir/cw_5_5.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Fibonacci.dir\cw_5_5.c.obj -c C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cw_5_5.c

CMakeFiles/Fibonacci.dir/cw_5_5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Fibonacci.dir/cw_5_5.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cw_5_5.c > CMakeFiles\Fibonacci.dir\cw_5_5.c.i

CMakeFiles/Fibonacci.dir/cw_5_5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Fibonacci.dir/cw_5_5.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cw_5_5.c -o CMakeFiles\Fibonacci.dir\cw_5_5.c.s

# Object files for target Fibonacci
Fibonacci_OBJECTS = \
"CMakeFiles/Fibonacci.dir/cw_5_5.c.obj"

# External object files for target Fibonacci
Fibonacci_EXTERNAL_OBJECTS =

Fibonacci.exe: CMakeFiles/Fibonacci.dir/cw_5_5.c.obj
Fibonacci.exe: CMakeFiles/Fibonacci.dir/build.make
Fibonacci.exe: CMakeFiles/Fibonacci.dir/linklibs.rsp
Fibonacci.exe: CMakeFiles/Fibonacci.dir/objects1.rsp
Fibonacci.exe: CMakeFiles/Fibonacci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Fibonacci.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Fibonacci.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fibonacci.dir/build: Fibonacci.exe

.PHONY : CMakeFiles/Fibonacci.dir/build

CMakeFiles/Fibonacci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Fibonacci.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Fibonacci.dir/clean

CMakeFiles/Fibonacci.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cmake-build-debug C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cmake-build-debug C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Fibonacci\cmake-build-debug\CMakeFiles\Fibonacci.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Fibonacci.dir/depend

