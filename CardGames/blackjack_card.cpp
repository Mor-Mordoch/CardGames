#include "blackjack_card.h"

BlackjackCard::BlackjackCard(int value, Suit suit, bool is_available) : Card(value, is_available), suit_{ suit } {
}

//BlackjackCard::BlackjackCard(CardValue value, Suit suit) {
//}

int BlackjackCard::GetValue() {
	return value_;
}

bool BlackjackCard::IsAvailable() {
	return is_available_;
}

void BlackjackCard::PrintCard() {
	std::cout << value_;
	switch (suit_) {
	case Suit::kClubs:
		std::cout << "C";
		break;
	case Suit::kDiamonds:
		std::cout << "D";
		break;
	case Suit::kHeart:
		std::cout << "H";
		break;
	case Suit::kSpades:
		std::cout << "S";
		break;
	default:
		std::cout << "Error!";
	}
	std::cout << std::endl;
}