#include "Model.hpp"
#include "Controller.hpp"
#include "View.hpp"
#include <iostream>
#include <string>
using namespace std;

void HangmanView::displayCurrentProgress(HangmanModel& model) {
    if (model.getGuessMovie() == model.getMovie()) {
        cout << endl << "YOU LIVE!!" << endl;
    }
    else if (model.getLives() == 0) {
        cout << endl << endl << "YOU HANG!!" << endl;
    }
    else {
        cout << endl << "Enter letter:  ";
    }
}

void HangmanView::displayUsedLetters(HangmanModel& model) {
    cout << "Movie: " << model.getGuessMovie() << endl << endl;
    cout << "Available letters:" << endl;
    cout << model.getUsedLetters();
    cout << endl;
}

void HangmanView::displayHangman(HangmanModel& model) {
    switch (model.getLives()) {
    case 8:
        cout << "________" << endl;
        cout << "| /" << endl;
        cout << "|/" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 7:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 6:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 5:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|    |" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 4:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 3:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|\\" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 2:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|\\" << endl;
        cout << "|    |" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 1:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|\\" << endl;
        cout << "|    |" << endl;
        cout << "|   /" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 0:

        cout << " ░██████╗░░█████╗░███╗░░░███╗███████╗  ░█████╗░██╗░░░██╗███████╗██████╗░" << endl;
        cout << "  ██╔════╝░██╔══██╗████╗░████║██╔════╝  ██╔══██╗██║░░░██║██╔════╝██╔══██╗" << endl;
        cout << "  ██║░░██╗░███████║██╔████╔██║█████╗░░  ██║░░██║╚██╗░██╔╝█████╗░░██████╔╝" << endl;
        cout << "  ██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░░  ██║░░██║░╚████╔╝░██╔══╝░░██╔══██╗" << endl;
        cout << "  ╚██████╔╝██║░░██║██║░╚═╝░██║███████╗  ╚█████╔╝░░╚██╔╝░░███████╗██║░░██║" << endl;
        cout << "  ░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝  ░╚════╝░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝" << endl;
        break;
    }
}
