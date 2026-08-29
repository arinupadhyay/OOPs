#include <iostream>
using namespace std;

class Voter {
public:
    int voterid;
    string name;
};

int main() {

    Voter v1;

    v1.voterid = 101;
    v1.name = "Rahul";

    cout << "Voter ID: " << v1.voterid << endl;
    cout << "Name: " << v1.name << endl;

    return 0;
}
