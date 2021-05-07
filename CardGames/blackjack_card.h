#pragma once
#include "card.h"

class BlackjackCard : public Card
{
public:
	BlackjackCard(int value, bool is_available = true);
	int GetValue() override;
	bool IsAvailable() override;
};

