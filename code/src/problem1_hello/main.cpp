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


#include <iostream>         // contains definitions of cout, cin, endl, getline...
#include <string>           // string

using std::cout;
using std::cin;

int main()
{
    // std::cout is a full qualified name for the object cout including enclosing
    // namespace std with the scope operator ::

    // cout is just a name of an object available due to presence the using statement

    cout << "Hello world\n\n";

    // operator<< is used to output something on the right to the stream on the left
    // operator>> is used to input something from the stream on the left to the object on the right


    cout << "Input your name: ";
    std::string userName;           // s, str are the common name for “common strings”

    //cin >> userName;
    std::getline(cin, userName);    // compare it with cin >> userName;

    //cout << "Hello, " << userName << "!\n";           // the same as << std::endl
    cout << "Hello, " << userName << "!" << std::endl;  // the same as '\n'


    // cin reads data into provided objects one by one separating input with spaces, tabs, line endings
    // if we need to read a line containing any of the abovementioned symbols,
    // we have to consider std::getline() function (do not mix it with the member of cin,
    // namely cin.getline() — they are different ones!)


    //userName ;                      // here we mention a variable, which acts like an operand on a VALID expression
    //+ ;                             // an operator alone can't be treated as a valid expression (IS NOT)



    return 0;       // in the main() function we can omit using the return statement
                    // we are going to use the return value even we can not to do this
}


