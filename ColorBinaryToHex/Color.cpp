#include "Color.h"

void Color::SetValue(int value) {	
	rValue = value >> 16;
	rValue &= 255;
	gValue = value >> 8;
	gValue &= 255;
	bValue = value;
	bValue &= 255;
	hexValue = "0x" + convertToHex(rValue) + convertToHex(gValue) + convertToHex(bValue);
};
string Color::convertToLetter(int value) {
	switch (value) {
	case 10:
		return "A";
		break;
	case 11:
		return "B";
		break;
	case 12:
		return "C";
		break;
	case 13:
		return "D";
		break;
	case 14:
		return "E";
		break;
	case 15:
		return "F";
		break;

	}
};

string Color::convertToHex(int value) {
	string firstDigit;
	string secondDigit;
	firstDigit = to_string(value / 16);
	if (stoi(firstDigit) > 9) { firstDigit = convertToLetter(stoi(firstDigit)); }
	secondDigit = to_string(value % 16);
	if (stoi(secondDigit) > 9) { secondDigit = convertToLetter(stoi(secondDigit)); }
	return firstDigit + secondDigit;
};

void Color::SetName(const char* name) {
	_name = name;
};
unsigned char Color::GetR()const {
	return rValue;
};
unsigned char Color::GetG()const {
	return gValue;
};
unsigned char Color::GetB()const {
	return bValue;
};
string Color::GetHexValue() const {
	return hexValue;
};
string Color::GetName() const {
	return _name;
};
