#include "blackjack_deck.h"

BlackjackDeck::BlackjackDeck() {
	deck_.reserve(definitions::blackjack::kDeckSize);
}