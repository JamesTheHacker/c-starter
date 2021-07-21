# ASE Tools

ASE Tools sorts colors in an Adobe Swatch Exchange file (.ase).

## Requirements

ASE Tools uses [Check](https://github.com/libcheck/check) to perform unit testing and must be installed manually before running any tests.

If Check is installed in a non standard location uncomment the following line in `CMakeLists.txt` and change the directory location:

    set(CHECK_INSTALL_DIR path/to/check)

## Building

    cd ase-tools
    mkdir build
    cmake ../
    cmake --build .

## TODO

* Generate tints for each color in a color swatch

## Running Tests

