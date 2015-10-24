#include <iostream>
#include <string>
#include <fstream>
#include "Human.hxx"

string getRandName(){
   static string NameArray[] = {"Alfric","Clare", "Darren", "Harrington", "Robbins", "Snowdon", "Crawford", "Huxley", "Gabriel", "Smithies", "Sammy", "Beasant", "Stanwick", "Wyther", "Shelley", "Sutton", "Devon", "Sweete", "Rad", "Nottley", "Kinnell", "Byron", "Catcher", "Pickering", "Bolton", "Stevenson", "Mathew", "Blythe", "Norman", "Noonan", "Winchell", "Nottley", "Brant", "Hampton", "Elvin", "Swailes", "Rinaldo", "Stampes", "Lucan", "Padley", "Aliyah", "Hamilton", "Luana", "Sherwood", "Eden", "Wheatley", "Sharon", "Clare", "Addison", "Churchill", "Jaqueline", "Atherton", "Bailey", "Tindall", "Willow", "Wheatley", "Kimberley", "Myerscough", "Mirabelle", "Sherwood", "Elisa", "Bing", "Cassidy", "Stratford", "Rosamund", "Smither", "Roxana", "Benson", "Alysa", "Upton", "Cameron", "Sweet", "Kelsi", "Addington", "Ryleigh", "Stratford", "Meghan", "Nutlee", "Lana", "Fawcett"};
   return (NameArray[rand() % 10]);
}


void traceHuman(Human *h, std::ostream &stream)
{
		string name = h->getName();
		stream << name;
		int i = 11 - name.length();
		while (i-- > 0)
			stream << ' ';

		stream << "(" << (h->isMale() ? "Male  " : "Female") << ") " ;

		stream << h->getHeight() << "cm 	" ;
		stream << h->getWeight() << "kg" << endl;
}
