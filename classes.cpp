#include "classes.h"

Animal::Animal()
{
    x = 0;
    y = 0;
}
void Animal::Walk(float x, float y)
{
    this->x += x;
    this->y += y;
    std::cout << "The animal's new position in the world is:" <<
    x << "latitude" << y << "longitude" << std::endl;
}

void Animal::Eat(std::string typeOfFood)
{
    std::cout << "The animal is eating " <<  typeOfFood << std::endl;
}
void Animal::Pee()
{
    std::cout << "This animal is doing something gross." << std::endl;
}

///BIRD

void Bird::Fly(int speed_in_kmh)
{
    std::cout << "This bird is flying at " << speed_in_kmh << "kmh.";
}
void Bird::RipOldFeathers(std::string bodypart, int amount)
{
    std::cout << "This bird has cleaned itself of " << amount << " feathers from " << bodypart << '.';
}
void Cat::purr()
{
    std::cout << "The cat is PURRing..." << std::endl;
}
Cat::Cat()
void Cat::catchMice(int amount)
{
    caughtMice+= amount;
    std::cout << "This cat has caught " << amount << " mice." << std::endl;
}
