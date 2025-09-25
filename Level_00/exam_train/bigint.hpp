#include "iostream"
#include "string"
#include "algorithm" // reverse

#ifndef BIGINT_HPP
# define BIGINT_HPP

class bigint {

private:
	std::string num;
public:
	bigint() : num("0") {};
	bigint(size_t bn) : num(std::to_string(bn)) {};
	bigint(const std::string &bn) {
		if (bn.empty()) {
			num = "0"; return; }
		size_t first_digit = bn.find_first_not_of('0');
		if (std::string::npos == first_digit) {
			num = "0"; return; }
		num.clear();
		num = bn.substr(first_digit);	
	};
	// copy and assignment

	std::string strsum(const std::string &a, const std::string &b) const {
		int	carry = 0;
		int	i = a.size() - 1; 
		int	j = b.size() - 1;
		std::string res = "";
		while (i >= 0 || j >= 0 || carry > 0) {
			int sum = carry;
			if (i >= 0)
				sum += a[i--] - '0';
			if (j >= 0)
				sum += b[j--] - '0';
			res += ((sum % 10) + '0');
			carry = sum / 10;
			sum = 0; 
		}
		std::reverse(res.begin(), res.end());
		return res;
	};	
	bigint operator+(const bigint &b) const {
		return (bigint(strsum(num, b.num)));
	};
	bigint& operator+=(const bigint &b) {
		num = strsum(num, b.num);
		return *this; };
	bigint operator++(int) {
		bigint res(*this);
		num = strsum(num, "1");
		return res;
	};
	bigint& operator++() {
		*this += 1;
		return *this;};
	bool operator>(const bigint &b) const { 
		if (num.size() > b.num.size())
			return true;
		else if (num.size() < b.num.size())
			return false;
		else {
			if (num > b.num)
				return true;
		}
		return false;
	};
	bool operator<(const bigint &b) const {
		if (b > *this)
			return true;
		return false;
	};
	bool operator==(const bigint &b) const { 
		if (num == b.num)
			return true;
       		else return false;	};
	bool operator!=(const bigint &b) const {
		if (num == b.num)
			return false;
		return true; };
	bool operator<=(const bigint &b) const {
		if (*this < b || *this == b)
			return true;
		return false; };
	bool operator>=(const bigint &b) const {
		if (b < *this || *this == b)
			return true;
		return false; };
	bigint operator-(const bigint &b) {
		(void)b;
		return bigint(0);};

	//bigint operator<<(size_t shift) const { bigint res; return res; };
	bigint operator<<(const bigint &b) const {
		std::string res = num;
		bigint tmp(b);
		int i = 0;
		while(tmp > i++) {
			res += "0";
		}
		return (bigint(res)); };
	bigint& operator<<=(const bigint &shift) {
		*this = *this << shift;
		return *this;
	};
	bigint operator>>(const bigint &shift) const {
		bigint res(*this);
		if (shift >= res) {
			res.num = "0"; 
			return res;
		} else { 
			int i = 0;
			while (shift > i)
				i++;
			res.num = res.num.substr(0, res.num.size() - i);
		}
		return res;
	};
	bigint& operator>>=(const bigint &shift) {
		*this = *this >> shift;
		return *this;
	};

	friend std::ostream & operator<<(std::ostream &os, const bigint &b);

};

#endif



