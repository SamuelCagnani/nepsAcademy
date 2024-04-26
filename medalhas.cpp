#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if(n1 < n2 && n1 < n3) {
        if(n2 < n3) cout << "1" << endl << "2" << endl << "3" << endl;
        else cout << "1" << endl << "3" << endl << "2" << endl;
    }
    else if(n2 < n1 && n2 < n3) {
        if(n1 < n3) cout << "2" << endl << "1" << endl << "3" << endl;
        else cout << "2" << endl << "3" << endl << "1" << endl;
    }
    else {
        if(n1 < n2) cout << "3" << endl << "1" << endl << "2" << endl;
        else cout << "3" << endl << "2" << endl << "1" << endl;
    }

    return 0;
}