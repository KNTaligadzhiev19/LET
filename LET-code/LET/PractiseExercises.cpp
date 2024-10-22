#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>
#include "FrontEnd.h"
#include "BackEnd.h"

using namespace std;

// Displays the usage of the Present Simple Tense
void displayTheUsageOfPresentSimpleTense(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
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

// Practise Present Simple Tense
void practisePresentSimpleTenseEx1(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Harry (do) ___ the housework.", "2. Kate and Bill (find) ___ a new flat.",
	"3. Nick (send) ___ an email every day.","4. I (decide) ___ to learn Japanese.",
	"5. Sam and Dave (cat) ___ all the sandwiches every time.", "6. Carlos' family (buy) ___ a dog every year.",
	"7. Maria and Helen (start) ___ at new school.","8. Frances (break) ___ her cup every time when he eats.",
	"9. I (lose) ___ my umbrella after every rain.","10. Max (take) ___ the dog for a walk every morning." };

	string answers[10] = { "does" , "find" , "sends" , "decide" , "cat" , "buy" , "start" , "breaks" , "loses" , "takes" };

	string condition[1] = { "Enter The Word: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\nEx.1 Enter The Word To Complete The Sentence Correctly.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Present Simple Tense
void practisePresentSimpleTenseEx2(string mutualChoice, int& points)
{
	string sentence[10] = { "1. A: Where are you from?\n  B: I __ from Bulgaria.",
	"2. A: Where __ you live?\n  B: I live in Brazil.","3. A: Hello, how are you?\n  B: I __ good thanks!",
	"4. A: What do you do in your free time?\n  B: I __.","5. A: ___ she writes an email?\n  B: Yes,she does.",
	"6. A: The earth __ around the sun.\n  B: I know this.","7. A: ___ they good friends?\n  B: Yes, they are.",
	"8. A: I ___ reading detective stories.\n  B: I like it too!","9. A: Do we ___ each other?\n  B: No, we don't.",
	"10. A: Do you have a pool in your yard?\n  B: No, I __." };

	string chooseAnswer[10]{ "\n\n\ta) am  b) is","\n\n\ta) do  b) does","\n\n\ta) is  b) am",
	"\n\n\ta) study  b) studies","\n\n\ta) Do  b) Does","\n\n\ta) go  b) goes","\n\n\ta) Are  b) Is",
	"\n\n\ta) likes  b) like","\n\n\ta) know  b) knows","\n\n\ta) doesn't b) don't" };

	string answers[10] = { "a" , "a" , "b" , "a" , "b" , "b" , "a" , "b" , "a" , "b" };

	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");

	checkAnswerExMultipleChoice(sentence, condition, mutualChoice, answers, chooseAnswer, points);
}

// Practise Present Simple Tense
void practisePresentSimpleTenseEx3(string mutualChoice, int& points)
{
	string sentence[10] = { "1. He love playing basketball.","2. They sleeps in afternoon.",
	"3. He get up early everyday.","4. We cooks every day.","5. We goes to the gym together.",
	"6. You has a big house.","7. She go to work by car.","8. The sun rise at the east.",
	"9. I likes programming and biology.","10. I don't plays video games." };

	string answers[10] = { "loves" , "sleep" , "gets" , "cook" , "go" , "have" , "goes" , "rises" , "like" , "play" };

	string condition[1] = { "Enter The Correct Form Of The Mistake: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Present Simple Tense
void practisePresentSimpleTenseEx4(string mutualChoice, int& points)
{
	string sentence[10] = { "1. He loves to play basketball.", "2. He goes to school.",
	"3. She writes an e-mail to her best friend.","4. He thinks he is very handsome.",
	"5. It usually rains every day here.", "6. It smells very delicious in the kitchen.",
	"7. We go to a gallery every Sunday.","8. The sun rises at the east.",
	"9. She goes to work by car.","10. You have a big house." };

	string answers[10] = { "Does he love to play basketball?","Does he go to school?",
	"Does she write an e-mail to her best friend?","Does he think he is very handsome?",
	"Does it usually rain every day here?" , "Does it smell very delicious in the kitchen?",
	"Do we go to a gallery every Sunday?","Does the sun rise at the east?",
	"Does she go to work by car?","Do you have a big house?" };

	string condition[1] = { "Enter The Question Form Of The Sentence: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Questions.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Displays the usage of Present Continuous Tense
void displayTheUsageOfPresentContinuousTense(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
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

// Practise Present Continuous Tense
void practisePresentContinuousTenseEx1(string mutualChoice, int& points)
{
	string sentence[10] = {
	"1. The boys are ___ (play) football after school.","2. They are ___ (learn) Spanish now.",
	"3. Why aren't you ___ (do) your homework?","4. Suzan is ___ (iron) her clothes right now.",
	"5. Mary is at university. She's ___ (study) chemistry.", "6. She is ___ (work) right now.",
	"7. They aren't ___ (study) English these days.","8. She is constanly ___ (change) her hair color.",
	"9. Children are ___ (study) their lessons.","10. The man is ___ (talk) on the phone." };

	string answers[10] = { "playing","learning","doing","ironing","studying","working","studying",
	"changing","studying","talking" };

	string condition[1] = { "Enter The Word: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\nEx.1 Enter The Word To Complete The Sentence Correctly.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Present Continuous Tense
void practisePresentContinuousTenseEx2(string mutualChoice, int& points)
{
	string sentence[10] = {
	"1. A: Where are you going?\n  B: I ___ going to school.","2. A: What are you doing?\n  B: I am ___ the guitar.",
	"3. A: What are they doing?\n  B: ___ are playing football.","4. A: ___ we starting?\n  B: Yes, we are.",
	"5. A: Why are you ___?\n  B: Because, I fell terrible.","6. A: Why ___ they skiing?\n  B: I have no idea.",
	"7. A: Are you studying?\n  B: Yes, I ___.",
	"8. A: I love reading detective stories.\n  B: Realy? At this moment I ___ reading detective story.",
	"9. A: Is the girl studying ___?\n  B: Yes, she is.","10. A: Are you having a bath right now?\n  B: No, I __." };

	string answers[10] = { "a" , "a" , "b" , "a" , "a" , "b" , "a" , "b" , "a" , "b" };

	string chooseAnswer[10]{
	"\n\n\ta) am  b) is","\n\n\ta) playing  b) play","\n\n\ta) We  b) They","\n\n\ta) Are  b) Do",
	"\n\n\ta) crying  b) cry","\n\n\ta) we  b) are","\n\n\ta) do  b) does","\n\n\ta) do  b) am",
	"\n\n\ta) now  b) general","\n\n\ta) doesn't b) don't" };

	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");

	checkAnswerExMultipleChoice(sentence, condition, mutualChoice, answers, chooseAnswer, points);
}

// Practise Present Continuous Tense
void practisePresentContinuousTenseEx3(string mutualChoice, int& points)
{
	string sentence[10] = { "1. The boys is playing football now.","2. They are learn Spanish now.",
	"3. Why aren't you do your homework?","4. Suzan are ironing her clothes right now.",
	"5. Marry is at university. She is study chemistry.","6. She is works at this moment.",
	"7. They isn't studying English these days.","8. She is constantly changed her hair color.",
	"9. Children is studying their lessons.","10. The man is talks on the phone now." };

	string answers[10] = { "are","learning","doing","is","studying","working","aren't","changing","are","talking" };

	string condition[1] = { "Enter The Correct Form Of The Mistake: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Present Continuous Tense
void practisePresentContinuousTenseEx4(string mutualChoice, int& points)
{
	string sentence[10] = {
	"1. They are playing football after school.", "2. They are learning Spanish now.",
	"3. You are doing your homework now.","4. They are walking in the lawn.",
	"5. Mary is making a cake right now.", "6. He is training at this moment.",
	"7. It is raining.","8. He is running to the yard.","9. We are meeting in the room.",
	"10. I am going to school." };

	string answers[10] = {
	"Are they playing football after school?","Are they learning Spanish now?","Are you doing your homework now?",
	"Are they walking in the lawn?","Is Mary making a cake right now?","Is he training at this moment?","Is it raining?",
	"Is he running to the yard?","Are we meeting in the room?" , "Am I going to school?" };

	string condition[1] = { "Enter The Question Form Of The Sentence: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET(Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Questions.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Displays the usage of Past Simple Tense
void displayTheUsageOfPastSimpleTense(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Past Simple Tense.");
	printf("\n\n\n 1. We use it with finished actions, states or habits in the past when we have a finished time word.");
	printf("\n\n\t- I went to the cinema yesterday.\n");
	printf("\n\t- We spent a lot of time in Japan in 2007.");
	printf("\n\n\n 2. We use it with finished actions, states or habits in the past when we know that the time period has finished.");
	printf("\n\n\t- Leonardo painted the Mona Lisa.\n");
	printf("\n\t- The Vikings invaded Britain.");
	printf("\n\n\n 3. For stories or lists of events, we often use the past simple for the actions in the story.");
	printf("\n\n\n\t- He went to a cafe. People were chatting and music was playing. He sat down and ordered a coffee.");
	printf("\n\n\n\n\t\t\t\t\t\t\t\tPress Enter To Continue: ");

	getline(cin, mutualChoice);
}

// Practise Past Simple Tense
void practisePastSimpleTenseEx1(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Tom ___ (look) out of the window before 5 minutes.","2. We ___ (arrive) at 6.30 yesterday.",
	"3. Laura ___ (watched) television all afternoon today.","4. The bus ___ (stop) at the end of the street a minute ago.",
	"5. I ___ (visit) an old castle last Saturday.","6. Sue ___ (wait) for her friends for more than an hour.",
	"7. They ___ (decide) to come to my party yesterday.","8. He ___ (do) his test, before everyone.",
	"9. Ivan and George ___ (play) football two hours ago.","10. Susan ___ (study) more than us last year." };

	string answers[10] = { "looked" , "arrived" , "watched" , "stopped" , "visited" , "waited" , "decided" , "did" , "played" , "studied" };

	string condition[1] = { "Enter The Word: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Enter The Word To Complete The Sentence Correctly.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Past Simple Tense
void practisePastSimpleTenseEx2(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Did she ___ her room?","2. We ___ good friends before.",
	"3. They ___ in Spain two years ago.","4. An old man ___ down in front of my eyes yesterday.",
	"5. Marry ___ to turn of the light.","6. Did they ___ the match?",
	"7. I ___ to school yesterday.","8. A gardener _____ dead leaves.",
	"9. Amelia ___ to stay with her father.","10. George ___ home very late last night." };

	string chooseAnswer[10]{ "\n\n\ta) clean  b) cleaned" , "\n\n\ta) were  b) are" , "\n\n\ta) life  b) lived" , "\n\n\ta) sat  b) sitted"
	, "\n\n\ta) forget  b) forgot" , "\n\n\ta) lost  b) lose" , "\n\n\ta) went  b) goed" , "\n\n\ta) sweeped up  b) swept up" , "\n\n\ta) chose  b) choosed"
	, "\n\n\ta) comed b) came" };

	string answers[10] = { "a" , "a" , "b" , "a" , "b" , "b" , "a" , "b" , "a" , "b" };

	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");

	checkAnswerExMultipleChoice(sentence, condition, mutualChoice, answers, chooseAnswer, points);
}

// Practise Past Simple Tense
void practisePastSimpleTenseEx3(string mutualChoice, int& points)
{
	string sentence[10] = { "1. I watch TV last week.","2. We eated meat with my best friend yesterday.",
	"3. The bus stoped a few minutes ago.","4. I meeted my wife 9 years ago.",
	"5. She leaved the school in 2010.","6. He buyed a new house last month.",
	"7. I readed an interesting book yesterday.","8. We do a lot of job before 3 days.",
	"9. She finish her work at six o'clock yesterday.","10. I goed to bed early two days ago." };

	string answers[10] = { "watched" , "ate" , "stopped" , "met" , "left" , "bought" , "read" , "did" , "finished" , "went" };

	string condition[1] = { "Enter The Correct Form Of The Mistake: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Past Simple Tense
void practisePastSimpleTenseEx4(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Tim arrived at 2.00.","2. Sam phoned home." , "3. Helen wanted to make a phone call.","4. Paul visited the doctor.",
	"5. Bill missed the bus.","6. George walked to school." , "7. Jim opened the window.","8. Emma helped the teacher.",
	"9. Alice washed her hair.","10. Nikol went to bed." };

	string answers[10] = { "Did Tim arrive at 2.00?" , "Did Sam phone home?" , "Did Helen want to make a phone call?" , "Did Paul visit the doctor?"
	, "Did Bill miss the bus?" , "Did George walk to school?" , "Did Jim open the window?" , "Did Emma help the teacher?"
	, "Did Alice wash her hair?" , "Did Nikol go to bed?" };

	string condition[1] = { "Enter The Question Form Of The Sentence: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Questions.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Displays the usage of Past Continuous Tense
void displayTheUsageOfPastContinuousTense(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Past Continuous Tense.");
	printf("\n\n\n 1. An action in the past which overlaps another action or a time. The action in the past continuous starts \n    before and often continues after the other shorter action or time.");
	printf("\n\n\t- I was walking to the station when I met John.\n");
	printf("\n\t- At three o'clock, I was working. ");
	printf("\n\n\n 2. In the same way, we can use the past continuous for the background of a story.");
	printf("\n\n\t- Leonardo painted the Mona Lisa.\n");
	printf("\n\t- The Vikings invaded Britain.");
	printf("\n\n\n 3. Temporary habits that happen more often than we expect in the past.");
	printf("\n\n\t- He was always leaving the tap running.");
	printf("\n\n\t- She was constantly singing.");
	printf("\n\n\n\t\t\t\t\t\t\t\tPress Enter To Continue: ");

	getline(cin, mutualChoice);
}

// Practise Past Continuous Tense
void practisePastContinuousTenseEx1(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Anna ___ (read a book).", "2. Paula and Jim ___ (play football).","3. Tim ___ (write on the board).",
		"4. Kate and Bill ___ (listen to music).","5. Sam ___ (look out of the window).", "6. Ed and Lisa ___ (draw pictures).",
		"7. George ___ (do his homework).","8. Ivan ___ (play on his phone).","9. Paolo ___ (watch TV).", "10. Mario and Petar (wait for the class)." };

	string answers[10] = { "Anna was reading a book." , "Paula and Jim were playing football." , "Tim was writing on the board."
	, "Kate and Bill were listening to music." , "Sam was looking out of the window." , "Ed and Lisa were drawing pictures."
	, "George was doing his homework." , "Ivan was playing on his phone." , "Paolo was watching TV." , "Mario and Petar were waiting for the class." };

	string condition[1] = { "Enter The Sentence In Past Continuous Form: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Enter The Sentences In The Correct Form.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Past Continuous Tense
void practisePastContinuousTenseEx2(string mutualChoice, int& points)
{
	string sentence[10] = { "1. A: What ___ you doing 10 minutes ago?\n  B: I was studying.",
	"2. A: What were you doing at 7 o'clock in the morning?\n  B: I was ___.",
	"3. A: What were you ___ a few moments ago?\n  B: I was thinking about the math test tomorrow.",
	"4. A: What was our teacher saying a few minutes ago?\n  B: She was ___ about the test.",
	"5. A: What were ___ doing yesterday?\n  B: They were playing football.",
	"6. A: Was it raining two hours ago?\n  B: No, it ___.",
	"7. A: What we were doing yesterday at this time?\n  B: We ___ drinking alcohol.",
	"8. A: Why was ___ crying?\n  B: Because she was sad.","9. A: Were you sleeping yesterday night?\n  B: Yes, we ___.",
	"10. A: Were you cooking yesterday at this time?\n  B: No, I ___." };

	string chooseAnswer[10]{ "\n\n\ta) was  b) were" , "\n\n\ta) eating  b) eat" , "\n\n\ta) thinkings  b) thinking" , "\n\n\ta) talking  b) saying"
		, "\n\n\ta) you  b) they" , "\n\n\ta) weren't  b) wasn't" , "\n\n\ta) were  b) was" , "\n\n\ta) he  b) she" , "\n\n\ta) were  b) are"
		, "\n\n\ta) wasn't b) weren't" };

	string answers[10] = { "b" , "a" , "b" , "a" , "b" , "b" , "a" , "b" , "a" , "a" };

	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");

	checkAnswerExMultipleChoice(sentence, condition, mutualChoice, answers, chooseAnswer, points);
}

// Practise Past Continuous Tense
void practisePastContinuousTenseEx3(string mutualChoice, int& points)
{
	string sentence[10] = { "1. They are drinking coffe when I arrived.","2. I was watch football match on TV when he called.",
	"3. The earthquake was scared all of us.","4. We was eating when our friends showed up.",
	"5. The police were chasing us while you were talking.","6. We were goin to cinema yesterday at this time.",
	"7. John were reading an English book while Mary was watching TV.","8. What was you doing at this time yesterday?",
	"9. You are studying chemistry all day yesterday.", "10. While I was studyings at University I met her." };

	string answers[10] = { "were" , "watching" , "scaring" , "were" , "was" , "going" , "was" , "were" , "were" , "studying" };

	string condition[1] = { "Enter The Correct Form Of The Mistake: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Past Continuous Tense
void practisePastContinuousTenseEx4(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Tim was drawing pictures.", "2. Kate and Bill were looking out of the window.","3. Ed and Lisa were reading a book.",
		"4. Paula and Jim were writing on the board.","5. Anna was playing football.", "6. Sam was listening to music.",
		"7. George was watching TV.","8. Ivan was waiting for the class.","9. Paolo was playing on his phone.",
		"10. Mario and Petar were doing homework." };

	string answers[10] = { "Was Tim drawing pictures?" , "Were Kate and Bill looking out of the window?" , "Were Ed and Lisa reading a book?"
	, "Were Paula and Jim writing on the board?" , "Was Anna playing football?" , "Was Sam listening to music?" , "Was George watching TV?"
	, "Was Ivan waiting for the class?" , "Was Paolo playing on his phone?" , "Were Mario and Petar doing homework?" };

	string condition[1] = { "Enter The Question Form Of The Sentence: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Questions.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Displays the usage of Present Perfect Tense
void displayTheUsageOfPresentPerfectTense(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Present Perfect Tense.");
	printf("\n\n\n 1. We use this tense when we want to talk about unfinished actions or states or habits that started in the past and \n    continue to the present. Usually we use it to say 'how long' and we need 'since' or 'for'");
	printf("\n\n\t- I've known Karen since 1994.\n");
	printf("\n\t- She's lived in London for three years.\n");
	printf("\n\t- I've worked here for six months.");
	printf("\n\n\n 2. We use 'since' with a fixed time in the past. The fixed time can be another action, which is in the past simple.");
	printf("\n\n\t- I've known Sam since 1992.\n");
	printf("\n\t- I've liked chocolate since I was a child.\n");
	printf("\n\t- She's been here since 2pm.");
	printf("\n\n\n 3. We use 'for' with a period of time (2 hours, three years, six months).");
	printf("\n\n\t- I've known Julie for ten years.");
	printf("\n\n\t- I've been hungry for hours.");
	printf("\n\t\t\t\t\t\t\t\tPress Enter To Continue: ");

	getline(cin, mutualChoice);
}

// Practise Present Perfect Tense
void practisePresentPerfectTenseEx1(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Harry (do) ___ the housework.", "2. Kate and Bill (find) ___ a new flat.","3. Nick (send) ___ an email.",
		"4. I (decide) ___ to learn Japanese.","5. Sam and Dave (cat) ___ all the sandwiches.", "6. Carlos (buy) ___ a dog.",
		"7. Maria and Helen (start) ___ at new school.","8. Frances (break) ___ her cup.","9. I (lose) ___ my umbrella.",
		"10. Max (take) ___ the dog for a walk." };

	string answers[10] = { "Harry has done the housework." , "Kate and Bill have found a new flat." , "Nick has sent an email."
	, "I have decided to learn Japanese." , "Sam and Dave have catted all the sandwiches." , "Carlos has bought a dog."
	, "Maria and Helen have started at new school." , "Frances has broken her cup." , "I have lost my umbrella." , "Max has taken the dog for a walk." };

	string condition[1] = { "Enter The Sentence In Present Perfect Form: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Enter The Sentences In The Correct Form.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Present Perfect Tense
void practisePresentPerfectTenseEx2(string mutualChoice, int& points)
{
	string sentence[10] = { "1. My mother ___ been watched TV.","2. They have been ___ the Lord of the Kings.",
		"3. She ___ learned to speak French.","4. Sansa and Cersei have ___ each other since 5 years old.",
		"5. My sister has ___ the key in the bathroom.","6. The army ___ attacked that city two times.",
		"7. You ___ listened to Madonna in the concert.","8. Scientists have ___ the atom.",
		"9. I have ___ here since I left school.","10. ___ you just finished homework?" };

	string chooseAnswer[10]{ "\n\n\ta) has  b) have" , "\n\n\ta) watched  b) watching" , "\n\n\ta) have  b) has" , "\n\n\ta) known  b) knew"
		, "\n\n\ta) losen  b) lost" , "\n\n\ta) have  b) has" , "\n\n\ta) have  b) has" , "\n\n\ta) splitten  b) split" , "\n\n\ta) worked  b) work"
		, "\n\n\ta) Has b) Have" };

	string answers[10] = { "a" , "a" , "b" , "a" , "b" , "b" , "a" , "b" , "a" , "b" };

	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");

	checkAnswerExMultipleChoice(sentence, condition, mutualChoice, answers, chooseAnswer, points);
}

// Practise Present Perfect Tense
void practisePresentPerfectTenseEx3(string mutualChoice, int& points)
{
	string sentence[10] = { "1. I has worked as an engineer for two years.","2. My brother has drived a car before.",
		"3. I have maden you a cup of coffee.","4. The class have been outside for recess.",
		"5. She has watching this movie several times.","6. My mother have just cleaned the house.",
		"7. I have eated a lunch.","8. I has worked here since April.",
		"9. She have already come.", "10. I have be to China 4 times." };

	string answers[10] = { "have" , "driven" , "made" , "has" , "watched" , "has" , "eaten" , "have" , "has" , "been" };

	string condition[1] = { "Enter The Correct Form Of The Mistake: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Present Perfect Tense
void practisePresentPerfectTenseEx4(string mutualChoice, int& points)
{
	string sentence[10] = { "1. How long / you study English.", "2. How long / you have a cell phone.","3. How long / you have an e-mail address.",
		"4. How long / you have be alive.","5. How long / you have be a student.", "6. How long / you have be marry.",
		"7. How long / you have live in your house.","8. How long / you have live in this country.","9. How long / you have know me.",
		"10. How long / you have be awake today." };

	string answers[10] = { "How long have you studied English?" , "How long have you had a cell phone?" , "How long have you had an e-mail address?"
	, "How long have you been alive?" , "How long have you been a student?" , "How long have you been married?" , "How long have you lived in your house?"
	, "How long have you lived in this country?" , "How long have you known me?" , "How long have you been awake today?" };

	string condition[1] = { "Enter The Question Form Of The Sentence: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Questions.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Displays the usage of Future Simple Tense
void displayTheUsageOfFutureSimpleTense(string mutualChoice)
{
	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Future Simple Tense.");
	printf("\n\n\n 1. We use the future simple with 'will' to predict the future. It is the basic way we talk about the future in English,\n    and we often use it if there is no reason to use another future tense");
	printf("\n\n\t- The sun will rise at 7am.\n");
	printf("\n\t- I think the Conservatives will win the next election.\n");
	printf("\n\n 2. Promises / requests / refusals / offers.");
	printf("\n\n\t- I'll help you with your homework.\n");
	printf("\n\t- Will you give me a hand?\n");
	printf("\n\t- I won't go!");
	printf("\n\n\n 3. In a similar way, we often use 'will' when we're talking about a decision at the moment of speaking.");
	printf("\n\n\t- I'm cold. B: I'll close the window.");
	printf("\n\n\n 4. We use the simple future with 'will' in the first conditional.");
	printf("\n\n\t- If it doesn't rain, we'll go to the park.");
	printf("\t\t\t\tPress Enter To Continue: ");

	getline(cin, mutualChoice);
}

// Practise Future Simple Tense
void practiseFutureSimpleTenseEx1(string mutualChoice, int& points)
{
	string sentence[10] = { "1. I (choose) ___ the team next week.", "2. You (not have) ___ a lot of time to answer the questions.",
		"3. Mr Jones (be) ___ back at about 7.30.","4. Dimitri (not know) ___ the answer.","5. I'm sure Jane (like) ___ her birthday present.",
		"6. (you give) ___ us any homework on Friday?.","7. There (not be) ___ any lessons tomorrow.",
		"8. (we see) ___ you tomorrow evening?","9. I expect lots of people (buy) ___ Alan White's new book.",
		"10. I think our team (win) ___ the match." };

	string answers[10] = { "I will choose the team next week." , "You won't have a lot of time to answer the questions." , "Mr Jones will be back at about 7.30."
	, "Dimitri won't know the answer." , "I'm sure Jane will like her birthday present." , "Will you give us any homework on Friday?"
	, "There won't be any lessons tomorrow." , "Will we see you tomorrow evening?" , "I expect lots of people will buy Alan White's new book."
	, "I think our team will win the match." };

	string condition[1] = { "Enter The Sentence In Future Simple Form: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Enter The Sentences In The Correct Form. Use 'will' or 'won't' and the verb in brackets.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Future Simple Tense
void practiseFutureSimpleTenseEx2(string mutualChoice, int& points)
{
	string sentence[10] = { "1. A: What will you do this weekend?\n  B: A friend ___ come to visit me.",
	"2. A: Will you go to that Italian restaurant?\n  B: No, we ___.", "3. A: Will you help me get the door?\n  B: Sure, I ___ get it.",
	"4. A: Will you come in?\n  B: No, I ___.", "5. A: Will you go to Thailand?\n  B: No, I will ___ to Germany.",
	"6. A: Will you make dinner?\n  B: Yes, I ___.", "7. A: What will you do after 5 minutes?\n  B: I will ___ football.",
	"8. A: ___ start the exam?\n  B: Yes, I will.", "9. A: Where ______ go?\n  B: She will go to the bus station.",
	"10. A: Why will he fight?\n  B: He ___ fight, because he is angry." };

	string chooseAnswer[10]{ "\n\n\ta) is  b) will" , "\n\n\ta) won't  b) don't" , "\n\n\ta) going to  b) will" , "\n\n\ta) won't  b) will"
		, "\n\n\ta) went  b) go" , "\n\n\ta) do  b) will" , "\n\n\ta) play  b) playing" , "\n\n\ta) Won't  b) Will" ,
		"\n\n\ta) will she  b) she will" , "\n\n\ta) will b) go" };

	string answers[10] = { "b" , "a" , "b" , "a" , "b" , "b" , "a" , "b" , "a" , "a" };

	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");

	checkAnswerExMultipleChoice(sentence, condition, mutualChoice, answers, chooseAnswer, points);
}

// Practise Future Simple Tense
void practiseFutureSimpleTenseEx3(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Your children was be the future of this country.","2. They are write the letter to their best friend tomorrow.",
		"3. I wil read the newspaper when I go to the bus station.","4. Tommorow the sun will rising at 6.00 am.",
		"5. They will be her in two hours.","6. Will you came to the party?", "7. When will you travell?.","8. You can't carry this luggage by yourself. I am help you.",
		"9. I am will cook tonight.", "10. It will be very cold next week. We can go to the beach." };

	string answers[10] = { "will" , "will" , "will" , "rise" , "here" , "come" , "travel" , "will" , "going to" , "will not" };

	string condition[1] = { "Enter The Correct Form Of The Mistake: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only One Or Two Words; Don't Use Contractions!).");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}

// Practise Future Simple Tense
void practiseFutureSimpleTenseEx4(string mutualChoice, int& points)
{
	string sentence[10] = { "1. Your children will be the future of this country.","2. They will write the letter to their best friend tomorrow.",
		"3. I will read the newspaper when I go to the bus station.","4. Tommorow the sun will rising at 6.00 am.",
		"5. They will be her in two hours.","6. You will come to the party.","7. You will travel.","8. You can't carry this luggage by yourself.",
		"9. I will cook tonight.", "10. It will be very cold next week." };

	string answers[10] = { "Will your children be the future of this country?" , "Will they write the letter to their best friend tomorrow?"
	, "Will I read the newspaper when I go to the bus station?" , "Will the sun rise at 6.00 pm tommorow?" , "Will they be here in two hours?"
	, "Will you come to the party?" , "Will you travel?" , "Can't you carry this luggage by yourself?" , "Will I cook tonight?"
	, "Will it be very cold next week?" };

	string condition[1] = { "Enter The Question Form Of The Sentence: " };

	system("cls");

	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Questions.");

	checkAnswerEx(sentence, condition, mutualChoice, answers, points);
}