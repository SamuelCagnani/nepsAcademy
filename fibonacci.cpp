#include <iostream>

using namespace std;

int main() {

    int N, atual = 1, proximo = 1;

    cin >> N;

    if(N == 1 || N == 2) {
        cout << "1" << endl;
        return 0;
    }

    for(int i = 1; i < N; i++) {
        proximo += atual;
        atual = proximo - atual;
    } 

    cout << proximo << endl;

    return 0;
}