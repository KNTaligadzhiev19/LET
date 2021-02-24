#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int answerCheckEx(string sentence[10], string mutualChoice, string answers[10]);

int answerCheckExMultipleChoice(string sentence[10], string mutualChoice,
	string answers[10], string chooseAnswer[10]);