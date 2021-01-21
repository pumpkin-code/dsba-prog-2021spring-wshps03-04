////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 6: "Some functions for dealing with strings".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Try to use functions for dealing with strings:
/// 1) strcmp, strlen for c-strings;
/// 2) string:: size(), length(), operator<, operator+, operator= etc for
///    std::string-s.
///
////////////////////////////////////////////////////////////////////////////////


#include <cstring>      // is for c-string functions (don't use obsolete string.h)
#include <string>       // is for std::string


int main()
{
    // let's briefly look at obsolete (legacy) c- functions
    char* str1 = "Hello!";          // the same as char str1[] = "Hello!"
    size_t str1Len = strlen(str1);

    char str2[] = "world";
    size_t str2Len = strlen(str2);

    //str1 == str2      // this doesn't compare actual strings
    //str1 < str2       // this is also unapplicable
    int sCompRes = strcmp(str1, str2);


    // std::string

    std::string s1("Hello!");       // initializing
    std::string s2 = "world";       // initializing!!! (not copy assignment)
    size_t s1len = s1.length();
    size_t s2len = s2.size();
    bool s12Comp = (s1 < s2);
    bool s12Eq = (s1 == s2);


    return 0;
}
