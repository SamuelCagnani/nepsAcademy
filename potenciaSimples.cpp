#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double X, Y;

    cin >> X >> Y;

    cout << fixed << setprecision(4) << pow(X, Y) << endl;

    return 0;
}