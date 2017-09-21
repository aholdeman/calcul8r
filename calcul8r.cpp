#include <iostream>
#include <stdlib.h>

using namespace std;
int calculation(bool correct) {
	int answer, a, b;
	char operation;
	cout << "Enter a calculation (ex: 4 + 9, 209 - 3)" << endl;
	cin >> a >> operation >> b;

	switch(operation) {
		case '+':
			answer = a+b;
			break;

		case '-':
			answer = a - b;
			break;

		case '/':
			answer = a/b;
			break;

		case '*':
			answer = a*b;
			break;
	}

	if(correct) {
		return answer;
	}
	else {
		answer = answer + rand() % 30+1;
		return answer;
	}
}
int main(int argc, char* argv[]) {
	bool finished = false;
	while(!finished){
		finished = true;
		bool correct;
		int userNum, randNum, answer;
		cout << "Welcome to the totally real calculator." << endl;
		cout << "Choose a number between 1 and 50." << endl;
		cin >> userNum;
		if(userNum < 1 || userNum > 50) {
			cout << "hey yo that's not in the range. follow the rules next time." << endl;
			break;
		}
		randNum = rand() % 50+1;
		if(randNum == userNum){
			correct = true;
		}
		else{
			correct = false;
		}
		answer = calculation(correct);
		cout <<  answer << endl;
		char again;
		cout << "Calculate another? Enter T/F" << endl;
		cin >> again;
		if(again == 'T' ) {
			finished = false;		
		}
		else{
			finished = true;
			cout << "BYE" << endl;
		}
	}
}

