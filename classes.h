#include <iostream>
#include <string>
class Animal
{
float x, y;
public:
Animal(){}

void Walk(float x, float y);
void Eat(std::string typeOfFood);
void Pee();
};
class Bird : public Animal
{
public:
    void Fly();
    void RipOldFeathers(std::string bodypart, int amount);
};
class Cat : public Animal
{
int miceCaught;
public:
    void purr();
    void catchMice(int amount);
};
class Mice : public Animal
{
public:
    void RunFromCats(int num_of_cats);
    
};
class Snake : public Animal
{
float length;
public: 
    void beDisgusting();
};
class RattleSnake : public Snake
{
public: 
    void Rattle(int seconds);
};
class Bunny : public Animal
{
public:
    void jump();
    void doZoomies();
};
