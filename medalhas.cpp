#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {

    array<pair <int, int>, 3> numeros;

    for(int i = 0; i < 3; i++) {
        cin >> numeros[i].first;
        numeros[i].second = i + 1;
    }

    sort(numeros.begin(), numeros.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.first < b.first;
    });

    for(const auto& p : numeros) cout << p.second << endl;

    return 0;
}