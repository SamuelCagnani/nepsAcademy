#include <iostream>

using namespace std;

int main() {

    double A, B;

    cin >> A >> B;

    if(((A * 2) + (B * 3)) / 5 < 3) cout << "Reprovado" << endl;
    else if(((A * 2) + (B * 3)) / 5 < 7) cout << "Final" << endl;
    else cout << "Aprovado" << endl;

    return 0;
}