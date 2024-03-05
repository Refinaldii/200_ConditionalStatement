

#include <iostream>
using namespace std;
int main()
{
    int nBilangan;
    string status;

    srand(time(0));
    nBilangan = rand() % 6;

    if (nBilangan % 2 == 0) {
        status = "Genap";

    }
    else {
        status = "Ganjil";
    }
    cout << "Bilangan awal " << nBilangan << endl;
    cout << "termasuk bilangan " << status << endl;
}

