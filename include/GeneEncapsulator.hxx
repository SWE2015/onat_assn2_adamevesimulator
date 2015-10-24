#pragma once 

#include <vector>
#include <iostream>
template <class T>
class GeneEncapsulator
{
private:
	std::vector<unsigned char> *source;
	int offset;

public:
	GeneEncapsulator(std::vector<unsigned char> *_source, int _offset) : source(_source) , offset(_offset)  {}
	T get(){
		T* dataSource = (T*)&((*source)[offset]);
		return *dataSource;
	}

	void set(T value){
		unsigned char *begin = (unsigned char *)&value;
		unsigned char *end = begin + sizeof(T);

		int iterator = offset;
		while (begin != end)
			(*source)[iterator++] = *(begin++);
	}

	static GeneEncapsulator empty(){
		return GeneEncapsulator<T>();
	}
};