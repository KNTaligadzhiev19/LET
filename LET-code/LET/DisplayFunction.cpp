#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>
#include "DisplayFunction.h"

using namespace std;

// Draws the abbreviation of the application
void displayLogo()
{
	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!\n\n\n");
	printf("\t\t\t\t      _                 _______           _________\n");
	printf("\t\t\t\t     ( \\               (  ____ \\         \\ __   __ /\n");
	printf("\t\t\t\t     | |               | (    \\/             ) (\n");
	printf("\t\t\t\t     | |               | (__                 | |\n");
	printf("\t\t\t\t     | |               |  __)                | |\n");
	printf("\t\t\t\t     | |               | (                   | |\n");
	printf("\t\t\t\t     | |____/\\         | (____/\\             | |\n");
	printf("\t\t\t\t     (_______/         (_______/             )_(\n");
}

// Displays the modes of the application
void displayStartPage()
{
	displayLogo();

	printf("\n\n");

	cout << "\n\n\n\t\t    Enter 1 To Practise English Tenses";

	cout << "\t\t     Enter 2 To Play Guess The Word";

	cout << "\n\n\n\n\t\t\t\t\t      Enter 3 To Practise Irregular Verbs ";

	cout << "\n\n\n\n\t\t\t\t\t\t     Enter Your Choice:";
}

// Displays the table with a random word, that user has to guess
void displayTheTable(string mutualChoice)
{
	printf("\n\t\t______________________");
	printf("\n\t\t|\t\t     |");
	printf("\n\t\t|\t\t     |");

	cout << "\n\t\t|     " << mutualChoice << "       |";

	printf("\n\t\t|\t\t     |");
	printf("\n\t\t|____________________|");
	printf("\n\n\n\n\t\tEnter The Word: ");
}

// Displays the head of the boy, when the user makes the first wrong prediction
void displayTheDeadBoyHead()
{
	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t\t\t\t\t  _");
	printf("\n\t\t\t\t\t\t\t\t\t / \\");
	printf("\n\t\t\t\t\t\t\t\t\t/   \\");

	for (int i = 0; i < 3; i++)
	{
		printf("\n\t\t\t\t\t\t\t\t       |     |");
	}

	printf("\n\t\t\t\t\t\t\t\t        \\   /");
	printf("\n\t\t\t\t\t\t\t\t         \\_/");
}

// Displays the body of the boy, when the user makes the second wrong prediction
void displayTheDeadBoyBody(string mutualChoice)
{
	displayTheDeadBoyHead();

	printf("\n\t\t______________________\t\t\t\t\t  |");
	printf("\n\t\t|\t\t     |\t\t\t\t\t /|\\");
	printf("\n\t\t|\t\t     |\t\t\t\t\t/ | \\");

	cout << "\n\t\t|     " << mutualChoice << "       |" << "\t\t\t\t       /  |  \\";

	printf("\n\t\t|\t\t     |\t\t\t\t      /   |   \\");
	printf("\n\t\t|____________________|\t\t\t\t     /    |    \\");
}

// Displays the legs of the boy, when the user makes the third wrong prediction
void displayTheDeadBoyLegs(string mutualChoice)
{
	system("cls");

	displayTheDeadBoyBody(mutualChoice);

	printf("\n\t\t\t\t\t\t\t\t\t  |");
	printf("\n\t\t\t\t\t\t\t\t\t / \\");
	printf("\n\t\t\t\t\t\t\t\t\t/   \\");
	printf("\n\t\t\t\t\t\t\t\t       /     \\");
	printf("\n\t\t\t\t\t\t\t\t      /       \\");
	printf("\n\t\t\t\t\t\t\t\t     /         \\");
}

// Displays a table with the score
void displayTheResultOfTheExercises(int& points)
{
	string mutualChoice;

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t  _________________________________________________________");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\tC o n g r a t u l a t i o n s !\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  \t Congratulations Your Score Is:  \t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  \t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	cout << "\n\t\t\t\t |\t  \t\t  " << points << " / 40 Points !\t\t   |";
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");

	if (points >= 37 && points <= 40)
	{
		printf("\n\t\t\t\t |\t\t    Your Grade Is: Excellent (6)\t\t   |");
	}
	else if (points >= 33 && points <= 36)
	{
		printf("\n\t\t\t\t |\t\t    Your Grade Is: Very Good (5)\t\t   |");
	}
	else if (points >= 29 && points <= 32)
	{
		printf("\n\t\t\t\t |\t\t       Your Grade Is: Good (4)\t\t   |");
	}
	else if (points >= 25 && points <= 28)
	{
		printf("\n\t\t\t\t |\t\t     Your Grade Is: Average (3)\t\t   |");
	}
	else if (points >= 0 && points <= 24)
	{
		printf("\n\t\t\t\t |\t\t     Your Grade Is: Poor (2)\t\t   |");
	}

	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|\n\n");
	printf("\t\t\t\t\t\t     Press Enter To Continue: ");

	getline(cin, mutualChoice);
}

// Displays a table with commands
void irregularVerbsCommandTable(int command)
{
	printf("\t\t    |___________________________________________________________________________|\n");
	printf("\t\t    |\t\t\t   Enter 'Command' for commands\t\t\t\t|\n");

	if (command % 2 == 1)
	{
		printf("\t\t    |\t\t\t\t\t\t\t\t\t\t|\n");
		printf("\t\t    | Enter 'Show' and select a row to see the answers\t\t\t\t|\n");
		printf("\t\t    | Enter 'Hide' and select a row to hide the answers\t\t\t\t|\n");
		printf("\t\t    | Enter 'ShowAll' or 'HideAll' to see or hide all answers\t\t\t|\n");
		printf("\t\t    | Enter 'Add' or 'Del' to add or delete irregular verb\t\t\t|\n");
		printf("\t\t    | Enter 'Finish' to finish the program\t\t\t\t\t|\n");
	}

	printf("\t\t    |___________________________________________________________________________|\n\n");
	printf("\t\tEnter your choice: ");
}

// Displays the menu with the options
void displayMenu()
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\n\t\t\t\t  _________________________________________________________");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t    Menu\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 1 to practise Present Simple Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 2 to practise Present Continuous Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 3 to practise Past Simple Tense\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 4 to practise Past Continuous Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 5 to practise Present Perfect Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 6 to practise Future Simple Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");
	printf("\n\n\n\t\t\t\t\t\t\tYour Choice: ");
}

// Displays a table with the score
void displayTheResultOfGuessTheWord(string mutualChoice, int& points)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\t\t\t\t  _________________________________________________________");

	for (int i = 0; i < 2; i++)
	{
		printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	}

	printf("\n\t\t\t\t |\t\t      Thanks For Playing!\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");

	for (int i = 0; i < 2; i++)
	{
		printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	}

	printf("\n\t\t\t\t |\t  \t Congratulations Your Score Is:  \t   |");

	for (int i = 0; i < 4; i++)
	{
		printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	}

	cout << "\n\t\t\t\t |\t  \t\t   " << points << " Points\t\t\t   |";

	for (int i = 0; i < 4; i++)
	{
		printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	}

	printf("\n\t\t\t\t |\t  \t Congratulations Your Score Is:  \t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|\n\n\n");
	printf("\t\t\t\t\t\t     Press Enter To Continue: ");

	getline(cin, mutualChoice);
}