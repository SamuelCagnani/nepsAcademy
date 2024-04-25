#include <iostream>

using namespace std;

int main() {

    int X;

    cin >> X;

    for(int i = 1; i <= X / 2; i++) {
        if(X % i == 0) cout << i << " ";
    }

    cout << X << endl;

    return 0;
}