#pragma once
#include"Hand.h"
#include"Deck.h"

class Player :public Hand {
public:
	Player():Hand(){}
	void play(Deck& deck) {
		char choice;
		do {
			addCard(deck.pop());
			printHand();
			getTotal();
			std::cout << getScore() << std::endl;
			if (getScore() > 21) {
				std::cout << "You lose!" << std::endl;
				return;
			}
			/*if (getScore() == 21) {
				std::cout << "You win!" << std::endl;
				return;
			}*/
			std::cout << "Another card? (y/n)" << std::endl;
			std::cin >> choice;
			while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				std::cout << "Write y/n" << std::endl;
				std::cin >> choice;
			} 
		} while (choice == 'y' || choice == 'Y');
	}
};
