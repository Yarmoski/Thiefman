#include <iostream>
#include <vector>

void intro() {
	std::cout << "==========================================================\n";
	std::cout << "Thiefman: An original and unique game never created before\n";
	std::cout << "==========================================================\n";
	std::cout << "\nInstructions: Stop the thief by guessing the word!";
}

void end_game(std::string word, std::string answer) {

	std::cout << std::string(100, '\n');

	if (answer == word) {
		std::cout << "\n====================================================================================";
		std::cout << "\nCongratulations! You stopped the thief and got promoted to the Secretary of Defence!";
		std::cout << "\n====================================================================================";
	}
	else {
		std::cout << "\n=========================================================================";
		std::cout << "\nThe thief got away. You will now be publically shamed in the town square.";
		std::cout << "\n=========================================================================";
	}

	std::cout << "\n\nThe word was: " << word << "\n\n\n\n";
	std::cin >> "Press enter to exit.";
}


void display_status(std::vector<char> incorrect, std::string answer) {
	std::cout << "Incorrect Guesses:";
	for (int i = 0;i < incorrect.size();i++) {
		std::cout << incorrect[i] << " ";
	}
	std::cout << "\nWord:";
	for (int i = 0;i < answer.size();i++) {
		std::cout << answer[i] << " ";
	}
}

void display_misses(int misses) {

	if (misses == 0 || misses == 1) {

		std::cout << "                                              \n";
		std::cout << "            ________________________         \n";
		std::cout << "    0      |  Haha! I am thiefman!  |        \n";
		std::cout << "  --|--/\\  |________________________|         \n";
		std::cout << "    |  |_|                                    \n";
		std::cout << "   / \\                                       \n";
		std::cout << "                                              \n";

	}
	else if (misses == 2) {

		std::cout << "                                              \n";
		std::cout << "                                              \n";
		std::cout << "           0                                  \n";
		std::cout << "         --|--/\\                             \n";
		std::cout << "           |  |_|                             \n";
		std::cout << "          / \\                                \n";
		std::cout << "                                              \n";

	}
	else if (misses == 3) {

		std::cout << "                                              \n";
		std::cout << "                                ____________ \n";
		std::cout << "                       0       | whew, need |\n";
		std::cout << "                     --|--/\\   |   a break. |\n";
		std::cout << "                       |  |_|   |____________|\n";
		std::cout << "                      / \\                    \n";
		std::cout << "                                              \n";

	}
	else if (misses == 4) {

		std::cout << "                                              \n";
		std::cout << "                                              \n";
		std::cout << "                                  0           \n";
		std::cout << "                                --|--/\\      \n";
		std::cout << "                                  |  |_|      \n";
		std::cout << "                                 / \\         \n";
		std::cout << "                                              \n";

	}
	else if (misses == 5) {

		std::cout << "                                              \n";
		std::cout << "                                              \n";
		std::cout << "                                       0      \n";
		std::cout << "                                     --|--/\\ \n";
		std::cout << "                                       |  |_| \n";
		std::cout << "                                      / \\    \n";
		std::cout << "                                              \n";

	}
	else if (misses == 6) {

		std::cout << "                                              \n";
		std::cout << "                                              \n";
		std::cout << "                                             0\n";
		std::cout << "                                           --|\n";
		std::cout << "                                             |\n";
		std::cout << "                                            / \n";
		std::cout << "                                              \n";

	}

}