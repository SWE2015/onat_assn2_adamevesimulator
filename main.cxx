#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Genome.hxx"
#include "GeneEncapsulator.hxx"
#include "Human.hxx"
#include "HelperFunctions.hxx"
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
	if (argc < 3)
	{
		cout << "usage: ./sampler <birth_count> <population_limit>" << endl;
		return 0;
	}
	const int pop_limit = stoi(argv[2]);
	const int birth_count = stoi(argv[1]);

	vector<Human *> humans;

	Human *adam = new Human("Adam");
	Human *eve = new Human("Eve");
	adam->setIsMale(true);
	eve->setIsMale(false);
	traceHuman(adam, std::cout);
	traceHuman(eve, std::cout);
	std::cout << endl;

	humans.push_back(adam);
	humans.push_back(eve);


	for (int i = 0 ; i < birth_count ; i++){

		Human *baby = new Human(
				getRandName(),
				*humans[rand() % humans.size()],
				*humans[rand() % humans.size()]
			);

		humans.push_back(baby);

		while (humans.size() > pop_limit)
		{
			humans.erase(humans.begin()); // Oldest dies off.
		}
	}

	std::cout << "This is the final population (" << birth_count << " generations, " << pop_limit << " people): " << endl;
	for (int i = 0 ; i < humans.size() ; i++)
	{
		traceHuman(humans[i], std::cout);
	}


	return 0;
}