#include <iostream>

int main()
{
  std::string name;
  std::string dateOfBirth;
  std::string favoriteFood;
  char confirmFavoriteFood;

  std::cout << "What's your name?: ";
  std::getline(std::cin, name);

  std::cout << "What's your birthday?: ";
  std::cin >> dateOfBirth;
  
  std::cout << "Your favorite food?: ";
  std::getline(std::cin >> std::ws, favoriteFood);
  std::cout << '\n';

  std::cout << "Hi! " << name << "\n";
  std::cout << "Nice to know you!\n";
  std::cout << "Your birthday is " << dateOfBirth << ". Right?\n";
  std::cout << "Awesome!\n";
  std::cout << "Is your favorite food " << favoriteFood << "? (S/N): ";
  std::cin >> confirmFavoriteFood;

  if (confirmFavoriteFood == 'S') {
    std::cout << "Nice! I like it too.\n";
  } else {
    std::cout << "Well, you must've spelled it wrong.\n";
  }

  std::cout << "See ya!\n";

  return 0;
}