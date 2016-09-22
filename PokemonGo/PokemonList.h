#ifndef POKEMONLIST_H
#define POKEMONLIST_H

#include "Pokemon.h"

#include <string>
#include <iostream>
#include <array>
using namespace std;

class PokemonList : public Pokemon
{
public:
	PokemonList();

	void addPokemon(const string& newName, const string& newType1, const string& newType2);

	int getTotalNoPokemon() const;
	int getCapacity() const;

	void printPokemon(const string& name) const;
	void printPokemonTypes(const string& type) const;
	void printPokemonTypes(const string& type1, const string& type2);

	void clearList();

	~PokemonList();

private:
	Pokemon *ptr;
	int totalPokemon;
	int listCapacity;
};

#endif // !POKEMONLIST_H
