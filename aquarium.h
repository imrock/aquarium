#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <vector>
using namespace std;

typedef unsigned long int UInt32;

class Cell
{
private:
    UInt32 i;
    UInt32 j;
    Grass* ptrGrass;
    Stone* ptrStone;
    Fish* ptrFish;
public:
    Cell();
    Cell(UInt32 _i, UInt32 _j, Grass* _ptrGrass = nullptr, Stone);
};

class Grass
{
private:
    UInt32 size;
    Cell* ptrCell;
};

class Stone
{
private:
    Cell* ptrCell;
};

class Fish
{
protected:
    Cell* ptrCell;
    bool isMale;
    UInt32 maxAge;
    UInt32 upAge;
    UInt32 dnAge;
    UInt32 currentAge;
    UInt32 view;
    UInt32 lenMove;
    UInt32 lenPregnancy;
    UInt32 currentPregnancy;
    UInt32 maxWeightEat;
    UInt32 currentWeightEat;
    UInt32 decreaceOnStep;
};

class Predator : public Fish
{

};

class Prey : public Fish
{

};

class Aquarium
{
private:
    UInt32 heigh;
    UInt32 width;
    Cell **cell;

    UInt32 countPrey;
    UInt32 countPredator;
    UInt32 countGrass;
    UInt32 countStone;

    vector<Prey> preys;
    vector<Predator> predators;
    vector<Grass> grasses;
    vector<Stone> stones;

};

#endif // AQUARIUM_H
