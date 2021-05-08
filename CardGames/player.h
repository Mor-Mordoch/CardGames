#pragma once
#include "blackjack_hand.h"

class Player
{
public:
	void RequestCard();
	int  GetScore();
private:
	BlackjackHand player_hand_;
};

