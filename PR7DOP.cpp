#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void task1079()
{
    int v, g, arr[5][20];
    cout << "skolko stolbtsov sdvigat'?\n";
    int sToMove;
    cin >> sToMove;

    cout << "Standart: \n";
    for (v = 0; v < 5; v++)
    {
        for (g = 0; g < 20; g++) {
            arr[v][g] = v + g;
            cout << arr[v][g] << "\t";
        }
        cout << endl;
    }
    cout << "Resultat:\n";

    for (v = 0; v < 5; v++) {
        for (g = 0; g < sToMove; g++) {
            int temp = arr[v][g + (20 - sToMove)];
            arr[v][g + (20 - sToMove)] = arr[v][g];
            arr[v][g] = temp;
        }
    }
    for (v = 0; v < 5; v++) {
        for (g = 0; g < 20; g++) {
            cout << arr[v][g] << "\t";
        }
        cout << "\n";
    }
}

int main()
{
    task1079();

}