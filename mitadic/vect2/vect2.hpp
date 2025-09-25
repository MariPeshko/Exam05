#pragma once
# include <iostream>

class vect2 {
public:
	int a;
	int b;

	vect2(void) : a(0), b(0) {}
	~vect2(void) {}
	vect2(const vect2& oth) : a(oth.a), b(oth.b) {}
	vect2(const int a_input, const int b_input) : a(a_input), b(b_input) {}

	vect2& operator=(const vect2& rh) {
		if (this != &rh)
		{
			a = rh.a;
			b = rh.b;
		}
		return *this;
	}
	vect2 operator+(const vect2& rh) const {
		return vect2(a + rh.a, b + rh.b);
	}
	vect2& operator+=(const vect2& rh) {
		a += rh.a;
		b += rh.b;
		return *this;
	}
	vect2 operator+(const int n) const {
		return vect2(a + n, b + n);
	}
	vect2 operator-(const vect2& rh) const {
		return vect2(a - rh.a, b - rh.b);
	}
	vect2& operator-=(const vect2& rh) {
		a -= rh.a;
		b -= rh.b;
		return *this;
	}
	vect2 operator-(const int n) const {
		return vect2(a - n, b - n);
	}
	vect2 operator*(const vect2& rh) const {
		return vect2(a * rh.a, b * rh.b);
	}
	vect2& operator*=(const vect2& rh) {
		a *= rh.a;
		b *= rh.b;
		return *this;
	}
	vect2 operator*(const int n) const {
		return vect2(a * n, b * n);
	}

	vect2& operator+=(const int n) {
		a += n;
		b += n;
		return *this;
	}
	vect2& operator-=(const int n) {
		a -= n;
		b -= n;
		return *this;
	}
	vect2& operator*=(const int n) {
		a *= n;
		b *= n;
		return *this;
	}

	vect2& operator++() {
		a += 1;
		b += 1;
		return *this;
	}
	vect2 operator++(int) {
		vect2 tmp(*this);
		a += 1;
		b += 1;
		return tmp;
	}
	vect2& operator--() {
		a -= 1;
		b -= 1;
		return *this;
	}
	vect2 operator--(int) {
		vect2 tmp(*this);
		a -= 1;
		b -= 1;
		return tmp;
	}

	bool operator==(const vect2& oth) {
		return (a == oth.a && b == oth.b);
	}
	bool operator!=(const vect2& oth) {
		return !(*this == oth);
	}
	
	int& operator[](const size_t i) {
		if (i == 0)
			return a;
		return b;
	}
	int operator[](const size_t i) const {
		if (i == 0)
			return a;
		return b;
	}

	friend std::ostream& operator<<(std::ostream& os, const vect2& v);
	friend vect2 operator+(const int& n, const vect2& v);
	friend vect2 operator-(const int& n, const vect2& v);
	friend vect2 operator*(const int& n, const vect2& v);
	friend vect2 operator-(const vect2& v);
};
