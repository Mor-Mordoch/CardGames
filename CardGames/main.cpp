#include <iostream>
#include "card_game_creator.h"
#include "definitions.h"
#include "blackjack.h"
#include "blackjack_deck.h"
#include "blackjack_hand.h"
#include "player.h"
#include <memory>

using game_type = definitions::general::GameType;

int main()
{
	BlackjackCard bj1(8, definitions::blackjack::Suit::kClubs, true);
	BlackjackCard bj2(3, definitions::blackjack::Suit::kHeart, true);

	bj1.PrintCard();
	bj2.PrintCard();

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

	Player p1;
	p1.RequestCard();
	p1.RequestCard();
	std::cout << p1.GetScore() << std::endl;
	return 0;
}