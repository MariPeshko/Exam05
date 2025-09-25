#pragma once
#include <iostream>

class vect2 {
private:
	int x, y;

public:
	vect2() : x(0), y(0) {}
	vect2(const int x_input, const int y_input) : x(x_input), y(y_input) {}
	vect2(const vect2& oth) : x(oth.x), y(oth.y) {}
	~vect2(void) {}
	vect2& operator=(const vect2& oth) {
		if (this != &oth) {
			x = oth.x;
			y = oth.y;
		}
		return *this;
	}
    int& operator[](int i) {
        return (i == 0 ? x : y);
    }
    int operator[](int i) const {
        return (i == 0 ? x : y);
    }

    friend std::ostream& operator<<(std::ostream& os, const vect2& v) {
        os << "{" << v[0] << ", " << v[1] << "}";
        return os;
    }

    vect2 operator++(int) {
        vect2 tmp = *this;
        x++;
        y++;
        return tmp;
    }

    vect2& operator++() {
        x++;
        y++;
        return *this;
    }

    vect2 operator--(int) {
        vect2 tmp = *this;
        x--;
        y--;
        return tmp;
    }

    vect2& operator--() {
        x--;
        y--;
        return *this;
    }

    vect2& operator+=(const vect2& oth) {
        x += oth.x;
        y += oth.y;
        return *this;
    }

    vect2& operator-=(const vect2& oth) {
        x -= oth.x;
        y -= oth.y;
        return *this;
    }

    vect2 operator+(const vect2& oth) const {
        return vect2(x + oth.x, y + oth.y);
    }

    vect2 operator-(const vect2& oth) const {
        return vect2(x - oth.x, y - oth.y);
    }

    vect2 operator*(int s) const {
        return vect2(x * s, y * s);
    }

    friend vect2 operator*(int s, const vect2& v) {
        return vect2(v.x * s, v.y * s);
    }

    vect2& operator*=(int s) {
        x *= s;
        y *= s;
        return *this;
    }

    vect2 operator-() {
        return vect2(-x, -y);
    }

    bool operator==(const vect2& oth) {
        return (x == oth.x && y == oth.y);
    }

    bool operator!=(const vect2& oth) {
        return !(x == oth.x && y == oth.y);
    }
};

