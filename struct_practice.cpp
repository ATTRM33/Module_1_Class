//Name: Zach Brown
//Date: 7/10/2024
//CS2 Stucture Practice

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//suit of cards
struct Suit {
	string name;
	int value;
};

// rank of each card
struct Rank {
	string name;
	int value;

};

//each individual card
struct Card {
	Suit suit;
	Rank rank;
	bool isFaceUp = true;
};


int main() {
	{
		srand(time(0));

		//defining suits of each card
		Suit suits[4] = {
			{"hearts", 4},
			{"diamonds",3},
			{"clubs", 2},
			{"spades",1}
		};

		//defining ranks of each card
		Rank ranks[13] = {
			{"Ace", 1},
			{"Two",2},
			{"Three",3},
			{"Four",4},
			{"Five",5},
			{"Six",6},
			{"Seven",7},
			{"Eight",8},
			{"Nine",9},
			{"Ten",10},
			{"Jack",10},
			{"Queen",10},
			{"King",10}
		};

		//defining deck
		Card deck[52];

		// for loop to go throught each suit and rank and assign it to the deck
		for (int i = 0; i < 52; i++) {
			Card tempCard = { suits[i / 13], ranks[i % 13], true };
			deck[i] = tempCard;
		}

		//for (Card card : deck) {
			//cout << "The " << card.rank.name << " of " << card.suit.name << endl;
		//}

		//random card from the deck
		for (int i = 0; i < 5; i++) {
			Card card = deck[rand() % 52];
			cout << "The " << card.rank.name << " of " << card.suit.name << endl;
		}
	}
}