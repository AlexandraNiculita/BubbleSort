#include <iostream>
using namespace std;
int v[1000]; int a;
void bubblesort() {
    bool sorted = false;
    while (sorted == false) {
        sorted = true;
        for (int i = 0; i < a - 1; i ++) {
            if (v[i] > v[i + 1]) {
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                sorted = false;
            }
        }
    }
}
int main () {
    cin >> a;
    for (int i = 0; i < a; i ++)
        cin >> v[i];
    bubblesort();
    for (int i = 0; i < a; i ++)
        cout << v[i] << ' ';
}