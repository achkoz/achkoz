#include "String.h"

String::String(int s):
	ch{new char[s]},sz{s}
{
}

String::~String()
{
	delete[] ch;
}

char& String::operator[](int elem)
{
	return ch[elem];
}

void String::read(const char* s)
{
	ch=const_cast<char*>(s);
}

int String::size()
{
	return sz;
}

void String::print()
{
	for(int i=0;i!=sz;++i)
		std::cout<<ch[i];
	std::cout<<'\n';
}

