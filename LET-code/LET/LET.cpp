#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int points = 0;

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
	printf("\n\n\n\n\t\t\t\t\t      Enter 3 To Practise Irregular Verbs ");
	printf("\n\n\n\n\t\t\t\t\t\t      Enter Your Choice: ");
}

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

void displayTheDeadBoyHead()
{
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t\t\t\t\t  _");
	printf("\n\t\t\t\t\t\t\t\t\t / \\");
	printf("\n\t\t\t\t\t\t\t\t\t/   \\");
	printf("\n\t\t\t\t\t\t\t\t       |     |");

	for (int i = 0; i < 2; i++) printf("\n\t\t\t\t\t\t\t\t       |     |");

	printf("\n\t\t\t\t\t\t\t\t        \\   /");
	printf("\n\t\t\t\t\t\t\t\t         \\_/");
}

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

void playGuessTheWord()
{
	string wordList[50] = { "resource","pleasant","champion","necklace","offender","overlook","creation","cemetery","marriage",
	"solution","skeleton","stunning","contrast","register","function","midnight","resident","movement","overview","positive",
	"ceremony","sunshine","building","dressing","mushroom","position","minimize","detector","cupboard" };
	int counter = 0;
	unsigned int index = rand() % 29;
	string theWord = wordList[index], choice;

	do
	{
		srand(time(0));
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

void displayTheResultOfGuessTheWord(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t  _________________________________________________________");

	for (int i = 0; i < 2; i++) printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");

	printf("\n\t\t\t\t |\t\t      Thanks For Playing!\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");

	for (int i = 0; i < 2; i++) printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");

	printf("\n\t\t\t\t |\t  \t Congratulations Your Score Is:  \t   |");

	for (int i = 0; i < 4; i++) printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");

	cout << "\n\t\t\t\t |\t  \t\t   " << points << " Points\t\t\t   |";

	for (int i = 0; i < 4; i++) printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");

	printf("\n\t\t\t\t |\t  \t Congratulations Your Score Is:  \t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|\n\n\n");
	printf("\t\t\t\t\t\t     Press Enter To Continue: ");

	getline(cin, mutualChoice);
}

void displayMenu()
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
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

void answerCheckEx(string sentence[10], string condition[1], string mutualChoice, string answers[10])
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

void answerCheckExMultipleChoice(string sentence[10], string condition[1], string mutualChoice, string answers[10], string chooseAnswer[10])
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

void displayTheUsageOfPresentSimpleTense(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Present Simple Tense.");
	printf("\n\n\n 1. We use the present simple when something is generally or always true.");
	printf("\n\n\t- People need food.");
	printf("\n\n\t- It snows in winter here.");
	printf("\n\n\t- Two and two make four.");
	printf("\n\n 2. Similarly, we need to use this tense for a situation that we think is more or less permanent.");
	printf("\n\n\t- Where do you live?");
	printf("\n\n\t- She works in a bank.");
	printf("\n\n\t- I don't like mushrooms.");
	printf("\n\n 3. The next use is for habits or things that we do regularly. We often use adverbs of frequency.");
	printf("\n\n\t- Do you smoke?");
	printf("\n\n\t- I play tennis every Tuesday.");
	printf("\n\n\t- I don't travel very often.");
	printf("\n\t\t\t\t\t\t\t\tPress Enter To Continue: ");

	getline(cin, mutualChoice);
}

void practisePresentSimpleTenseEx1(string mutualChoice)
{
	string sentence[10] = { "1. Harry (do) ___ the housework.", "2. Kate and Bill (find) ___ a new flat.","3. Nick (send) ___ an email every day.",
		"4. I (decide) ___ to learn Japanese.","5. Sam and Dave (cat) ___ all the sandwiches every time.", "6. Carlos' family (buy) ___ a dog every year.",
		"7. Maria and Helen (start) ___ at new school.","8. Frances (break) ___ her cup every time when he eats.","9. I (lose) ___ my umbrella after every rain.",
		"10. Max (take) ___ the dog for a walk every morning." };

	string answers[10] = { "does" , "find" , "sends" , "decide" , "cat" , "buy" , "start" , "breaks" , "loses" , "takes" };

	string condition[1] = { "Enter The Word: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Enter The Word To Complete The Sentence Correctly.");

	answerCheckEx(sentence, condition, mutualChoice, answers);
}

void practisePresentSimpleTenseEx2(string mutualChoice)
{
	string sentence[10] = { "1. A: Where are you from?\n  B: I __ from Bulgaria.",
	"2. A: Where __ you live?\n  B: I live in Brazil.","3. A: Hello, how are you?\n  B: I __ good thanks!",
	"4. A: What do you do in your free time?\n  B: I __.","5. A: ___ she writes an email?\n  B: Yes,she does.",
	"6. A: The earth __ around the sun.\n  B: I know this.","7. A: ___ they good friends?\n  B: Yes, they are.",
	"8. A: I ___ reading detective stories.\n  B: I like it too!","9. A: Do we ___ each other?\n  B: No, we don't.",
	"10. A: Do you have a pool in your yard?\n  B: No, I __." };

	string chooseAnswer[10]{ "\n\n\ta) am  b) is" , "\n\n\ta) do  b) does" , "\n\n\ta) is  b) am" , "\n\n\ta) study  b) studies"
	, "\n\n\ta) Do  b) Does" , "\n\n\ta) go  b) goes" , "\n\n\ta) Are  b) Is" , "\n\n\ta) likes  b) like" , "\n\n\ta) know  b) knows"
	, "\n\n\ta) doesn't b) don't" };

	string answers[10] = { "a" , "a" , "b" , "a" , "b" , "b" , "a" , "b" , "a" , "b" };

	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");

	answerCheckExMultipleChoice(sentence, condition, mutualChoice, answers, chooseAnswer);
}

void practisePresentSimpleTenseEx3(string mutualChoice)
{
	string sentence[10] = { "1. He love playing basketball.","2. They sleeps in afternoon.","3. He get up early everyday.",
	"4. We cooks every day.","5. We goes to the gym together.","6. You has a big house.",
	"7. She go to work by car.","8. The sun rise at the east.","9. I likes programming and biology.",
	"10. I don't plays video games." };

	string answers[10] = { "loves" , "sleep" , "gets" , "cook" , "go" , "have" , "goes" , "rises" , "like" , "play" };

	string condition[1] = { "Enter The Correct Form Of The Mistake: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");

	answerCheckEx(sentence, condition, mutualChoice, answers);
}

void practisePresentSimpleTenseEx4(string mutualChoice)
{
	string sentence[10] = { "1. He loves to play basketball.", "2. He goes to school.","3. She writes an e-mail to her best friend.",
		"4. He thinks he is very handsome.","5. It usually rains every day here.", "6. It smells very delicious in the kitchen.",
		"7. We go to a gallery every Sunday.","8. The sun rises at the east.","9. She goes to work by car.",
		"10. You have a big house." };

	string answers[10] = { "Does he love to play basketball?" , "Does he go to school?" , "Does she write an e-mail to her best friend?"
	, "Does he think he is very handsome?" , "Does it usually rain every day here?" , "Does it smell very delicious in the kitchen?"
	, "Do we go to a gallery every Sunday?" , "Does the sun rise at the east?" , "Does she go to work by car?" , "Do you have a big house?" };

	string condition[1] = { "Enter The Question Form Of The Sentence: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Questions.");

	answerCheckEx(sentence, condition, mutualChoice, answers);
}

void displayTheUsageOfPresentContinuousTense(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Present Continuous Tense.");
	printf("\n\n\n 1. First, we use the present continuous for things that are happening at the moment of speaking.");
	printf("\n\n\t- I'm working at the moment.");
	printf("\n\n\t- Please call back as we are eating dinner now.");
	printf("\n\n\t- Julie is sleeping.");
	printf("\n\n\n 2. We can also use this tense for kinds of temporary situations, even if the action isn't happening at this moment.");
	printf("\n\n\t- John's working in a bar until he finds a job in his field. (He might not be working now.)");
	printf("\n\n\t- I'm reading a really great book.");
	printf("\n\n\t- She's staying with her friend for a week.");
	printf("\n\n\n 3. We can use the present continuous for temporary or new habits.");
	printf("\n\n\t- He's eating a lot these days.");
	printf("\n\n\t- She's swimming every morning (she didn't use to do this).");
	printf("\n\n\t- You're smoking too much.");
	printf("\t\t\t\t\tPress Enter To Continue: ");

	getline(cin, mutualChoice);
}

void practisePresentContinuousTenseEx1(string mutualChoice)
{
	string sentence[10] = { "1. The boys are ___ (play) football after school.", "2. They are ___ (learn) Spanish now.","3. Why aren't you ___ (do) your homework?",
		"4. Suzan is ___ (iron) her clothes right now.","5. Mary is at university. She's ___ (study) chemistry.", "6. She is ___ (work) right now.",
		"7. They aren't ___ (study) English these days.","8. She is constanly ___ (change) her hair color.","9. Children are ___ (study) their lessons.",
		"10. The man is ___ (talk) on the phone." };

	string answers[10] = { "playing" , "learning" , "doing" , "ironing" , "studying" , "working" , "studying" , "changing" , "studying" , "talking" };

	string condition[1] = { "Enter The Word: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Enter The Word To Complete The Sentence Correctly.");

	answerCheckEx(sentence, condition, mutualChoice, answers);
}

void practisePresentContinuousTenseEx2(string mutualChoice)
{
	string sentence[10] = { "1. A: Where are you going?\n  B: I ___ going to school.",
	"2. A: What are you doing?\n  B: I am ___ the guitar.","3. A: What are they doing?\n  B: ___ are playing football.",
	"4. A: ___ we starting?\n  B: Yes, we are.","5. A: Why are you ___?\n  B: Because, I fell terrible.",
	"6. A: Why ___ they skiing?\n  B: I have no idea.","7. A: Are you studying?\n  B: Yes, I ___.",
	"8. A: I love reading detective stories.\n  B: Realy? At this moment I ___ reading detective story.",
	"9. A: Is the girl studying ___?\n  B: Yes, she is.",
	"10. A: Are you having a bath right now?\n  B: No, I __." };

	string answers[10] = { "a" , "a" , "b" , "a" , "a" , "b" , "a" , "b" , "a" , "b" };

	string chooseAnswer[10]{ "\n\n\ta) am  b) is" , "\n\n\ta) playing  b) play" , "\n\n\ta) We  b) They" , "\n\n\ta) Are  b) Do"
	, "\n\n\ta) crying  b) cry" , "\n\n\ta) we  b) are" , "\n\n\ta) do  b) does" , "\n\n\ta) do  b) am" , "\n\n\ta) now  b) general"
	, "\n\n\ta) doesn't b) don't" };

	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");

	answerCheckExMultipleChoice(sentence, condition, mutualChoice, answers, chooseAnswer);
}

void practisePresentContinuousTenseEx3(string mutualChoice)
{
	string sentence[10] = { "1. The boys is playing football now.","2. They are learn Spanish now.",
	"3. Why aren't you do your homework?","4. Suzan are ironing her clothes right now.",
	"5. Marry is at university. She is study chemistry.","6. She is works at this moment.",
	"7. They isn't studying English these days.","8. She is constantly changed her hair color.",
	"9. Children is studying their lessons.","10. The man is talks on the phone now." };

	string answers[10] = { "are" , "learning" , "doing" , "is" , "studying" , "working" , "aren't" , "changing" , "are" , "talking" };

	string condition[1] = { "Enter The Correct Form Of The Mistake: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");

	answerCheckEx(sentence, condition, mutualChoice, answers);
}

void practisePresentContinuousTenseEx4(string mutualChoice)
{
	string sentence[10] = { "1. They are playing football after school.", "2. They are learning Spanish now.","3. You are doing your homework now.",
		"4. They are walking in the lawn.","5. Mary is making a cake right now.", "6. He is training at this moment.",
		"7. It is raining.","8. He is running to the yard.","9. We are meeting in the room.",
		"10. I am going to school." };

	string answers[10] = { "Are they playing football after school?" , "Are they learning Spanish now?" , "Are you doing your homework now?"
	, "Are they walking in the lawn?" , "Is Mary making a cake right now?" , "Is he training at this moment?" , "Is it raining?" , "Is he running to the yard?"
	, "Are we meeting in the room?" , "Am I going to school?" };

	string condition[1] = { "Enter The Question Form Of The Sentence: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Questions.");

	answerCheckEx(sentence, condition, mutualChoice, answers);
}

int main()
{
	displayStartPage();
}