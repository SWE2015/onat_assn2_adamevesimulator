#pragma once

#include <iostream>
#include <vector>

#include "GeneEncapsulator.hxx"
#include <string>
#include <sstream>

class Genome
{
private:
	int allocate(size_t size);

protected:
	std::vector<unsigned char> genes;
	
public:
	template <class T>
	GeneEncapsulator<T> add()
	{
		int offset = allocate(sizeof(T));
		return GeneEncapsulator<T>(&genes, offset);
	};

	std::string getGenomeAsString()
	{
		std::stringstream s;
		for (unsigned char gene : genes)
			s << gene;
		return s.str();
}

protected:
	void initializeByCrossover(std::string dna1, std::string dna2);


};