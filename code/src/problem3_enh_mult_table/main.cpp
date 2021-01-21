////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 3: "Enhanced Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Modification of the Problem 2 (Multiplication Table), where a user can
/// repeat a solution multiple times (with using the “do..while” loop).
///
////////////////////////////////////////////////////////////////////////////////


#include <cstdint>
#include <iostream>

using std::cin;
using std::cout;


int main()
{
    cout << "Hello, the world of multiplications!\n\n";


    // we need to wrap the meaningful part of the code in the do .. while loop statement block
    // indentation matters!

    // here we will track the user's answer answer about repeating a program
    char userAnswer;

    do
    {
        //char userAnswer;        // this object being defined here is not visiable (accessible) outside of the scope { }

        // the main part of the multiplication algorithm
        uint16_t m, n;           // using a byte is enough
        cout << "Input 1 <= (m, n) <= 8: ";
        cin >> m >> n;          // cin >> (m, n)

        // the outter loop
        for (uint16_t i = 0; i < m; ++i)
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

        cout << "Press Y to repeat the program: ";
        cin >> userAnswer;

    } while (userAnswer == 'Y' || userAnswer == 'y');

    return 0;
}
