cmake_minimum_required(VERSION 3.0)
project(BigIntProject)

# Add source files
set(SOURCES
    BigInt.cpp
    main.cpp
)

# Add executable target
add_executable(bigint_exec ${SOURCES})
