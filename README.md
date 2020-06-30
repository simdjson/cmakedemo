# Simple demo of simdjson as a CMake dependency.
[![Build Status](https://cloud.drone.io/api/badges/simdjson/cmakedemo/status.svg)](https://cloud.drone.io/simdjson/cmakedemo)

This repository is meant to serve as an example of how to use [simdjson](https://github.com/simdjson/simdjson) as a `CMake` dependency by having simdjson as a git submodule. 

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

## ExternalProject

Users who prefer to use CMake's `ExternalProject` approach may refer to [our example](https://github.com/simdjson/cmakedemo_externalproject).
