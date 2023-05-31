#include <iostream>
#include <string>
#include <sstream>
#include "Ball.cpp"
using namespace std;

class Pitcher {
  string firstName;
  string lastName;
  int accuracy;
  int stability;
  int power;
  float era;
  int walksAllowed;
  int homeRunsAllowed;
  Ball currentPitch;
};

//https://cplusplus.com/doc/tutorial/
//https://stackoverflow.com/questions/12733888/regarding-c-include-another-class