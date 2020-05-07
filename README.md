# Simple demo of simdjson as a CMake dependency.
[![Build Status](https://cloud.drone.io/api/badges/simdjson/cmakedemo/status.svg)](https://cloud.drone.io/simdjson/cmakedemo)

This repository is meant to serve as an example of how to use [simdjson](https://github.com/simdjson/simdjson) as a `CMake` dependency.

Usage:

```
mkdir build && cd build && cmake .. && cmake --build . && ./src/test
```

The simple `CMake` project builds a simple parser (`./src/test`) which can parse a given JSON document (provided as a command-line parameter) and determine whether it is valid JSON.

Please refer to the main [simdjson](https://github.com/simdjson/simdjson) project for further documentation.
