#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        engine();
        cout << "car started:  \t" << endl;
    }

private:
    void engine() {
        cout << "engine started:   \t" << endl;
    }
};

int main() {
    Car c;

    c.start();

    return 0;
}
