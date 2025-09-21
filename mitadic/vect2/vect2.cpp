#include "vect2.hpp"

std::ostream& operator<<(std::ostream& os, const vect2& v) {
	os << "{" << v[0] << ", " << v[1] << "}";
	return os;
}

vect2 operator+(const int& n, const vect2& v) {
	return vect2(v.a + n, v.b + n);
}
vect2 operator-(const int& n, const vect2& v) {
	return vect2(v.a - n, v.b - n);
}
vect2 operator*(const int& n, const vect2& v) {
	return vect2(v.a * n, v.b * n);
}
vect2 operator-(const vect2& v) {
	return vect2(-v.a, -v.b);
}
