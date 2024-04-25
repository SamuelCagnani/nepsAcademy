#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, tamanho, contador = 0;

    cin >> N;  
    vector <int> sequencia(N);

    for(int i = 0; i < N; i++) cin >> sequencia[i];
    
    for(int i = 0; i < N - 2; i++) if(sequencia[i] == 1 && sequencia[i+1] == 0 && sequencia[i+2] == 0) contador++;

    cout << contador << endl;

    return 0;
}