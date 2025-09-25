#include "bigint.hpp"

std::ostream & operator<<(std::ostream &os, const bigint &b) {
	os << b.num;
	return os;
};