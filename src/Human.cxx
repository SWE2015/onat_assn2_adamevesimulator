#include "Human.hxx"
#include <stdlib.h>
#include <iostream>

Human::Human(string name) : _name(name)
{
	bool f= (rand()%0xff) < 0x7F;
	setIsMale(f);
	setEyecolor(rand()%255);
	setHaircolor(rand()%255);
	setHeight(rand()%100 + 125);
	setWeight(rand()%100 + 35);
}

Human::Human(string name, Human &parent1, Human &parent2) : _name(name)
{
//	if (parent1.isMale() == parent2.isMale()) // if same gender
//		cout << "That's biologically impossible, but 
// this is a computer program so who cares?" << endl;

	initializeByCrossover(parent1.getGenomeAsString(), parent2.getGenomeAsString());
	int seed;

	for (int i = 0 ; i < genes.size() ; i++)
	{
		seed = rand() % 25500; // 4 percent change of mutation for each gene
		if (seed < 255)
		{
			char mutation = (char)seed;
			mutation++; // So it has only one 1 in it's binary decimals, rest is 0.
			genes[i] += mutation;
		}
	}
}

string Human::getName()
{
	return _name;
}
