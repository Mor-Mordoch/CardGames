#include "blackjack_deck.h"

BlackjackDeck::BlackjackDeck() {
	deck_.reserve(definitions::blackjack::kDeckSize);
	for (const auto& s : SuitsVector) {
		for (const auto& v : ValuesVector) {
			deck_.push_back(BlackjackCard(v,s));
		}
	}
}

/* Shuffle according to Fisher-Yates algorithm */
/* x = rand() % 30 + 1985 implies that 1985 <= x <= 2014 */
void BlackjackDeck::Shuffle() {
	srand(time(NULL)); // Use a different seed value so that we don't get same result each time we run this program
	int j;
	for (int i = deck_.size() - 1; i >= 1; i--) {
		j = rand() % (i + 1);
		std::swap(deck_[i], deck_[j]);
	}
}

void BlackjackDeck::PrintDeck() {
	for (int i = 0; i < deck_.size(); ++i) {
		deck_[i].PrintCard();
	}
}