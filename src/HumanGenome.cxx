#include "HumanGenome.hxx"

HumanGenome::HumanGenome(string dna1, string dna2)
{
	allocateGenes();
	initializeByCrossover(dna1, dna2);
}

HumanGenome::HumanGenome()
{
	allocateGenes();
}

void HumanGenome::allocateGenes(){
	gender = new GeneEncapsulator<unsigned char>(NULL, 0);
	*gender = add<unsigned char>();

	eyeColor = new GeneEncapsulator<unsigned char>(NULL, 0);
	*eyeColor = add<unsigned char>();

	haircolor = new GeneEncapsulator<unsigned char>(NULL, 0);
	*haircolor = add<unsigned char>();

	geneticHeight = new GeneEncapsulator<unsigned char>(NULL, 0);
	*geneticHeight = add<unsigned char>();

	geneticWeight = new GeneEncapsulator<unsigned char>(NULL, 0);
	*geneticWeight = add<unsigned char>();
}