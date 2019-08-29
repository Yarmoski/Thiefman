#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

#include "thief.h"


int main() {

	std::vector<std::string> words = { "purse", "thief", "robbery", "bank", "bandit", "criminal", "burglar", 
		"pickpocket", "steal", "pirate", "money", "ransack", "plunder", "take", "abduct", "burglarize"};
	srand(time(NULL));
	int index = rand() % 16;


	intro();
	std::string word = words[index];
	std::string answer = "";
	for (int i = 0; i < word.size(); i++) {
		answer += "_";
	}
	int misses = 0;

	std::vector<char> incorrect;
	bool guess = false;
	char letter;

	while (answer != word && misses < 7) {
		display_misses(misses);
		display_status(incorrect, answer);
		std::cout << "\nPlease enter your guess: ";
		std::cin >> letter;
		for (int i = 0;i < word.size();i++) {
			if (letter == word[i]) {
				answer[i] = letter;
				guess = true;
			}
		}
		if (guess == true) {
			std::cout << std::string(100, '\n');
			std::cout << "Correct!\n\n\n";
		}
		else {
			std::cout << std::string(100, '\n');
			std::cout << "Incorrect! Thiefman grows closer to his goal.\n\n\n";
			incorrect.push_back(letter);
			misses++;
		}
		guess = false;
	}


	end_game(word, answer);



}
