#pragma once
#include "hand.h"
#include "blackjack_card.h"

class BlackjackHand : public Hand
{
public:
	BlackjackHand();
	void AddCard(Card* card) override;
	int GetHandValue() const;
private:
	int hand_value_;
};

