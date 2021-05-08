#include "blackjack_hand.h"

BlackjackHand::BlackjackHand() : hand_value_{ 0 } {

}

void BlackjackHand::AddCard(Card* card) {
	std::cout << "Adding card: ";
	card->PrintCard();
	hand_value_ += card->GetValue();
}

int BlackjackHand::GetHandValue() const {
	return hand_value_;
}