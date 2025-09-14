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
    bigint(long long bignum) // longl long is signed type
    {
        while (bignum > 0) {
            digits.push_back(bignum % 10);
            bignum /= 10;
        }
    };

    /* // Parameter big integer initialization with String
    bigint(const std::string& str_number) : bignum_str(str_number)
    {
        /// convert string to vector of integers
    }; */
    friend std::ostream &operator<<(std::ostream &os, const bigint &bi);

};

#endif

// as a friend function, it can access the private members of the class like digits
std::ostream &operator<<(std::ostream &os, const bigint &bi) {
	for (int digit : bi.digits) {
		os << digit;
	}
	return os;
}
