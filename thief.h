#pragma once
#include <vector>
#include <string>

void display_misses(int misses);
void intro();
void end_game(std::string codeword, std::string answer);
void display_status(std::vector<char> incorrect, std::string answer);