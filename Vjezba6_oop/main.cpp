#include "Model.hpp"
#include "Controller.hpp"
#include "View.hpp"

#include<iostream>
#include <random>
using namespace std;
int main()
{
	srand(time(NULL));
	HangmanModel hangman;
	HangmanController controller;
	HangmanView view;
	while (controller.checkIfGameIsOver(hangman)) {
		view.displayHangman(hangman);
		cout << endl;
		view.displayUsedLetters(hangman);
		view.displayCurrentProgress(hangman);
		controller.userEntry(hangman);
		controller.updateLives(hangman);
		system("cls");
	}
	view.displayHangman(hangman);
	cout << endl;
	view.displayUsedLetters(hangman);
	view.displayCurrentProgress(hangman);
	system("pause");
}
