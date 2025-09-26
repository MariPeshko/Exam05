#ifndef SET_HPP
#define SET_HPP

#include "searchable_bag.hpp"
#include <set>

class set : public searchable_bag {
	private:
		searchable_bag	*bag;
		std::set<int>	_set;
	public:
		set() {}
		set(searchable_bag &b) : bag(&b) {}
		set &operator=(const set &other) {
			if (other.bag) {
				bag = other.bag;
				_set = other._set;
			}
			return *this;
		}
		~set() {
			_set.clear();
			bag->clear();
		}

		searchable_bag &get_bag() const { return *bag; }
		bool has(int i) const { return _set.count(i) == 1; }

		void insert(int i) {
			if (!bag->has(i))
				bag->insert(i);
			_set.insert(i);
		}
		void insert(int *array, int size) {
			while (size) {
				size--;
				if (bag && !bag->has(array[size]))
					bag->insert(array[size]);
				_set.insert(array[size]);
			}
		}
		void insert(const int *array, int size) {
			while (size) {
				size--;
				if (bag && !bag->has(array[size]))
					bag->insert(array[size]);
				_set.insert(array[size]);
			}
		}

		void print() const {
			if (bag)
				bag->print();
		}
		void clear() {
			_set.clear();
			if (bag)
				bag->clear();
		}
};

#endif
