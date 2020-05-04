#include "CppUnitLite/TestHarness.h"

#include <iostream>
#include <string>
using namespace std;

SimpleString StringFrom(const std::string& value)
{
	return SimpleString(value.c_str());
}

TEST(intVariablesAreInts, Pointers)
{
    int i;
    string expected = "i";
    CHECK_EQUAL(expected, typeid(i).name());
}

TEST(pointerVariablesArePointers, Pointers)
{
  int i;
  int* p = &i;
  string expected = "Pi";
  CHECK_EQUAL(expected, typeid(p).name());
}

TEST(dereferencingGetsValue, Pointers)
{
  int i;
  int* p = &i;
  int x = *p;
  string expected = "i";
  CHECK_EQUAL(expected, typeid(x).name());
}