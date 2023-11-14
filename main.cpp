#include <iostream>

using namespace std;

int main()
{
    cout << "This is to use your score to determine your grade." << endl;

    int score;

    cout << "Enter your score: " << endl;
    cin >> score;

    if (score >= 70 && score <= 100) {
        cout << "Your score is " << score << " and your grade is A!" << endl;
    } else if (score >= 50 && score <= 69) {
        cout << "Your score is " << score << " and your grade is B!" << endl;
    } else if (score >= 45 && score <= 49) {
        cout << "Your score is " << score << " and your grade is C!" << endl;
    } else if (score >= 40 && score <= 44) {
        cout << "Your score is " << score << " and your grade is D!" << endl;
    } else if (score >= 0 && score <= 39) {
        cout << "Your score is " << score << " and your grade is E." << endl << "You failed!" << endl << "Better luck next time" << endl;
    } else {
        cout << score << " is not a valid score. Please enter a score between 0 and 100." << endl;
    }
    return 0;
}
