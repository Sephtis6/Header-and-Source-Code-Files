// Header and Source Code Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	speak("Welcome to my Toy Language...");

	std::string userName = "";

	userName = listen("What is your name? ");

	listen("Hello " + userName);
	system("pause");

	return 0;
}

