// ...existing code...
class vect2 {
public:
    int x, y;
    vect2(int x = 0, int y = 0) : x(x), y(y) {}

    // Member operator* for vect2 * int
    vect2 operator*(int scalar) const {
        return vect2(x * scalar, y * scalar);
    }

    // ...other code...
};

// Non-member operator* for int * vect2
inline vect2 operator*(int scalar, const vect2& v) {
    return vect2(v.x * scalar, v.y * scalar);
}
// ...existing code...