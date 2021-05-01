#pragma once
#include <iostream>
#include "card_game.h"

/*
 * Concrete Products provide various implementations of the Product interface.
 */
class Blackjack : public CardGame
{
	void StartGame() override;
};