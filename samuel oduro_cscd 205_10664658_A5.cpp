#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int IdNumber;
	int Age;
	int score;
	char grade;
	char gender;
	
	
	cout <<"Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> Age;
	cout << "Gender: ";
	cin >> gender;
	cout << "Score: ";
	cin >> score;
	cout << " Grade "<< grade ;
	
	if ( score <= 100, score >= 80)
	cout << 'A' <<endl;
	else if (score <= 79, score >= 70)
	cout << 'B' << grade <<endl;
	else if ( score <= 69, score >= 60)
	cout << 'C' << grade <<endl;
	else if ( score <= 59, score >= 50)
	cout << 'D' << grade <<endl;
	else if ( score <= 49, score >= 40)
	cout << 'E' << grade <<endl;
	else if ( score <= 39, score >= 0)
	cout << 'F' << grade <<endl;
	return 0;
	}
