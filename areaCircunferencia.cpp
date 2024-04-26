#include <iostream>
#include <iomanip>

using namespace std;

#define pi 3.1416

int main() {

    double R;

    cin >> R;

    cout << fixed << setprecision(2) << pi * (R * R) << endl;

    return 0;
}