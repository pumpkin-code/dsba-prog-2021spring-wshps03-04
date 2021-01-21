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
/// Count the length of a C-style string variable initialized with a string
/// literal (implement strlen() ).
///
////////////////////////////////////////////////////////////////////////////////



#include <cstddef>      // one of the possible definitor of size_t datatype

int main()
{
    // we create STATIC array of characters (8 bits per each) and initialize it
    //char arr1[4] = { 'a', 'b', 'c' }; //, '1' };
    char arr1[4] = { 'a', 'b', 'c', '1' };
    char arr2[] = { 'x', 'y', 'z', '1' };

    size_t arr2Size = sizeof(arr2) / sizeof(arr2[0]);       // ... / sizeof(char)


    int arr3[] = {10, 20, 42};

    char cstr1[] = "Abc";       // now we initialize a c-style array of chars using a string literal constant
                                // by duing that we created a “null-terminated c-style string”
                                // cstr1 is still an array, however it's size is 3 (for Abc) + 1 (for the null terminator) = 4
    size_t cstr1Size = sizeof(cstr1) / sizeof(char);        // ... / sizeof(cstr1[0]);


    // how to see that 0 and '\0' are equally the same?:
    char c0term_1 = 0;
    char c0term_2 = '\0';
    bool c0term_l = (c0term_1 == c0term_2);     // true

    int izero_1 = 0;
    int izero_2 = '\0';
    bool izero_l = (izero_1 == izero_2);        // true



    // now we are goint to iterate throught the given c-string in order to
    // calculate its length. We know that since we found the null-terminator (0 or '\0'),
    // then we found the end of the string (however, the allocated space for storing
    // the string can be greater)
                                                                        //   '\O' ← it's not a valid esc- sequence at all, don't mix it with '\0'
    char cstr2[50] = "Hello, world!"; // there are 13 “real” symbols and one '\0' in the end out of 50 allocated bytes

    int i = 0;
    //size_t cstr2Length = 0;
    char ch = cstr2[i];
    while (ch != '\0')
    {
        //++cstr2Length;
        ch = cstr2[++i];        // we can't use i++, because the expresison will return the previous value of i
    }

    // TODO: HW: create a the for-loop version of the same code.


    return 0;
}
