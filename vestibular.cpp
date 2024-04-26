#include <iostream>
#include <string>

using namespace std;

int main() {

    int N, acertos = 0;
    string gabarito, respostas;

    cin >> N;
    cin >> gabarito >> respostas;

    for(int i = 0; i < N; i++) if(gabarito[i] == respostas[i]) acertos++;

    cout << acertos << endl;

    return 0;
}