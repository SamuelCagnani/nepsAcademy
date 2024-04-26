#include <iostream>

using namespace std;

int main() {

    int N, valor, referencia, cont = 0, maxRep = 0;

    cin >> N;
    cin >> valor;
    referencia = valor;
    cont++;

    for(int i = 1; i < N; i++) {
        cin >> valor;
        if(valor == referencia) {
            cont++;
        } else {
            referencia = valor;
            cont = 1;
        }
        if(maxRep < cont) maxRep = cont;
    }

    cout << maxRep << endl;

    return 0;
}