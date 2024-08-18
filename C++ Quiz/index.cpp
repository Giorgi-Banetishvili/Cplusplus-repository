#include <iostream>

int main()
{

    std::string questions[] = {"1. What year was C++ created? \n  ",
                               "2. Who created C++?  \n",
                               "3. What is the predecessor of C++?  \n",
                               "4. Is the moon flat\n"};

    std::string options[][4] = {{"A.1969", "B.1975", "C.1985", "D.2000"},
                                {"A. Guido van rosam", "B. Bjarne stroustrup ", "C. Mark zuckerburg ", "D. John cena "},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. yes", "B. no", "C. maybe", "D. sometimes"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(std::string);
    int score;
    char guess;

    for (int i = 0; i < size; i++)
    {

        std::cout << questions[i];

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << "\n";
        }
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout << "Correct!!! \n";
            score++;
        }
        else
        {
            std::cout << "Wrong!!! \n";
            std::cout << "The coreect answer was:  " << answerKey[i] << "\n";
        }
    }

    std::cout << "RESULT" << "  out of: " << size << " questions you got " << score << " right!!!" << "\n";
    std::cout << "SCORE=  " << (score / (double)size) * 100 << "%";

    return 0;
}