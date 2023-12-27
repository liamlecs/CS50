#include <iostream>
#include <string>
using namespace std;

int POINTS[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };

int compute_score(string word) {
    int length = word.length();
    int score = 0;
    for (int i = 0; i < length; i++)
    {
        word[i] = tolower(word[i]);
        if (isalpha(word[i]) != 0)
        {
            char a = word[i];
            score += POINTS[a - 97];
        }
    }
    return score;
}
int main() {
	string word1, word2;
	cout << "Player 1: ";
	getline(cin, word1);
	cout << "Player 2: ";
	getline(cin, word2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        cout << "Player 1 wins!" << endl;
    }
    else if (score1 < score2)
    {
        cout << "Player 2 wins!" << endl;
    }
    else
        cout << "Ties!" << endl;
    return 0;
}