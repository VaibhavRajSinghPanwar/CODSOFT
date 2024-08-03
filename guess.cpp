#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int number = std::rand() % 100 + 1;
    int guess;
    std::cout << "Guess the number (between 1 and 100): ";
    while (true) {
        std::cin >> guess;
        if (guess < number)
            std::cout << "Too low. Try again: ";
        else if (guess > number)
            std::cout << "Too high. Try again: ";
        else {
            std::cout << "Congratulations! You guessed the number.\n";
            break;
        }
    }
    return 0;
}
