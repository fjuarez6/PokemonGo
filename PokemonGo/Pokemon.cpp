#include "Pokemon.h"
ostream& operator<<(ostream& out, const Pokemon& p)
{
	if (p.getType2 != "NULL")
	{
		out << p.name << ": " << p.type1 << " " << p.type2 << endl;
	}
	else
	{
		out << p.name << ": " << p.type1 << endl;
	}

	return out;
}

Pokemon::Pokemon()
{}

Pokemon::Pokemon(string& newName, string& newType1, string& newType2)
{
	name = newName;
	type1 = newType1;
	type2 = newType2;
}

string Pokemon::getName() const
{
	return name;
}

string Pokemon::getType1() const
{
	return type1;
}

string Pokemon::getType2() const
{
	return type2;
}

Pokemon::~Pokemon()
{}