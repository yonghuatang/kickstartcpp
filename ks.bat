@REM (c) 02 March 2022 - James Tang
@REM G++ (C++17) Compiler Helper for Google kickstart
@REM Version 0.1.0

@echo off
title G++ (C++17) Compiler Helper
echo G++ (C++17) Compiler Helper for Google kickstart v0.1.0 (c) James Tang
set /p YEAR="Please enter year> "
set /p ROUND="Please enter round> "
set /p QUESTION="Please enter question number> "
g++ -Wall -std=c++17 -o q%QUESTION% ks20%YEAR%r%ROUND%q%QUESTION%.cpp && q%QUESTION%
echo Press any key to exit . . .
timeout /t -1 >nul
