#pragma once
#include "Player.h"
#include "Dealer.h"
#include <ctime>

class Game {
private:
	Deck d1;
	Player p1;
	Dealer dl1;
public:
	void play(){
		p1.play(d1);
		if (p1.canContinue()) {
			Dealer dl1;
			dl1.play(d1);
			if (dl1.canContinue()) {
				if (p1.getScore() == dl1.getScore()) {
					std::cout << "Draw" << std::endl;
				}
				else if (p1.getScore() > dl1.getScore()) {
					std::cout << "You win!" << std::endl;
				}
				else if (p1.getScore() < dl1.getScore()) {
					std::cout << "Dealer win!" << std::endl;
				}
			}
		}
	}
};
