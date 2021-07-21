# C Starter Project

A C boilerplate/starter project with CMake and [Check](https://libcheck.github.io/check/) unit testing support.

## Requirements

I use [Check](https://github.com/libcheck/check) to perform unit testing. It must be installed on your system before running any tests.

If Check is installed in a non standard location uncomment the following line in `CMakeLists.txt` and change the directory location:

    set(CHECK_INSTALL_DIR path/to/check)

## Before You Compile

Make the following changes to `CMakeLists.txt`:

    set(PROJECT_NAME yourProjectName)

## Testing & Building

    cd c-starter
    mkdir build
    cmake ..

To run unit tests:

    make test

Complete the build by running:

    cmake --build .

