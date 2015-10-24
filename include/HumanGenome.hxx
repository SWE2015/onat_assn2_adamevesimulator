#pragma once

#include "Genome.hxx"
#include "GeneEncapsulator.hxx"
#include <string>

using namespace std;

class HumanGenome : protected Genome{
protected:

	GeneEncapsulator<unsigned char> *gender;
	GeneEncapsulator<unsigned char> *eyeColor;
	GeneEncapsulator<unsigned char> *haircolor;
	GeneEncapsulator<unsigned char> *geneticHeight;
	GeneEncapsulator<unsigned char> *geneticWeight;
	
	void allocateGenes();

	HumanGenome(string dna1, string dna2);
	HumanGenome();
};