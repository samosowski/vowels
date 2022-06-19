//Samantha Osowski 
//Week 4 Programming Assignment
//In this program we will count the number of vowels in a file.
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
int main(int argc, char* argv[])
{
	//Displaying the welcome message
	cout << "*******************************************************************" << endl;
	cout << "*************** Welcome to my Letter Count Program ****************" << endl;
	cout << "*******************************************************************" << endl;
	cout << "\n";

	//Declaring variables
	char letter;
	int A = 0;
	int E = 0;
	int I = 0;
	int O = 0;
	int U = 0;
	int S = 0; 
	int T = 0;
	int D = 0;
	int vowels;

	//Opening the file
	ifstream infile;
	infile.open("Constitution_of_the_United_States.txt");

	//Displaying analyzing file 
	cout << "Analyzing file 'Constitution_of_the_United_States.txt'........" << endl;

	//Counting vowels if file is open or displaying a error message if file is not open
	if (infile.is_open())
	{
		while (infile.get(letter))
		{
			if (letter == 'A'|| letter == 'a')
				A++;
			else if (letter == 'E' || letter == 'e')
				E++;
			else if (letter == 'I' || letter == 'i')
				I++;
			else if (letter == 'O' || letter == 'o')
				O++;
			else if (letter == 'U' || letter == 'u')
				U++;
			else if (letter == 'S' || letter == 's')
				S++;
			else if (letter == 'T' || letter == 't')
				T++;
			else if (letter == 'D' || letter == 'd')
				D++;
		}
		//Getting total of all vowels from file
		vowels = A + E + I + O + U;
		//Displaying the results
		cout << "\nThe number of A's:..........................................." << A << endl;
		cout << "The number of E's:..........................................." << E << endl;
		cout << "The number of I's:..........................................." << I << endl;
		cout << "The number of O's:..........................................." << O << endl;
		cout << "The number of U's:..........................................." << U << endl;
		cout << "The number of S's:..........................................." << S << endl;
		cout << "The number of T's:..........................................." << T << endl;
		cout << "The number of D's:..........................................." << D << endl;
		cout << "The vowel count is:.........................................." << vowels << endl;
	}
	else
	{
		cout << "Could not open file\n";
	}
	infile.close();
	return 0;
}

