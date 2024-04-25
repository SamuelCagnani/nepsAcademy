#include <iostream>

using namespace std;

int main() {

    int N, numbers = 0, aux = 0;

    cin >> N;

    if(N % 2 == 0) cout << "0" << endl;
    else cout << "1" << endl;

    for(int i = 0; i < N; i++) {
        cin >> numbers;
        if(numbers == 2) aux += numbers;
    }

    if((aux / 2) % 2 == 0) cout << "0" << endl;
    else cout << "1" << endl;

    return 0;
}