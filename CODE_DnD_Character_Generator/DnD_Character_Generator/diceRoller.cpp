#include "diceRoller.hpp"

diceRoller::diceRoller()
{
  
}

// like rolling a d20
int diceRoller::d20()
{
	int roll;
	roll = 1 + rand() % 20;

  return roll;
}

// like rolling a d4
int diceRoller::d4()
{
  int roll;
  roll = 1 + rand() % 4;

  return roll;
}

// like rolling a d6
int diceRoller::d6()
{
  int roll;
  roll = 1 + rand() % 6;

  return roll;
}

// like rolling a d8
int diceRoller::d8()
{
  int roll;
  roll = 1 + rand() % 8;

  return roll;
}

// like rolling a d10
int diceRoller::d10()
{
  int roll;
  roll = 1 + rand() % 10;

  return roll;
}

// like rolling a d12
int diceRoller::d12()
{
  int roll;
  roll = 1 + rand() % 12;

  return roll;
}

void diceRoller::statsRoll()
{
  std::vector<int> v = {};
  statv = { 0, 0, 0, 0, 0, 0 };

  // rolling 4 d6 6 times then arranging the outcomes in descending order
  srand(time(NULL));
  for(int i = 0; i < 6; i++)
  {
    int total = 0;

    // rolling 4 d6
    for(int i = 0; i < 3; i++)
    {
      v.push_back(d6());
    }

    // sorting the vector in descending order then popping the smallest one
    sort(v.begin(), v.end(), std::greater<>());

    // adding the d6 together
    for(int i = 0; i < 3; i++)
    {
      total += v[i];
    }

    // adding the stat outcome to a different vector
    statv.push_back(total);
  }

  // sorting the new vector in descending order
  sort(statv.begin(), statv.end(), std::greater<>());
}

int diceRoller::getStats(int index)
{
    return statv[index];
}

int diceRoller::setStats(int index, int value)
{
    return statv[index] += value;
}

diceRoller::~diceRoller()
{

}