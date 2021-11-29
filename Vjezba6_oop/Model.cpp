#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Model.hpp"
using namespace std;

HangmanModel::HangmanModel() {
	int randSelected, numberOfMovies, numOflettersInMovie;
	ifstream infile("movie.txt");
	vector<string> myVec;
	string letter;

	while (getline(infile, movie))
	{
		myVec.push_back(movie);
	}

	numberOfMovies = myVec.size();
	randSelected = rand() % numberOfMovies + 1;

	movie = myVec[randSelected];
	numOflettersInMovie = movie.size();

	for (int i = 0; i < numOflettersInMovie; i++) {
		if (ispunct(movie[i])) {
			movie.erase(movie.begin() + i);
		}
		else {
			movie[i] = toupper(movie[i]);
		}
	}

	for (int i = 0; i < numOflettersInMovie; i++) {
		if (isspace(movie[i])) {
			guessMovie.push_back(' ');
		}
		else {
			guessMovie.push_back('_');
		}

	}

	for (char alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		usedLetters.push_back(alphabet);
		usedLetters.push_back(' ');
	}
}
string HangmanModel::getMovie() const {
	return movie;
}
string HangmanModel::getGuessMovie() const {
	return guessMovie;
}
string HangmanModel::getUsedLetters() const {
	return usedLetters;
}
int HangmanModel::getLives() {
	return lives;
}
bool HangmanModel::getInGame() {
	return inGame;
}
void HangmanModel::setGuessMovie(const string& guessMovie) {
	this->guessMovie = guessMovie;
}
void HangmanModel::setUsedLetters(const string& usedLetters) {
	this->usedLetters = usedLetters;
}
void HangmanModel::setLives() {
	lives--;
}
void HangmanModel::setInGame(const bool inGame) {
	this->inGame = inGame;
}