#include <iostream>

using namespace std;

int main() {

    int A, B, C;

    cin >> A >> B >> C;

    if(A + B + C == 0 || A + B + C == 3) cout << "*" << endl;
    else if(B == C) cout << "A" << endl;
    else if(A == C) cout << "B" << endl;
    else cout << "C" << endl;

    return 0;
}