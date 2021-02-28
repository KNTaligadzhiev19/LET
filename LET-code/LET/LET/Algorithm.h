#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

// Starts the "Guess The Word" game
void playGuessTheWord();

// Checks the user's answers 
void checkAnswerEx(string sentence[10], string condition[1], string mutualChoice, string answers[10]);

// Checks the user's answers 
void checkAnswerExMultipleChoice(string sentence[10], string condition[1], string mutualChoice,
	string answers[10], string chooseAnswer[10]);

// Holds commands
void irregularVerbsCommand(string verb, string irrVerbs[][3], string irregularVerbs[][3],
	int number, int rows);

// Practise irregular verbs
void practiseIrregularVerbs();

// Defines processMenu function
int processMenu(string mutualChoice);

// Runs the programme
void startProgramme();