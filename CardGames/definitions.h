#pragma once
#include <vector>
#include <iostream>

namespace definitions {

namespace general {
	enum class GameType { kBlackjack = 1, kTaki, kPoker };
	inline void PrintMainHeadline(int* chosen)
	{
		std::cout << "                                  ---------------------------------\n";
		std::cout << "                                  Welcome to the Card Games center!\n";
		std::cout << "                                  ---------------------------------\n";
		std::cout << "Please choose the desired game to be played : \n1.Blackjack\n2.Poker\n";
		std::cin >> *chosen;
	}
}

namespace blackjack {
	const int kDeckSize = 52;
	enum class Suit {kDiamonds, kSpades, kHeart, kClubs};
	enum class CardValue {kAceMin = 1, kTwo, kThree, kFour, kFive, kSix, kSeven, kEight, kNine,
		kTen, kJack = kTen, kQueen = kTen, kKing = kTen, kAceMax};
	const std::vector<Suit> SuitsVector{ Suit::kDiamonds, Suit::kSpades, Suit::kHeart, Suit::kClubs };
	const std::vector<CardValue> ValuesVector{ CardValue::kAceMin, CardValue::kTwo, CardValue::kThree,
		CardValue::kFour, CardValue::kFive, CardValue::kSix, CardValue::kSeven, CardValue::kEight,
		CardValue::kNine, CardValue::kTen, CardValue::kJack, CardValue::kQueen, CardValue::kKing };
}
}