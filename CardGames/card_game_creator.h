#pragma once
#include <memory>
#include "definitions.h"
#include "card_game.h"
#include "blackjack.h"

/*
 * The Creator class declares the factory method that is supposed to return an object of a Product class
 * The Creator's subclasses usually provide the implementation of this method. In this implemenation the Creator does that.
 */
class CardGameCreator
{
public:
	virtual std::unique_ptr<CardGame> FactoryMethod(definitions::general::GameType game_type) const;
};