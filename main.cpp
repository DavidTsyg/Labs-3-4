#include <iostream>

using namespace std;

int main() {
    int a_previous, a_new, n, i, a;
    a_previous = 0;
    a_new = 1;
    i = 2;
    cout << "Введите номер элемента" << endl;
    cin >> n ;
    if (i <= n)
    {
        while (i <= n) {
            a = a_previous + a_new;
            a_previous = a_new;
            a_new = a;
            i++;
        }
    }
    else a = 1;
    cout << endl << a;
    return 0;
}