#include <iostream>

using namespace std;

int main() {

    int N, L, C, aux = 0;

    cin >> N;

    for(int i = 0; i < N; i ++) {
        cin >> L >> C;
        if(L > C) aux += C;
    }

    cout << aux << endl;

    return 0;
}