#include <iostream>

using namespace std;

int main() {

    int A;

    cin >> A;

    if(A == 0) {
        cout << "nulo" << endl;
        return 0;
    }

    if(A < 0) cout << "negativo" << endl;
    else cout << "positivo" << endl;

    return 0;
}