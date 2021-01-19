////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 1: "Hello, %username%".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for their name and then outputs "Hello, <user>",
/// where <user> is the name the user.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>     // cin, cout, endl, getline....
#include <string>       // string,

using std::cout;
using std::cin;

//void main()
int main()
{
    // input your code here
    cout << "Hello, world!\n\n";        // The operator<< outputs something to the stream

    cout << "Enter your name: ";
    std::string userName;       // s, str are the common names for “general strings”

//  This code allows only to input a string w/ no spaces.
//    cin >> userName;                    // The operator>> inputs something from the stream
//                                        // and uses spaces for separating different objects,
//                                        // so it can't be used for input a line that
//                                        // contains any spaces

    // This code allow to input a string containing some spaces
    std::getline(std::cin, userName);       // cin >> useName, however spaces matter here

    cout << "Hello, " << userName;


    return 0;       // it's optional accordint to the standard, however we are
                    // going to use it anyway.
}
