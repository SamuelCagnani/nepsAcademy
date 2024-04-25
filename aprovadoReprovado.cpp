#include <iostream>

using namespace std;

int main() {

    float A, B;

    cin >> A >> B;
    
    if((A + B) / 2 < 4) cout << "Reprovado" << endl;
    else if((A + B) / 2 < 7) cout << "Recuperacao" << endl;
    else cout << "Aprovado" << endl;

    return 0;
}