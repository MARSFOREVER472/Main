#include "Animal.h"

// ESTA ES LA CLASE DEL ENCABEZADO (Animal.h).

Animal::Animal(string nameAnimal, int age, string type)
{
	// CONSTRUCTOR DE LA CLASE CON SUS RESPECTIVOS PAR�METROS YA CREADOS ANTERIORMENTE.

	this->nameAnimal = nameAnimal;
	this->age = age;
	this->type = type;
}

// M�TODO QUE VIENE DESPU�S DE LA CREACI�N DEL CONSTRUCTOR DE LA CLASE.

string Animal::getNameAnimal()
{
	// S�LO RETORNA EL NOMBRE DEL ANIMAL.

	return this->nameAnimal;
}

void Animal::setNameAnimal(string nameAnimal)
{
	this->nameAnimal = nameAnimal;
}
