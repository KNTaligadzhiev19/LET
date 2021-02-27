#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

// Draws the abbreviation of the application
void displayLogo();

// Displays the modes of the application
void displayStartPage();

// Displays the table with a random word, that user has to guess
void displayTheTable(string mutualChoice);

// Displays the head of the boy, when the user makes the first wrong prediction
void displayTheDeadBoyHead();

// Displays the body of the boy, when the user makes the second wrong prediction
void displayTheDeadBoyBody(string mutualChoice);

// Displays the legs of the boy, when the user makes the third wrong prediction
void displayTheDeadBoyLegs(string mutualChoice);

// Displays a table with the score
void displayTheResultOfTheExercises(int& points);

// Displays a table with commands
void irregularVerbsCommandTable(int command);

// Displays the menu with the options
void displayMenu();

// Displays a table with the score
void displayTheResultOfGuessTheWord(string mutualChoice, int& points);

