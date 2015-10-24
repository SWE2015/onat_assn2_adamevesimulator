#pragma once

#include <Human.hxx>
#include <HumanGenome.hxx>
#include <iostream>

using namespace std;


class Human : protected HumanGenome
{
	string _name;


public:
	Human(string name);
	Human(string name, Human &parent1, Human &parent2);
	string getName();


double getHeight()
{
	return geneticHeight->get();
}
double getWeight()
{
	return geneticWeight->get();
}
double getEyecolor()
{
	return eyeColor->get();
}
double getHaircolor()
{
	return haircolor->get();
}
bool isMale()
{
	char got = gender->get() >> 7;
	return got == 0 ? false : true;
}

void setHeight(double height)
{
	geneticHeight->set(height);
}
void setWeight(double weight)
{
	geneticWeight->set(weight);
}
void setEyecolor(double color)
{
	eyeColor->set(color);
}
void setHaircolor(double color)
{
	haircolor->set(color);
}
void setIsMale(bool value)
{
	gender->set(value ? 0xFF : 0x00);
}


};