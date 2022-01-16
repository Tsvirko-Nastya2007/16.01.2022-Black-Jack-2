#pragma once
#include"Hand.h"
#include"Deck.h"

class Dealer :public Hand {
public:
	Dealer():Hand(){}
	void play(Deck& deck) {
		
		do {
			addCard(deck.pop());
			printHand();
			getTotal();
			std::cout << getScore() << std::endl;
			/*if (getScore() > 21) {
				std::cout << "Dealer lose!" << std::endl;
				return;
			}*/
			if (getScore() == 21) {
				std::cout << "Dealer win!" << std::endl;
				return;
			}
		} while (m_score < 17);
	}
};