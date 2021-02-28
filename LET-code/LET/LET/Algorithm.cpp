#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>
#include "DisplayFunctions.h"
#include "Exercises.h"

using namespace std;

// Starts the "Guess The Word" game
void playGuessTheWord(int& points)
{
	//Declare the variables
	string wordList[50] = { "resource","pleasant","champion","necklace","offender","overlook",
	"creation","cemetery","marriage","solution","skeleton","stunning","contrast","register",
	"function","midnight","resident","movement","overview","positive","ceremony","sunshine",
	"building","dressing","mushroom","position","minimize","detector","cupboard" };
	int counter = 0;
	unsigned int index = rand() % 29;
	string theWord = wordList[index], choice;

	do
	{
		// Gives the random function a new seed
		srand((unsigned int)time(0));
		unsigned int index = rand() % 29;
		string theWord = wordList[index];
		string choice, resume;

		for (size_t i = 0; i < theWord.length(); ++i)
		{
			if (theWord[i] == 'a' || theWord[i] == 'e' || theWord[i] == 'i' ||
				theWord[i] == 'o' || theWord[i] == 'u')
			{
				theWord[i] = '_';
			}
		}

		if (counter < 1)
		{
			system("cls");
			printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!\n\n\n\n\n\n\n\n");
			displayTheTable(theWord);
		}
		if (counter == 1)
		{
			system("cls");
			displayTheDeadBoyHead();
			displayTheTable(theWord);
		}
		else if (counter == 2)
		{
			system("cls");
			displayTheDeadBoyBody(theWord);
			printf("\n\n\n\n\t\tEnter The Word: ");
		}
		else if (counter == 3)
		{
			displayTheDeadBoyLegs(theWord);
			printf("\n\n\n\n\t\t\t\t\t-------------------------------");
			printf("\n\t\t\t\t\tPress Enter to finish the game! ");
			printf("\n\t\t\t\t\t-------------------------------\n\t\t\t\t\t\t\t");
			getline(cin, resume);
			break;
		}

		getline(cin, choice);

		if (choice != wordList[index])
		{
			counter++;
		}
		else
		{
			points++;
		}

	} while (choice != theWord);
}

// Checks the user's answers 
void checkAnswerEx(string sentence[10], string condition[1], string mutualChoice, string answers[10], int& points)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "\n\n" << sentence[i];
		cout << "\n\n" << condition[0];

		getline(cin, mutualChoice);

		if (mutualChoice == answers[i])
		{
			points++;
		}
	}
}

// Checks the user's answers 
void checkAnswerExMultipleChoice(string sentence[10], string condition[1], string mutualChoice,
	string answers[10], string chooseAnswer[10], int& points)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "\n\n" << sentence[i];
		cout << chooseAnswer[i];
		cout << "\n\n" << condition[0];

		getline(cin, mutualChoice);

		if (mutualChoice == answers[i])
		{
			points++;
		}
	}
}

// Holds commands
void irregularVerbsCommand(string verb, string irrVerbs[][3], string irregularVerbs[][3],
	int number, int rows)
{
	if (verb == "Show")
	{
		printf("\t\tWhich row do you want me to show: ");

		cin >> number;

		irrVerbs[number - 1][1] = irregularVerbs[number - 1][1];
		irrVerbs[number - 1][2] = irregularVerbs[number - 1][2];
	}

	else if (verb == "Hide")
	{
		printf("\t\tWhich row do you want me to hide: ");

		cin >> number;

		irrVerbs[number - 1][1] = "        ";
		irrVerbs[number - 1][2] = "        ";
	}

	else if (verb == "ShowAll")
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				irrVerbs[i][j] = irregularVerbs[i][j];
			}
		}
	}

	else if (verb == "HideAll")
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 1 || j == 2)
				{
					irrVerbs[i][j] = "       ";
				}
				else
				{
					irrVerbs[i][j] = irregularVerbs[i][j];
				}
			}
		}
	}

	else if (verb == "Add")
	{
		printf("\t\tThe Verb in Infinitive: ");

		cin >> irregularVerbs[rows][0];

		printf("\t\tThe Verb in Past Simple: ");

		cin >> irregularVerbs[rows][1];

		printf("\t\tThe Verb in Past Participle: ");

		cin >> irregularVerbs[rows][2];

		irrVerbs[rows][0] = irregularVerbs[rows][0];
		irrVerbs[rows][1] = "       ";
		irrVerbs[rows][2] = "       ";
	}

	else if (verb == "Del")
	{
		printf("\t\tWhich row do you want me to delete: ");

		cin >> number;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i >= number - 1)
				{
					irregularVerbs[i][j] = irregularVerbs[i + 1][j];
				}
				if (j == 1 || j == 2)
				{
					irrVerbs[i][j] = "       ";
				}
				else
				{
					irrVerbs[i][j] = irregularVerbs[i][j];
				}
			}
		}
	}
}

