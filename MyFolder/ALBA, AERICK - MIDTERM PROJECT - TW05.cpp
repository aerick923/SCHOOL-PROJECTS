#include <iostream> 
using namespace std;

int main()
{
	int points = 0;
	string name;
	string answer;

	cout << "===== REGISTRATION =====\n"
		 << "ENTER YOUR NAME: "; cin >> name;
	cout << "===== WELCOME " << name << "! TO THE LANGUAGE TRANSLATION PRACTICE TOOL =====\n"
		<< "TRANSLATE THE FOLLOWING ENGLISH PHRASES INTO FILIPINO. PLEASE FOLLOW THE FORMAT OF THE GIVEN PHRASES FOR YOUR ANSWERS:\n"
		<< "======================================================\n"
		<< "QUESTION NO. 1: HELLO \n"
		<< "ANSWER: "; cin >> answer;

	if (answer == "KAMUSTA")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: KAMUSTA | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 2: GOODBYE \n"
		<< "ANSWER: "; cin >> answer;

	if (answer == "PAALAM")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: PAALAM | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 3: THANKS \n"
		<< "ANSWER: "; cin >> answer;

	if (answer == "SALAMAT")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: SALAMAT | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 4: SORRY \n"
		<< "ANSWER: "; cin >> answer;

	if (answer == "PAUMANHIN")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: PAUMANHIN | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 5: GOOD HEALTH! \n"
		 << "ANSWER: "; cin >> answer;

	if (answer == "MABUHAY")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: MABUHAY | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 6: TIRED \n"
		 << "ANSWER: "; cin >> answer;

	if (answer == "PAGOD")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: PAGOD | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 7: HUNGRY \n"
		<< "ANSWER: "; cin >> answer;

	if (answer == "GUTOM")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: GUTOM | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 8: SCHOOL \n"
		<< "ANSWER: "; cin >> answer;

	if (answer == "PAARALAN")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: PAARALAN | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 9: YES \n"
		<< "ANSWER: "; cin >> answer;

	if (answer == "OO")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: OO | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "QUESTION NO. 10: NO \n"
		<< "ANSWER: "; cin >> answer;

	if (answer == "HINDI")
	{
		points++;
		cout << "CORRECT! | CURRENT SCORE: " << points << "\n";
	}

	else
	{
		cout << "WRONG! | CORRECT ANSWER: HINDI | CURRENT SCORE: " << points << "\n";
	}

	cout << "======================================================\n";
	cout << "OVERALL SCORE AND FEEDBACK:\n";
	cout << "======================================================\n";

	if (points == 9 || points == 10)
	{
		cout << "CONGRATULATIONS! YOU GOT A SCORE OF " << points << " /10 | REMARKS: OUTSTANDING!\n";
		cout << "======================================================\n";
	}

	else if (points == 7 || points == 8)
	{
		cout << "CONGRATULATIONS! YOU GOT A SCORE OF " << points << " /10 | REMARKS: VERY SATISFACTORY!\n";
		cout << "======================================================\n";
	}

	else if (points == 5 || points == 6)
	{
		cout << "CONGRATULATIONS! YOU GOT A SCORE OF " << points << " /10 | REMARKS: SATISFACTORY!\n";
		cout << "======================================================\n";
	}

	else if (points == 3 || points == 4)
	{
		cout << "CONGRATULATIONS! YOU GOT A SCORE OF " << points << " /10 | REMARKS: FAIRLY SATISFACTORY!\n";
		cout << "======================================================\n";
	}

	else if (points == 1 || points == 2)
	{
		cout << "I AM SORRY TO INFORM YOU BUT YOU GOT A SCORE OF " << points << " /10 | REMARKS: DID NOT MEET EXPECTATIONS\n";
		cout << "======================================================\n";
	}

	else
	{
		cout << "I AM SORRY TO INFORM YOU BUT YOU GOT A SCORE OF " << points << " /10 | REMARKS: FAIL\n";
		cout << "======================================================\n";
	}

	cout << "THANK YOU FOR USING THE LANGUAGE TRANSLATION PRACTICE TOOL!";

	return 0;
}