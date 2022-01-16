#include "Card.h"
#include "Hand.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include "Game.h"
#include <ctime>
using namespace std;

int main() {
	
	srand(time(0));
	rand();
	Game game;
	game.play();
	return 0;
}