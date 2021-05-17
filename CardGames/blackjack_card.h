#pragma once
#include "card.h"
#include "definitions.h"

using namespace definitions::blackjack;

class BlackjackCard : public Card
{
private:
	Suit suit_;
public:
	BlackjackCard(int value, Suit suit, bool is_available = true);
	BlackjackCard(CardValue value, Suit suit, bool is_available = true);
	// over load of << fucntion to print card
	int  GetValue   () override;
	bool IsAvailable() override;
	void PrintCard  () override;
	Suit GetSuit();
};

