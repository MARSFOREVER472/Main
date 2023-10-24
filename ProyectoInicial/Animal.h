#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal
{
private:

	// LO COMENTAREMOS POR EL MOMENTO...

	// int name;
	// long number;

	// ATRIBUTOS ASOCIADOS A LA CLASE (PRIVADOS):

	string nameAnimal;
	int age;
	string type;

public:

	// LO COMENTAREMOS POR EL MOMENTO...

	// int publicAttribute;
	// int publicMethods();

	// MÉTODOS ASOCIADOS A LA CLASE (PÚBLICOS):

	Animal(string nameAnimal, int age, string type);
	string getNameAnimal();
	void setNameAnimal(string nameAnimal);
};

