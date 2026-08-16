#include <iostream>
using namespace std;

class Voter {
public:
    int voterID;
    string name;
};

int main() {

    Voter v1;

    v1.voterID = 101;
    v1.name = "Rahul";

    cout << "Voter ID: " << v1.voterID << endl;
    cout << "Name: " << v1.name << endl;

    return 0;
}
