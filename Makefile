# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/ouilol/Projets/WireguardManager/WireguardManager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ouilol/Projets/WireguardManager/WireguardManager

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/ouilol/Projets/WireguardManager/WireguardManager/CMakeFiles /home/ouilol/Projets/WireguardManager/WireguardManager/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/ouilol/Projets/WireguardManager/WireguardManager/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named WireguardManager

# Build rule for target.
WireguardManager: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 WireguardManager
.PHONY : WireguardManager

# fast build rule for target.
WireguardManager/fast:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/build
.PHONY : WireguardManager/fast

#=============================================================================
# Target rules for targets named WireguardManager_autogen

# Build rule for target.
WireguardManager_autogen: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 WireguardManager_autogen
.PHONY : WireguardManager_autogen

# fast build rule for target.
WireguardManager_autogen/fast:
	$(MAKE) -f CMakeFiles/WireguardManager_autogen.dir/build.make CMakeFiles/WireguardManager_autogen.dir/build
.PHONY : WireguardManager_autogen/fast

WireguardManagerLib/WireguardManagerLib/WireguardManager.o: WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.o

.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManager.o

# target to build an object file
WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.o:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.o
.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.o

WireguardManagerLib/WireguardManagerLib/WireguardManager.i: WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.i

.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManager.i

# target to preprocess a source file
WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.i:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.i
.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.i

WireguardManagerLib/WireguardManagerLib/WireguardManager.s: WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.s

.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManager.s

# target to generate assembly for a file
WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.s:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.s
.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManager.cpp.s

WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.o: WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.o

.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.o

# target to build an object file
WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.o:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.o
.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.o

WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.i: WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.i

.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.i

# target to preprocess a source file
WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.i:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.i
.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.i

WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.s: WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.s

.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.s

# target to generate assembly for a file
WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.s:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.s
.PHONY : WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.cpp.s

WireguardManagerLib/WireguardManagerLib/pch.o: WireguardManagerLib/WireguardManagerLib/pch.cpp.o

.PHONY : WireguardManagerLib/WireguardManagerLib/pch.o

# target to build an object file
WireguardManagerLib/WireguardManagerLib/pch.cpp.o:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/pch.cpp.o
.PHONY : WireguardManagerLib/WireguardManagerLib/pch.cpp.o

WireguardManagerLib/WireguardManagerLib/pch.i: WireguardManagerLib/WireguardManagerLib/pch.cpp.i

.PHONY : WireguardManagerLib/WireguardManagerLib/pch.i

# target to preprocess a source file
WireguardManagerLib/WireguardManagerLib/pch.cpp.i:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/pch.cpp.i
.PHONY : WireguardManagerLib/WireguardManagerLib/pch.cpp.i

WireguardManagerLib/WireguardManagerLib/pch.s: WireguardManagerLib/WireguardManagerLib/pch.cpp.s

.PHONY : WireguardManagerLib/WireguardManagerLib/pch.s

# target to generate assembly for a file
WireguardManagerLib/WireguardManagerLib/pch.cpp.s:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManagerLib/WireguardManagerLib/pch.cpp.s
.PHONY : WireguardManagerLib/WireguardManagerLib/pch.cpp.s

WireguardManager_autogen/mocs_compilation.o: WireguardManager_autogen/mocs_compilation.cpp.o

.PHONY : WireguardManager_autogen/mocs_compilation.o

# target to build an object file
WireguardManager_autogen/mocs_compilation.cpp.o:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManager_autogen/mocs_compilation.cpp.o
.PHONY : WireguardManager_autogen/mocs_compilation.cpp.o

WireguardManager_autogen/mocs_compilation.i: WireguardManager_autogen/mocs_compilation.cpp.i

.PHONY : WireguardManager_autogen/mocs_compilation.i

# target to preprocess a source file
WireguardManager_autogen/mocs_compilation.cpp.i:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManager_autogen/mocs_compilation.cpp.i
.PHONY : WireguardManager_autogen/mocs_compilation.cpp.i

WireguardManager_autogen/mocs_compilation.s: WireguardManager_autogen/mocs_compilation.cpp.s

.PHONY : WireguardManager_autogen/mocs_compilation.s

# target to generate assembly for a file
WireguardManager_autogen/mocs_compilation.cpp.s:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/WireguardManager_autogen/mocs_compilation.cpp.s
.PHONY : WireguardManager_autogen/mocs_compilation.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/main.cpp.s
.PHONY : main.cpp.s

mainwindow.o: mainwindow.cpp.o

.PHONY : mainwindow.o

# target to build an object file
mainwindow.cpp.o:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/mainwindow.cpp.o
.PHONY : mainwindow.cpp.o

mainwindow.i: mainwindow.cpp.i

.PHONY : mainwindow.i

# target to preprocess a source file
mainwindow.cpp.i:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/mainwindow.cpp.i
.PHONY : mainwindow.cpp.i

mainwindow.s: mainwindow.cpp.s

.PHONY : mainwindow.s

# target to generate assembly for a file
mainwindow.cpp.s:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/mainwindow.cpp.s
.PHONY : mainwindow.cpp.s

newtunneldialog.o: newtunneldialog.cpp.o

.PHONY : newtunneldialog.o

# target to build an object file
newtunneldialog.cpp.o:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/newtunneldialog.cpp.o
.PHONY : newtunneldialog.cpp.o

newtunneldialog.i: newtunneldialog.cpp.i

.PHONY : newtunneldialog.i

# target to preprocess a source file
newtunneldialog.cpp.i:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/newtunneldialog.cpp.i
.PHONY : newtunneldialog.cpp.i

newtunneldialog.s: newtunneldialog.cpp.s

.PHONY : newtunneldialog.s

# target to generate assembly for a file
newtunneldialog.cpp.s:
	$(MAKE) -f CMakeFiles/WireguardManager.dir/build.make CMakeFiles/WireguardManager.dir/newtunneldialog.cpp.s
.PHONY : newtunneldialog.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... WireguardManager"
	@echo "... WireguardManager_autogen"
	@echo "... WireguardManagerLib/WireguardManagerLib/WireguardManager.o"
	@echo "... WireguardManagerLib/WireguardManagerLib/WireguardManager.i"
	@echo "... WireguardManagerLib/WireguardManagerLib/WireguardManager.s"
	@echo "... WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.o"
	@echo "... WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.i"
	@echo "... WireguardManagerLib/WireguardManagerLib/WireguardManagerLib.s"
	@echo "... WireguardManagerLib/WireguardManagerLib/pch.o"
	@echo "... WireguardManagerLib/WireguardManagerLib/pch.i"
	@echo "... WireguardManagerLib/WireguardManagerLib/pch.s"
	@echo "... WireguardManager_autogen/mocs_compilation.o"
	@echo "... WireguardManager_autogen/mocs_compilation.i"
	@echo "... WireguardManager_autogen/mocs_compilation.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... mainwindow.o"
	@echo "... mainwindow.i"
	@echo "... mainwindow.s"
	@echo "... newtunneldialog.o"
	@echo "... newtunneldialog.i"
	@echo "... newtunneldialog.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
