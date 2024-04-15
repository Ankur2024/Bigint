#include <bits/stdc++.h>
#include "BigInt.h"
using namespace std;



int main() {
    try {
        // Create BigInt objects
        BigInt num1("123456789012345678901234567890");
        BigInt num2("98765432109876543210987654321");
        BigInt num3("-98765432109876543210987654321");

        // Display BigInt objects
        cout << "num1: " << num1 << endl;
        cout << "num2: " << num2 << endl;
        cout << "num3: " << num3 << endl;

        // Perform arithmetic operations
        BigInt sum = num1 + num2;
        BigInt difference = num1 - num2;
        BigInt product = num1 * num2;
        BigInt division = num1 / num2;
        BigInt remainder = num1 % num2;

        // Display results of arithmetic operations
        cout << "Sum: " << sum << endl;
        cout << "Difference: " << difference << endl;
        cout << "Product: " << product << endl;
        cout << "Division: " << division << endl;
        cout << "Remainder: " << remainder << endl;

        // Perform comparison operations
        bool isEqual = (num1 == num2);
        bool isNotEqual = (num1 != num2);
        bool isLessThan = (num1 < num2);
        bool isGreaterThan = (num1 > num2);
        bool isLessThanOrEqual = (num1 <= num2);
        bool isGreaterThanOrEqual = (num1 >= num2);

        // Display results of comparison operations
        cout << "Is num1 equal to num2? " << (isEqual ? "Yes" : "No") << endl;
        cout << "Is num1 not equal to num2? " << (isNotEqual ? "Yes" : "No") << endl;
        cout << "Is num1 less than num2? " << (isLessThan ? "Yes" : "No") << endl;
        cout << "Is num1 greater than num2? " << (isGreaterThan ? "Yes" : "No") << endl;
        cout << "Is num1 less than or equal to num2? " << (isLessThanOrEqual ? "Yes" : "No") << endl;
        cout << "Is num1 greater than or equal to num2? " << (isGreaterThanOrEqual ? "Yes" : "No") << endl;

        // Perform other operations
        BigInt power = num1 ^ BigInt(3); // Cube of num1
        BigInt sqrtNum2 = sqrt(num2); // Square root of num2
        BigInt catalan10 = NthCatalan(10); // 10th Catalan number
        BigInt fib10 = NthFibonacci(10); // 10th Fibonacci number
        BigInt fact10 = Factorial(10); // Factorial of 10

        // Display results of other operations
        cout << "Cube of num1: " << power << endl;
        cout << "Square root of num2: " << sqrtNum2 << endl;
        cout << "10th Catalan number: " << catalan10 << endl;
        cout << "10th Fibonacci number: " << fib10 << endl;
        cout << "Factorial of 10: " << fact10 << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
