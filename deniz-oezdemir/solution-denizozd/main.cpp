#include "bigint.hpp"
#include <iostream>

int main(){
    const bigint a(42);
    bigint b(21), c, d(1337), e(d);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "a+b " << a + b << std::endl;
    std::cout << "c+=a " << (c += a) << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "++b " << ++b << std::endl;
    std::cout << "b++ " << b++ << std::endl;
    std::cout << "(b << 10) + 42 " << (b << 10) + 42 << std::endl;
    std::cout << "d<<=4 " << (d <<= 4) << std::endl;
    std::cout << "d>>=(const bigint)2 " << (d >>= (const bigint)2) << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "d < a " << (d < a) << std::endl;
    std::cout << "d > a " << (d > a) << std::endl;
    std::cout << "d == a " << (d == a) << std::endl;
    std::cout << "d != a " << (d != a) << std::endl;
    std::cout << "d <= a " << (d <= a) << std::endl;
    std::cout << "d >= a " << (d >= a) << std::endl;

    // step 6: extra test from exam
    std::cout << a - a << std::endl;

    // Створення великого числа через digit shifting
    // 99999999999999999999999999999999999999999... (200 цифр)
    bigint huge(9);
    huge <<= 89;  // зсув на 89 позицій: 9 + 89 нулів
    huge += (bigint(99999999) << 81);  // додаємо ще вісім 9-ок
    std::cout << huge << std::endl;
    huge += (bigint(99999999) << 73);  // і так далі...
    // ... або інший спосіб створення через операції
    
    std::cout << huge << std::endl;
    
    bigint one(1);
    std::cout << "huge + one " << huge + one << std::endl;  // huge + 1
    std::cout << one - one << std::endl;  // 0
    return 0;
}
