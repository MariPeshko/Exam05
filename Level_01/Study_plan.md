Understanding the Assignment
From 2025-08-14-bigint.subject.en.md, you need to create a bigint class that:

Stores arbitrary precision unsigned integers (numbers larger than SIZE_MAX)
Supports addition (+, +=)
Supports comparison operators (<, >, ==, !=, <=, >=)
Supports "digitshift" (<<, >>, <<=, >>=) - shifting digits in base 10
Supports increment operators (++, both prefix and postfix)
Is printable with std::cout << (no leading zeros)
Looking at main.cpp, your class must handle operations like:

Construction from integers and copy construction
Default construction (value 0)
Digit shifting: 42 << 3 == 42000, 1337 >> 2 == 13
Study Plan
Phase 1: C++ Fundamentals (if needed)
Operator overloading (arithmetic, comparison, stream insertion)
Copy constructors and assignment operators
Const correctness
Reference vs value semantics
Phase 2: Core Concepts
Arbitrary precision arithmetic

Understanding why we need bigint (integer overflow)
Storage strategies (string vs vector of digits)
Algorithm design

Addition algorithm for large numbers
Comparison algorithms
Digit shifting (multiplication/division by powers of 10)
Phase 3: Implementation Strategy
Data representation: Choose between std::string or std::vector<int>
Constructor design: Handle integer input and default values
Arithmetic operations: Implement addition with carry
Comparison logic: Compare digit by digit
Shift operations: Append/remove zeros for left/right shifts
Output formatting: Remove leading zeros
Phase 4: Testing and Debugging
Use the provided main.cpp to test your implementation
Handle edge cases (zero values, leading zeros)
Note: According to bigint.subject_STUDENT_NOTE.en.txt, you'll also need a dummy subtraction operator (operator-) for compilation, even though it's not in the main requirements.