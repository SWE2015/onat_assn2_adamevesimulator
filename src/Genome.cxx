#include "Genome.hxx"
#include <stdlib.h>

using namespace std;

int Genome::allocate(size_t size){
	int position = genes.size();
	while(size-- > 0)
	{
		genes.push_back((unsigned char)0);
	}
	return position;
}


void Genome::initializeByCrossover(std::string dna1, std::string dna2){
	for (int i = 0 ; i < genes.size() ; i++)
	{
		unsigned char seed  = (unsigned char)(rand() % 255);

		genes[i] = (unsigned char)(dna1[i] & seed) + 
					(unsigned char)(dna2[i] & (~seed));
	}
}