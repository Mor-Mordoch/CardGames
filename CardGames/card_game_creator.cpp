#include "card_game_creator.h"

std::unique_ptr<CardGame> CardGameCreator::FactoryMethod(definitions::general::GameType game_type) const
{
	switch (game_type)
	{
	case definitions::general::GameType::kBlackjack:
		std::cout << "Blackjack game was chosen\n";
		return std::make_unique<Blackjack>();
	}
}