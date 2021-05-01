#include <iostream>
#include "card_game_creator.h"
#include "definitions.h"
#include "blackjack.h"
#include <memory>

using game_type = definitions::general::GameType;

int main()
{
	std::unique_ptr<CardGameCreator> game = std::make_unique<CardGameCreator>();
	std::unique_ptr<CardGame> specific_game;
	int chosen_game;
	definitions::general::PrintMainHeadline(&chosen_game);
	switch (static_cast<game_type>(chosen_game))
	{
	case game_type::kBlackjack:
		specific_game = game->FactoryMethod(game_type::kBlackjack);
	}
	specific_game->StartGame();
	return 0;
}