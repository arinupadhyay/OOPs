#include <iostream>
using namespace std;

class Voter {
public:
    int voterID;
    string name;
};

int main() {

    Voter voter1;

    voter1.voterID = 101;
    voter1.name = "Rahul";

    cout << "Voter ID: " << voter1.voterID << endl;
    cout << "Voter Name: " << voter1.name << endl;

    return 0;
}