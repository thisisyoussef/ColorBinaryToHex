#pragma once
#include <string>
using namespace std;

class Color {
	string _name;
	int rValue;
	int gValue;
	int bValue;
	string hexValue;
	string convertToHex(int value);
	string convertToLetter(int value);
public:
	void SetValue(int value);
	void SetName(const char* name);

	unsigned char GetR()const;
	unsigned char GetG()const;
	unsigned char GetB()const;
	string GetHexValue() const;
	string GetName() const;
};