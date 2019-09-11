# my_library

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam purus massa,
elementum eu accumsan vel, pretium vitae augue. Sed in cursus nulla. Nullam ac
urna quis augue porttitor bibendum. Vivamus vitae mauris nec velit consectetur
elementum. Phasellus semper pellentesque sem, vel convallis sem porta et. Sed
egestas convallis diam, in consectetur eros. Vivamus a euismod ipsum, ut iaculis
lacus. Aliquam mauris turpis, sagittis et metus quis, tincidunt mattis turpis.
Donec nec mollis ex. Ut elementum sapien tincidunt, posuere sem mollis,
fermentum augue. Mauris lectus ante, sodales pellentesque placerat quis,
eleifend in lorem. Mauris sed mollis sapien.

## Usage

Run the following in a *Posix* compliant shell:

```shell script
mkdir -p extern
git submodule add                             \
  https://github.com/brodeuralexis/my_library \
  extern/my_library
```

The library can be imported using the following line in the *CMakeLists.txt* at
the root of your project:
```cmake
add_subdirectory(extern/my_library)
```

Finally, the library can be linked to existing targets like so:
```cmake
target_link_library(my_executable
    PUBLIC
        my_library::my_library
)
```

## Testing

> Running the unit tests for this library should be done through an IDE like
> Visual Studio 2017/2019 or CLion.

Run the following in a *Posix* compliant shell:
```shell script
mkdir build && cd $_
cmake ..
make my_library_test
./test/my_library_test
```
