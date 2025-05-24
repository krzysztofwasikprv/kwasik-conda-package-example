#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numValues = 5;
    string values[numValues] = {
        "Trust",
        "Teamwork",
        "Growth",
        "Innovation",
        "Helpfulness"
    };
    int votes[numValues] = {0};

    int numVoters;
    cout << "Welcome to the SoftServe Values Voting Program!\n";
    cout << "How many people will vote? ";
    cin >> numVoters;
    cin.ignore();

    for (int i = 0; i < numVoters; ++i) {
        cout << "\nVoter #" << (i + 1) << ", choose the most important value:\n";
        for (int j = 0; j < numValues; ++j) {
            cout << j + 1 << ". " << values[j] << endl;
        }
        cout << "Enter the number of your choice: ";
        int choice;
        cin >> choice;
        if (choice >= 1 && choice <= numValues) {
            votes[choice - 1]++;
        } else {
            cout << "Invalid choice. Vote not counted.\n";
        }
    }

    cout << "\nVoting results:\n";
    for (int i = 0; i < numValues; ++i) {
        cout << values[i] << ": " << votes[i] << " votes\n";
    }

    int maxVotes = votes[0];
    int maxIndex = 0;
    for (int i = 1; i < numValues; ++i) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            maxIndex = i;
        }
    }
    cout << "\nThe most important SoftServe value according to the voters is: " << values[maxIndex] << endl;

    return 0;
}
