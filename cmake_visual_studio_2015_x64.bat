@echo off

cmake -G "Visual Studio 14 2015 Win64"  %"Set the generator to Visual Studio 2015 x64"% ^
      -H.                               %"Set the source directory to the current directory"% ^
      -B.\_build                        %"Set the build directory to the _build subdirectory"% ^
      %*                                %"Forward additional command line arguments to CMake"%

@echo on
