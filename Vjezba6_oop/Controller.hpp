#pragma once
#include "Model.hpp"
#include "View.hpp"
#include <iostream>
class HangmanController {
public:
	HangmanController() {};
	void userEntry(HangmanModel& model);
	void checkLetter(char letter, HangmanModel& model);
	void updateLives(HangmanModel& model);
	bool checkIfGameIsOver(HangmanModel& model);
};