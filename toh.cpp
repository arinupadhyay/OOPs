#include <iostream>
using namespace std;

void moveDisk(char from, char to, int disk)
{
    cout << "Move disk " << disk << " from " << from << " to " << to << endl;
}

void towerOfHanoi(int n)
{
    int totalMoves = (1 << n);

    char source = 'A';
    char auxiliary = 'B';
    char destination = 'C';

    if (n % 2 == 0)
    {
        char temp = destination;
        destination = auxiliary;
        auxiliary = temp;
    }

    for (int i = 1; i < totalMoves; i++)
    {
        int disk = 1;
        int x = i;

        while (x % 2 == 0)
        {
            x = x / 2;
            disk++;
        }

        if (i % 3 == 1)
            moveDisk(source, destination, disk);
        else if (i % 3 == 2)
            moveDisk(source, auxiliary, disk);
        else
            moveDisk(auxiliary, destination, disk);
    }
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    towerOfHanoi(n);

    return 0;
}3