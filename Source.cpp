/*Lab.Assignment_B.Green.cpp
Bryce Green
4/23/2021
Version 1.5
The program uses a data structure in order to store four pieces of information about a movie and asks the user to input the information
for two movies and it displays it back to the console.*/

#include <iostream>
#include <string> //needed for getline
using namespace std;


struct MovieData //struct with variables needed for the two movies
{
	string title;
	string director;
	int year;
	int time;
};


int main() 
{
	MovieData Film1; //created a variable out of the struct for the first movie
	MovieData Film2; //created a variable out of the struct for the second movie

	//Welcome Message
	cout << "Welcome to the Film Information Data Base, Pleaes enter the following information for 2 Movies:" << endl;
	cout << endl;

	//Asks the User for the information on the first movie
	cout << "1) What is the title of the first film?: ";
	getline(cin, Film1.title);
	cout << endl;
	cout << "2) Who is the director of this film?: ";
	getline(cin, Film1.director);
	cout << endl;
	cout << "3) What year was this film release?: ";
	cin >> Film1.year;
	cout << endl;
	cout << "4) What is the running time of this film (in minutes)?: ";
	cin >> Film1.time;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << endl << endl;

	//Asks the User for the information on the second movie
	cout << "1) What is the title of the second film?: ";
	getline(cin, Film2.title);
	cout << endl;
	cout << "2) Who is the director of this film?: ";
	getline(cin, Film2.director);
	cout << endl;
	cout << "3) What year was this film release?: ";
	cin >> Film2.year;
	cout << endl;
	cout << "4) What is the running time of this film (in minutes)?: ";
	cin >> Film2.time;
	cout << endl << endl;

	//Outputs the information given in two sentences
	cout << "The film " << Film1.title << " directed by " << Film1.director << " released in " << Film1.year << " and has a running time of " << Film1.time << " minutes." << endl;
	cout << "The film " << Film2.title << " directed by " << Film2.director << " released in " << Film2.year << " and has a running time of " << Film2.time << " minutes." << endl << endl << endl << endl;
}

