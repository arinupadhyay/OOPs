#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        engine();
        cout << "Car started" << endl;
    }

private:
    void engine() {
        cout << "Engine started" << endl;
    }
};

int main() {
    Car c;

    c.start();

    return 0;
}