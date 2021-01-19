////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 2: "Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for two numbers, 1 <= (m, n) <= 8 and prints a rectangle
/// multiplication table aligning output at tab positions.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using std::cin;
using std::cout;

int main()
{
    cout << "Hello, the world of multiplications!\n\n";

    // in C++ you may allocate one byte (one octet) al least = 8 bits
    // unsigned char   0..255  (2^8 - 1)

    // if we use any char datatype (char or unsigned char) together with the
    // cin or the cout object, the variables are treated as characters, not simply
    // by “small” integers

    uint16_t m, n;           // using a byte is enough
    cout << "Input 1 <= (m, n) <= 8: ";
    cin >> m >> n;          // cin >> (m, n)


    // ++i is the prefix form of the increment operator (i == 3 -> i == 4),
    //  we have to prefer using this version unless we really need to have the
    //  previous value of i provided by the postfix version
    // i++ is the postfix version of the increment operator



    // print a table

    // for (uint16_t i = 0; i < m; ++i)

    // the outter loop
    for (uint16_t i = 0;        // the initializaion part, which creates a counter i
         i < m;                 // the test expression part, whose logical condition is checked BEFORE each iteration of the loop
         ++i                    // modifying expression, changing the counter so eventually we'll reach the false ^^^
         )
    {
        // the inner loop
        for (uint16_t j = 0; j < n; ++j)
        {
            cout << i * j; // << '\t';
            if (j < n - 1)
                cout << '\t';
        }
        cout << '\n';
    }

    return 0;
}
