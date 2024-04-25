#include <iostream>

using namespace std;

int main() {

    int N, A = 0, aux = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> A;
        aux += A;
        if(aux >= 1000000) {
            cout << ++i << endl;
            return 0;
        }
    }

    return 0;
}