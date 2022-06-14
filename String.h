#include <iostream>

class String{
private:
	char* ch;
	int sz;
public:
	String(int sz);
	~String();

	char& operator[](int i);
	String operator=(char& elem);
	const char& operator[](int i) const;
	int size();

	void print();
	void read(const char* s);
};
