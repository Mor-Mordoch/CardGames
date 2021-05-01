#pragma once
#include <iostream>

/*
 * The Product interface declares the operations that all concrete products must implement.
 */
class CardGame
{
public:
	virtual void StartGame() = 0;
};