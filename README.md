# Simple demo to show that we can use simdjson as a CMake dependency.
[![Build Status](https://cloud.drone.io/api/badges/simdjson/cmakedemo/status.svg)](https://cloud.drone.io/simdjson/cmakedemo)

Usage:

```
mkdir build && cd build && cmake .. && cmake --build . && ./src/test
```

The simple `CMake` project builds a simple parser (`./src/test`) which can parse a given JSON document (provided as a command-line parameter) and determine whether it is valid JSON.
