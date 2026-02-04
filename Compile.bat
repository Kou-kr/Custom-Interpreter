echo off
echo Compiling...
gcc Bubble_sort_that_stores_the_output_to_a_file.c -o Bubble_sort.exe
if %errorlevel% neq 0 (
    echo Compilation failed.
    pause
    exit /b %errorlevel%
) else (
    echo Compilation successful.
    pause
)