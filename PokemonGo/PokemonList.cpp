#include "PokemonList.h"
#include "Pokemon.h"

PokemonList::PokemonList()
{
	listCapacity = 200;
	ptr = new Pokemon[listCapacity];
	totalPokemon = 0;
}

void PokemonList::addPokemon(const string& newName, const string& newType1, const string& newType2)
{
	if (totalPokemon > listCapacity)
	{
		cerr << "Trying to excide capacity." << endl;
	}
	else
	{
		ptr[totalPokemon] = Pokemon(newName, newType1, newType2);
		++totalPokemon;
	}
}

int PokemonList::getTotalNoPokemon() const
{
	return totalPokemon;
}

int PokemonList::getCapacity() const
{
	return listCapacity;
}

void PokemonList::printPokemon(const string& name) const
{

}

void PokemonList::printPokemonTypes(const string& type) const
{

}

void PokemonList::printPokemonTypes(const string& type1, const string& type2)
{

}

void PokemonList::clearList()
{
	delete[]ptr;
	ptr = nullptr;
	totalPokemon = 0;
}

PokemonList::~PokemonList()
{}