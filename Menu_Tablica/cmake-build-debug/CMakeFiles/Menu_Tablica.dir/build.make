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
CMAKE_SOURCE_DIR = C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Menu_Tablica.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Menu_Tablica.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Menu_Tablica.dir/flags.make

CMakeFiles/Menu_Tablica.dir/main.c.obj: CMakeFiles/Menu_Tablica.dir/flags.make
CMakeFiles/Menu_Tablica.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Menu_Tablica.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Menu_Tablica.dir\main.c.obj -c C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\main.c

CMakeFiles/Menu_Tablica.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Menu_Tablica.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\main.c > CMakeFiles\Menu_Tablica.dir\main.c.i

CMakeFiles/Menu_Tablica.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Menu_Tablica.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\main.c -o CMakeFiles\Menu_Tablica.dir\main.c.s

# Object files for target Menu_Tablica
Menu_Tablica_OBJECTS = \
"CMakeFiles/Menu_Tablica.dir/main.c.obj"

# External object files for target Menu_Tablica
Menu_Tablica_EXTERNAL_OBJECTS =

Menu_Tablica.exe: CMakeFiles/Menu_Tablica.dir/main.c.obj
Menu_Tablica.exe: CMakeFiles/Menu_Tablica.dir/build.make
Menu_Tablica.exe: CMakeFiles/Menu_Tablica.dir/linklibs.rsp
Menu_Tablica.exe: CMakeFiles/Menu_Tablica.dir/objects1.rsp
Menu_Tablica.exe: CMakeFiles/Menu_Tablica.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Menu_Tablica.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Menu_Tablica.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Menu_Tablica.dir/build: Menu_Tablica.exe

.PHONY : CMakeFiles/Menu_Tablica.dir/build

CMakeFiles/Menu_Tablica.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Menu_Tablica.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Menu_Tablica.dir/clean

CMakeFiles/Menu_Tablica.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\cmake-build-debug C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\cmake-build-debug C:\Users\48500\Desktop\Studia\programowanie\211pp2dkrecichwost\Menu_Tablica\cmake-build-debug\CMakeFiles\Menu_Tablica.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Menu_Tablica.dir/depend

