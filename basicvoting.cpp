#include <iostream>
using namespace std;

int main() {
    int vote;

    cout << "Enter your vote (1 or 2): ";
    cin >> vote;

    if (vote == 1)
        cout << "You voted for Candidate 1";
    else if (vote == 2)
        cout << "You voted for Candidate 2";
    else
        cout << "Invalid vote";

    return 0;
}
