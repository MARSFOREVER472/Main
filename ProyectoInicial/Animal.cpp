#include "Animal.h"

// ESTA ES LA CLASE DEL ENCABEZADO (Animal.h).

Animal::Animal(string nameAnimal, int age, string type)
{
	// CONSTRUCTOR DE LA CLASE CON SUS RESPECTIVOS PARÁMETROS YA CREADOS ANTERIORMENTE.

	this->nameAnimal = nameAnimal;
	this->age = age;
	this->type = type;
}

// MÉTODO QUE VIENE DESPUÉS DE LA CREACIÓN DEL CONSTRUCTOR DE LA CLASE.

string Animal::getNameAnimal()
{
	// SÓLO RETORNA EL NOMBRE DEL ANIMAL.

	return this->nameAnimal;
}

void Animal::setNameAnimal(string nameAnimal)
{
	this->nameAnimal = nameAnimal;
}
