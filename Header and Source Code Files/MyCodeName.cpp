#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

//this will replace my cout with a cooler name
void speak(string speakThis)
{
	cout << speakThis << endl;
}

//this will replace cin with a cooler name
string listen(string PromptUser)
{
	string userInput = "";
	cout << PromptUser << endl;
	cin >> userInput;
	return userInput;
}