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


#include <cstdint>              // must include it for uint16_t
#include <iostream>

int main()
{
    //unsigned char     // an unsigned integer which allows to represent a number
                        // from the range 0..255

    uint16_t m, n;       // int8 means an integer consists of 8 bits... 0..255
                        // int16_t (2^16 - 1), int32_t (2^32 - 1), int64_t (2^64 - 1)

    std::cout << "Input 1 <= (m, n) <= 8: ";
    std::cin >> m >> n;

    // for (uint8_t i = 0; i < m; ++i)

    // the outter loop for iterating rows
    for (uint16_t i = 0;     // int_expr part is for defining all necessary counters and all
            i < m;          // prodide a logical expression under which the body of the loop is executed (sort of invariant)
            ++i             // update expression that changes counter, so eventially the loop terminates
                            // ++i is an prefix form of the increment operator that
                            // adds 1 to any integral type
         )
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
        //std::cout << '\b' << std::endl; // possible but not robust solution
    }



    return 0;
}
