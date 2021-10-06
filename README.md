# Simple demo of simdjson as a CMake dependency.

![MSYS2](https://github.com/simdjson/cmakedemo/workflows/MSYS2-CI/badge.svg)
![Ubuntu 18.04](https://github.com/simdjson/cmakedemo/workflows/Ubuntu%2018.04%20CI%20(GCC%207)/badge.svg)
![Ubuntu 20.04](https://github.com/simdjson/cmakedemo/workflows/Ubuntu%2020.04%20CI%20(GCC%209)/badge.svg)
![Visual Studio 2019](https://github.com/simdjson/cmakedemo/workflows/VS16-CI/badge.svg)
![Visual Studio 2019 clang](https://github.com/simdjson/cmakedemo/workflows/VS16-CLANG-CI/badge.svg)
![Visual Studio 2019 Ninja](https://github.com/simdjson/cmakedemo/workflows/VS16-Ninja-CI/badge.svg)

This repository is meant to serve as an example of how to use [simdjson](https://github.com/simdjson/simdjson) as a `CMake` dependency by having simdjson as a git submodule. It is not the most efficient approach, read on for faster approaches.

Usage:

```
mkdir build && cd build && cmake .. && cmake --build . && ./src/test
```

The simple `CMake` project builds a simple parser (`./src/test`) which can parse a given JSON document (provided as a command-line parameter) and determine whether it is valid JSON.

Please refer to the main [simdjson](https://github.com/simdjson/simdjson) project for further documentation.

## How to add simdjson as a CMake dependency

Fundamentally, it is as simple as adding the following line after copying the project as a subdirectory in your own project:

```
add_subdirectory(simdjson EXCLUDE_FROM_ALL)
```

## Why and how to add a submodule?

If your own project is under git, you probably do not want to copy simdjson in your own git repository. Instead, you want to add it as a submodule.


Once you have a git repository, adding simdjson as a submodule is relatively easy, type:

```
git submodule add https://github.com/simdjson/simdjson.git
```

Using submodules, you can control exactly which version your colleagues are using, down to the commit. Furthermore, submodules are portable: they work wherever git works.


Then you can just follow our example.

## FetchContent

We can also do [a demo using a single CMakeLists.txt file](https://github.com/simdjson/cmake_demo_single_file).

## ExternalProject

Users who prefer to use CMake's `ExternalProject` approach may refer to [our example](https://github.com/simdjson/cmakedemo_externalproject).
