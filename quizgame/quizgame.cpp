#include <iostream>

int main() {
  std::cout << "************* QUIZ GAME *************\n";
  std::cout << " \n";

  std::string questions[] = {"1. What year was C++ created?: ",
                             "2. Who invented C++?: ",
                             "3. What is C++ predecessor?",
                             "4. Is the Earth flat?: "};
  
  std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                              {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                              {"A. C", "B. C+", "C. C--", "D. B++"},
                              {"A. yes", "B. Yes", "C. yeS", "D. What's Earth?"}};

  char answerKey[] = {'C', 'B', 'A', 'D'};

  int size = sizeof(questions)/sizeof(questions[0]);
  char guess;
  int score = 0;

  for (int i = 0; i < size; i++) {
    std::cout << questions[i] << '\n';
    for (std::string option : options[i]) {
      std::cout << " " << option << '\n';
    }

    std::cout << " \n";
    std::cout << "R: ";
    std::cin >> guess;

    if (toupper(guess) == answerKey[i]) {
      std::cout << "Correct answer!\n";
      score += 1;
    } else {
      std::cout << "U dumb.\n";
      std::cout << "The right answer is option " << answerKey[i] << ".\n";
    }

    std::cout << " \n";
    std::cout << "-------------------------------------\n";
  }

  double scorePercentage = (score/(double)size)*100;

  std::cout << "**************************\n";
  std::cout << "*         RESULTS        *\n";
  std::cout << "**************************\n";
  std::cout << "CORRECT ANSWERS: " << score << '\n';
  std::cout << "# OF QUESTIONS: " << size << '\n';
  std::cout << "SCORE: " << scorePercentage << "%\n";

  return 0;
}