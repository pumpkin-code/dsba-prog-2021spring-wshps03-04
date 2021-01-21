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


#include <cstdint>              // must include it for uint16_t (don't use stdint.h)
#include <iostream>


int main()
{

    // indentation matters!

    char repeatAnswer;
    do
    {
        //char repeatAnswer;        // can't get acces to the var outside of the current scope
                                    // defined by {  }

        uint16_t m, n;

        std::cout << "Input 1 <= (m, n) <= 8: ";
        std::cin >> m >> n;

        // the outter loop for iterating rows
        for (uint16_t i = 0; i < m; ++i)
        {
            // the inner loop for iterating columns (elements in the i-th row)
            for (uint16_t j = 0; j < n; ++j)
            {
                std::cout << i * j ;// << '\t';
                if (j < n - 1)  // provide the output ou
                    std::cout << '\t';
            }

            // break the current line — put the cursor to the next line
            std::cout << std::endl;     // the same as std::cout << '\n';
        }

        std::cout << "Do you want to repeat the program? Press Y to repeat. ";
        std::cin >> repeatAnswer;

    } while(repeatAnswer == 'Y' || repeatAnswer == 'y');

    return 0;
}
