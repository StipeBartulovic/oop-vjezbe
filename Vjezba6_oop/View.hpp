#pragma once

#include "Model.hpp";
#include <string>
class HangmanView {
public:
	void displayCurrentProgress(HangmanModel& model);
	void displayUsedLetters(HangmanModel& model);
	void displayHangman(HangmanModel& model);
};