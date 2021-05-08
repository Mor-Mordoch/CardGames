#pragma once
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
private:
	std::vector<BlackjackCard> deck_;
};

