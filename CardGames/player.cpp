#include "player.h"

void Player::RequestCard() {
	player_hand_.AddCard(new BlackjackCard(10, definitions::blackjack::Suit::kDiamonds));
}

int Player::GetScore() {
	return player_hand_.GetHandValue();
}