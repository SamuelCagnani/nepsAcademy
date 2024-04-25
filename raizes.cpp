#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int N;
    double numero;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> numero;
        cout << fixed << setprecision(4) << sqrt(numero) << endl;
    }

    return 0;
}