// Practise irregular verbs
void practiseIrregularVerbs()
{
	string irregularVerbs[25][3] = {
	"become",	 "became",	"become",
	"begin",	"began",	"begun",
	"blow",		"blew",		"blown",
	"break",	"broke",	"broken",
	"bring",	"brought",	"brought",
	"choose",	"chose",	"chosen",
	"drive",	"drove",	"driven",
	"eat",		"ate",		"eaten",
	"find",		"found",	"found",
	"forget",	"forgot",	"forgotten",
	"give",		"gave",		"given",
	"goes",		"went",		"gone",
	"have",		"had",		"had",
	"know",		"knew",		"known",
	"leave",	"left",		"left",
	"make",		"made",		"made",
	"see",		"saw",		"seen",
	"steal",	"stole",	"stolen",
	"swim",		"swam",		"swum",
	"take",		"took",		"taken",
	"think",	"thought",	"thought",
	"write",	"wrote",	"written", };
	string irrVerbs[25][3], verb;
	int number = 0, command = 0, rows = 22;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 1 || j == 2)
			{
				irrVerbs[i][j] = "       ";
			}
			else
			{
				irrVerbs[i][j] = irregularVerbs[i][j];
			}
		}
	}

	do {
		system("cls");
		printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
		printf("\n\n\t\t     ___________________________________________________________________________\n");
		printf("\t\t    |\t\t\t\t\t\t\t\t\t\t|\n");
		cout << "\t\t    |\t      Infinitive\t\t" << "SimplePast\t\t" << "Participle \t|\n";
		printf("\t\t    |___________________________________________________________________________|\n");
		printf("\t\t    |\t\t\t\t\t\t\t\t\t\t|\n");

		for (int i = 0; i < rows; i++)
		{
			printf("\t\t    |\t");
			for (int j = 0; j < 3; j++)
			{
				cout << i + 1 << "." << irrVerbs[i][j] << "   \t\t";
			}
			printf("|\n");
		}

		if (verb == "Command")
		{
			command++;
		}

		irregularVerbsCommandTable(command);

		getline(cin, verb);

		irregularVerbsCommand(verb, irrVerbs, irregularVerbs, number, rows);

		if (verb == "Add")
		{
			rows++;
		}

		if (verb == "Del")
		{
			rows--;
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (verb == irregularVerbs[i][j])
				{
					irrVerbs[i][j] = irregularVerbs[i][j];
				}
			}
		}
	} while (verb != "Finish");
}

// Defines processMenu function
int processMenu(string mutualChoice);

// Runs the programme
void startProgramme()
{
	string choice;
	string mode;
	string mutualChoice;
	int points = 0;

	system("cls");

	displayStartPage();

	getline(cin, choice);

	if (choice == "1")
	{
		displayMenu();

		getline(cin, mode);

		if (mode == "1")
		{
			displayTheUsageOfPresentSimpleTense(mutualChoice);
			practisePresentSimpleTenseEx1(mutualChoice);
			practisePresentSimpleTenseEx2(mutualChoice);
			practisePresentSimpleTenseEx3(mutualChoice);
			practisePresentSimpleTenseEx4(mutualChoice);

			displayTheResultOfTheExercises();

			processMenu(mutualChoice);
		}
		else if (mode == "2")
		{
			displayTheUsageOfPresentContinuousTense(mutualChoice);
			practisePresentContinuousTenseEx1(mutualChoice);
			practisePresentContinuousTenseEx2(mutualChoice);
			practisePresentContinuousTenseEx3(mutualChoice);
			practisePresentContinuousTenseEx4(mutualChoice);

			displayTheResultOfTheExercises();

			processMenu(mutualChoice);
		}
		else if (mode == "3")
		{
			displayTheUsageOfPastSimpleTense(mutualChoice);
			practisePastSimpleTenseEx1(mutualChoice);
			practisePastSimpleTenseEx2(mutualChoice);
			practisePastSimpleTenseEx3(mutualChoice);
			practisePastSimpleTenseEx4(mutualChoice);

			displayTheResultOfTheExercises();

			processMenu(mutualChoice);
		}
		else if (mode == "4")
		{
			displayTheUsageOfPastContinuousTense(mutualChoice);
			practisePastContinuousTenseEx1(mutualChoice);
			practisePastContinuousTenseEx2(mutualChoice);
			practisePastContinuousTenseEx3(mutualChoice);
			practisePastContinuousTenseEx4(mutualChoice);

			displayTheResultOfTheExercises();

			processMenu(mutualChoice);
		}
		else if (mode == "5")
		{
			displayTheUsageOfPresentPerfectTense(mutualChoice);
			practisePresentPerfectTenseEx1(mutualChoice);
			practisePresentPerfectTenseEx2(mutualChoice);
			practisePresentPerfectTenseEx3(mutualChoice);
			practisePresentPerfectTenseEx4(mutualChoice);

			displayTheResultOfTheExercises();

			processMenu(mutualChoice);
		}
		else if (mode == "6")
		{
			displayTheUsageOfFutureSimpleTense(mutualChoice);
			practiseFutureSimpleTenseEx1(mutualChoice);
			practiseFutureSimpleTenseEx2(mutualChoice);
			practiseFutureSimpleTenseEx3(mutualChoice);
			practiseFutureSimpleTenseEx4(mutualChoice);

			displayTheResultOfTheExercises();

			processMenu(mutualChoice);
		}
		else
		{
			startProgramme();
		}
	}
	else if (choice == "2")
	{
		playGuessTheWord(points);

		displayTheResultOfGuessTheWord(mutualChoice);

		processMenu(mutualChoice);
	}
	else if (choice == "3")
	{
		practiseIrregularVerbs();
	}
	else
	{
		startProgramme();
	}
}