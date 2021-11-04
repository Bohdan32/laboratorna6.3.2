#include <iostream>    

using namespace std;
template <typename T1, typename T2, typename T3 >
void diapazon(T1* a, T2 i, T3 n) {
    if (i < n) {
        a[i] = 0 + rand() % (20);
        cout << a[i] << " ";
        diapazon(a, i + 1, n);
    }
}
int main() {
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    int i = 0;
    diapazon(a, i, n);

    return 0;
}