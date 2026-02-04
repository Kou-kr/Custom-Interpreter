echo off
echo Compiling...
gcc Bubble_sort.c -o Bubble_sort.exe
if %errorlevel% neq 0 (
    echo Compilation failed.
    pause
    exit /b %errorlevel%
) else (
    echo Compilation successful.
    pause
)