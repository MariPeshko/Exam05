#include <iostream>
#include <string>
#include <vector>

// для простоти #pragma once
#ifndef BIGINT_HPP
# define BIGINT_HPP

class bigint {

private:
    std::vector<int> digits;
    // or
    std::string bignum_str; // only data memeber for strong Big Integer as String. [For signed int, str[0] = '-']

public:

    // Default constructor. Vector is set to 0
    bigint() //: is_negative(false)
    { digits.push_back(0); }

    // Parameter  big integer intialization with Integer
    bigint(const long long bignum) : bignum_str(std::to_string(bignum)) // longl long is signed type
    {

    };

    // Parameter big integer initialization with String
    bigint(const std::string& str_number) : bignum_str(str_number)
    {
        /// convert string to vector of integers
    };

};

#endif
