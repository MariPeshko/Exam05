#ifndef SEARCHABLE_ARRAY_BAG
# define SEARCHABLE_ARRAY_BAG
#include "array_bag.hpp"
#include "searchable_bag.hpp"

class searchable_array_bag: public array_bag, public searchable_bag {
	public:
		bool has(int i) const {
			int s = size;
			while (s) {
				s--;
				if (data[s] == i)
					return(true);
			}
			return(false);
		}
};
#endif
