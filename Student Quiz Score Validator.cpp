// Student Quiz Score Validator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class QuizResult
{
private:
    int score ;

public:
    QuizResult()
    {
        score = 0;
    }
    void set_score(int new_score)
    {
        
        if (new_score >= 0 && new_score <= 100)
        {
            score = new_score;

        }
        else
        {
            cout << "Invalid Score!" << endl;
        }
    }

    int get_score()
    {
         return score; 

    }
};



int main()
{
    QuizResult quiz;

    int input_score;

    cout << "Enter Score: ";
    cin >> input_score;

    quiz.set_score(input_score);

    cout << "Final Score: " << quiz.get_score() << endl;

    return 0;
   
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
