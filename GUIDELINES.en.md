* Any function implemented in a header (except in the case of
templates), and any unprotected header, means 0 to the assignment.

* Every output goes to the standard output, and will be
ended by a newline, unless specified otherwise.

* The imposed filenames must be followed to the letter, as
well as class names, function names and method names.

* Remember: You are coding in C++ now, not in
C anymore. Therefore:

  * The following functions are FORBIDDEN, and their use will be
  punished by a -42, no questions asked: *alloc, *printf and free.

  * You are allowed to use basically everything in the standard
  library. HOWEVER, it would be smart to try and use the C++-ish versions of
  the functions you are used to in C, instead of just keeping to what you know,
  this is a new language after all. And NO, you are not allowed to use the STL
  until you actually are supposed to (that is, until d08). That means no
  vectors/lists/maps/etc... or anything that requires an include <algorithm>
  until then.

* Actually, the use of any explicitly forbidden function or
mechanic will be punished by a -42, no questions asked.

* Also note that unless otherwise stated, the C++
keywords "using namespace" and "friend" are forbidden. Their use will be
punished by a -42, no questions asked.

* Files associated with a class will always be
ClassName.hpp and ClassName.cpp, unless specified otherwise.

* You must read the examples thoroughly. They can contain
requirements that are not obvious in the assignment's description. If something
seems ambiguous, you don't understand C++ enough.

* Since you are allowed to use the C++ tools you
learned about since the beginning of the pool, you are not allowed to use any
external library. And before you ask, that also means no C++11 and derivates,
nor Boost or anything your awesomely skilled friend told you C++ can't exist
without.

* You may be required to turn in an important number of
classes. This can seem tedious, unless you're able to script your favorite text
editor. (#learn2vimnoob)

* Read each assignment FULLY before starting it ! Really, do it.

* The compiler to use is clang++.

* Your code has to be compiled with the following
flags : -Wall -Wextra -Werror.

* Each of your includes must be able to be included
independently from others. Includes must contains every
other includes they are depending on, obviously.

* Even if the subject of an assignment is short, it's worth spending
some time on it to be absolutely sure you understand what's expected of
you, and that you did it in the best possible way.

* By Odin, by Thor ! Use your brain !!!
