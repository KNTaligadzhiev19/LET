#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

void displayLogo();

void displayStartPage();

void displayTheTable(string mutualChoice);

void displayTheDeadBoyHead();

void displayTheDeadBoyBody(string mutualChoice);

void displayTheDeadBoyLegs(string mutualChoice);

void playGuessTheWord();

void displayTheResultOfGuessTheWord(string mutualChoice);

void displayMenu();

void displayTheResultOfTheExercises();

void irregularVerbsCommandTable(int command);

void irregularVerbsCommandFunctions(string verb, string IrrVerbs[][3], string IrregularVerbs[][3],
	int number, int rows);

void practiseIrregularVerbs();

void startProgramme();

int processMenu(string mutualChoice);

int fun(int num, int num1);