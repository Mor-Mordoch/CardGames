#pragma once
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include "deck.h"
#include "blackjack_card.h"

using namespace definitions::blackjack;

class BlackjackDeck : public Deck
{
public:
	BlackjackDeck();
	void Shuffle();
	void HandOutCard();
	int CardsLeft() const;
	void PrintDeck();
private:
	std::vector<BlackjackCard> deck_;
};

