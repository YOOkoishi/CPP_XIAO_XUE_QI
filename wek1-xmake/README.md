# FizzBuzz C++ Project

This project implements the classic FizzBuzz problem in C++. It includes the main logic for FizzBuzz, a header file for function declarations, unit tests using Google Test, and a build configuration using XMake.

## Project Structure

```
fizzbuzz-cpp
├── src
│   ├── fizzbuzz.cpp       # Implementation of the FizzBuzz logic
│   └── fizzbuzz.h         # Header file declaring the fizzbuzz function
├── tests
│   └── test_fizzbuzz.cpp  # Unit tests for the fizzbuzz function
├── xmake.lua              # Build configuration for XMake
└── README.md              # Project documentation
```

## Building the Project

To build the project, you need to have XMake installed. You can install it by following the instructions on the [XMake website](https://xmake.io/#/).

Once XMake is installed, navigate to the project directory and run:

```bash
xmake
```

This will compile the source files and prepare the project for testing.

## Running Tests

To run the tests, you can use the following command after building the project:

```bash
xmake test
```

This will execute the unit tests defined in `tests/test_fizzbuzz.cpp` using the Google Test framework.

## Usage

You can use the `fizzbuzz` function in your code by including the header file:

```cpp
#include "fizzbuzz.h"
```

Call the function with an integer argument to get the corresponding FizzBuzz string:

```cpp
std::string result = fizzbuzz(15); // Returns "FizzBuzz"
```

## Contributing

Feel free to contribute to this project by submitting issues or pull requests. Your feedback and contributions are welcome!