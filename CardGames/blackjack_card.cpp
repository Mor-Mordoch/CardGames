#include "blackjack_card.h"

BlackjackCard::BlackjackCard(int value, bool is_available) : Card(value, is_available) {

}

int BlackjackCard::GetValue() {
	return value_;
}

bool BlackjackCard::IsAvailable() {
	return is_available_;
}