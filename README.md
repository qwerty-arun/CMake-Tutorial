# What is CMake?
- CMake is a `build system generator`.
- It does not compile your code directly. Instead, it creates build files (like Makefiles or Visual Studio solutions) for your system/compiler.
- Then you use those to build your project.

# As a beginner, learn these:
- `add_executable` -> make a program.
- `add_library` + `target_link_libraries` -> modularize code.
- set(CMake_CXX_STANDARD ...) -> control C++ version.
- project() / cmake_minimum_required() -> boilerplate.
- Build workflow:
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

# Intermediate
- Learn find_package (to use external libraries like Boost, OpenCV, etc.).
- Learn target_compile_options (set compiler flags).
- Learn how to write subdirectory CMakeLists for big projects.