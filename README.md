# BigInt Library

The BigInt library provides a data type for handling arbitrarily large integers in C++. This library allows you to perform arithmetic operations, such as addition, subtraction, multiplication, and division, on integers of any size, limited only by the available memory.

## Features

- **Arithmetic Operations**: Addition, subtraction, multiplication, and division of large integers.
- **Comparison Operators**: Support for comparison operators such as equal to, not equal to, less than, greater than, etc.
- **Increment and Decrement Operators**: Prefix and postfix increment and decrement operators.
- **Exponentiation**: Support for exponentiation operation using the `^` operator.
- **Mathematical Functions**: Functions to calculate the factorial, Fibonacci sequence, and Catalan numbers.
- **Input/Output Operators**: Overloaded `<<` and `>>` operators for input and output operations.

## Getting Started

To use the BigInt library in your C++ project, follow these steps:

1. Clone this repository to your local machine:

    ```bash
    git clone https://github.com/yourusername/BigInt.git
    ```

2. Include the `BigInt.h` header file in your C++ source files:

    ```cpp
    #include "BigInt.h"
    ```

3. Start using the BigInt data type in your code:

    ```cpp
    BigInt a("12345678901234567890");
    BigInt b(98765432109876543210);
    
    BigInt sum = a + b;
    std::cout << "Sum: " << sum << std::endl;
    ```

## Documentation

For detailed documentation on how to use the BigInt library and its various functions, refer to the `BigInt.h` header file. Each function is documented with comments explaining its purpose and usage.

## Examples

Check out the `examples` directory for sample programs demonstrating the usage of the BigInt library for various arithmetic operations, mathematical functions, and more.

## Contributing

Contributions to the BigInt library are welcome! If you find any bugs or have suggestions for improvements, please open an issue or submit a pull request on GitHub.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

Feel free to customize this README file according to your project's specific details and requirements.
