#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

//Draws the abbreviation of the application
void displayLogo()
{
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\n\n\n\t\t\t\t|\t\t\t|-------------\t\t-------------");
	printf("\n\t\t\t\t|\t\t\t|\t\t\t      |");
	printf("\n\t\t\t\t|\t\t\t|\t\t\t      |");
	printf("\n\t\t\t\t|\t\t\t|-------------\t\t      |");
	printf("\n\t\t\t\t|\t\t\t|\t\t\t      |");
	printf("\n\t\t\t\t|\t\t\t|\t\t\t      |");
	printf("\n\t\t\t\t|___________\t        |-------------\t\t      |");
}

//Displays the modes of the application
void displayStartPage()
{
	displayLogo();
	printf("\n\n\n");

	//Draws the line under the abbreviation
	for (int i = 0; i < 120; i++)
	{
		cout << "_";
		//Slows down the drawing of the line
		Sleep(15);
	}

	//Displays the two modes of the application
	printf("\n\n\n\t\t    Enter 1 To Practise English Tenses\t\t     Enter 2 To Play Guess The Word");
	printf("\n\n\n\t\t\t\t\t\t     Enter Your Choice: ");
}

int main()
{
	displayStartPage();
}