#pragma once
#include "card.h"
#include <vector>

class Hand
{
public:
	virtual void AddCard(Card* card) = 0;
protected:
	std::vector<Card*> hand_;
};

