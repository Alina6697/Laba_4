#include "stdafx.h"
#include "word.h"
#include <iostream>
using namespace std;

Word::Word(string s, string klass, string name, int vosrast, string stoimost, string developer): WordProcessor ( klass, name, vosrast, stoimost, developer)
{
	slovo = s;
}

void Word::setSlovo(string sl)
{
	slovo = sl;
}

string Word::getSlovo()
{
	return slovo;
}

void Word::print()
{
	WordProcessor::print();
	
	cout << "�����:" << slovo << "\n";
	//Word::a = Alina;
	//cout << "a= " << a << "\n";
}
