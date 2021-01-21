////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 4: "Length of a C-string (strlen)".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Count the length of a C-style string initialized with a string
/// literal (implement strlen() ).
///
////////////////////////////////////////////////////////////////////////////////


#include <cstddef>      // size_t
#include <iostream>


// fun example only
namespace MyOwnNamespace {

    int ALMOST_GLOBAL_OBJ;
    int min(int a, int b)
    {
        if (a < b)
            return a;
        return b;
    }

};


//int cin;

using namespace std;    // can be used in a CPP-module, however it's better to
                        // consider only needed components with the using statement
                        // **MUST NOT** be used in any header file (.h, .hpp)
//using std::cout;

//using namespace MyOwnNamespace;
//using MyOwnNamespace::min;

int main()
{

    //MyOwnNamespace::ALMOST_GLOBAL_OBJ;
//      MyOwnNamespace::min(10, 20);      // the function defined above by the programmer is called
//                      min(10, 20);      // the stadard version of the min function defined in some of the standard header is called

    // create some STATIC arrays
    char arr1[4] = { 'a', 'b', 'c', '1' };
    char arr2[6] = { '2', '3', '4'};
    char arr3[] = { 'x', 'y', 'z'};
    // ^ char means the datatype for individual elements of the array

    // the trick (the approach) to get the real size of a static array:
    size_t arr2Size = sizeof(arr2) / sizeof(arr2[0]);   // can use datatype instead of 1st el
    size_t arr3Size = sizeof(arr3) / sizeof(char);      // can use 1st el instead of datatype

    int arr4[] = { 10, 20, 42 };
    //^ int means the datatype for individual elements of the array
    size_t arr4Size = sizeof(arr4) / sizeof(arr4[0]);


    // c-style strings are the (actually) strings that are defined by using string literal constans
    char str1[] = "Abc";    // we initialize a array of chars using a string literal, so we created a c-string
                            // the number of elements in this array is 3 (chars 'A', 'b' and 'c') + 1 (null terminator)
    size_t str1Size = sizeof(str1) / sizeof(str1[0]);


    // let's calculate the length of a c-string taking into account that after the last
    // real character there will be put the 0-terminator (null symbol)
    // we have implemented a function called strlen()

    size_t i = 0;           // we use it to count the number of characters in the given string
    char ch = str1[0];
    while (ch != '\0')
    {
//        ++i;
//        ch = str1[i];

        ch = str1[++i];     // we can't use i++ expression instead, because the postfix
                            // version return the previous value of i, but need the newest value,
                            // the previous one has already been mentioned above.
    }

    // TODO: HW: remaster the fragment above (calculating the length of a string)
    // using the for-loop statement.

    // char str2[80];
    //std::cin >> str2;     // the size of str1 is fixed and the user's input
    // **MUST NOT** exceed the allocated space

    int x = 1;
    int y = 2;
    int z = 3;

    z = y = x;
    // foo (y = x)
    // logic (y == x)   // accidentely it's often used improperly: logic (y = x)



    return 0;
}
