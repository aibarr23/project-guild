# Using tiva C for embedded development with no IDE

refs:
CMake and lm4tools for TM4C123 Development Board

Tutorial here:

https://www.hackster.io/tcss/upload-code-to-ti-tm4c123-using-linux-cmake-and-lm4tools-c33cec


## Building and uploading our code

we can use CMake files to create a Make file that can compile and
upload the code directly to our board.

Make sure your board is plugged in and switched on for these steps.

```
mkdir build
cd build
cmake ..
make
sudo make flash
```

NOTE: if the last command does not work try bellow instead
and the link for more information on how tofix it
```
sudo env PATH=$PATH make flash
