#pragma once
#include <string>
#include <fstream>
class HangmanModel {
	std::string movie;
	std::string guessMovie;
	std::string usedLetters;
	int lives = 8;
	bool inGame;
public:
	HangmanModel();
	~HangmanModel() {};
	std::string getMovie() const;
	std::string getGuessMovie() const;
	std::string getUsedLetters() const;
	int getLives();
	bool getInGame();
	void setGuessMovie(const std::string& guessMovie);
	void setUsedLetters(const std::string& usedLetters);
	void setLives();
	void setInGame(const bool inGame);
};
