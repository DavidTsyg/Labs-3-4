#include <iostream>

using namespace std;

int main() {
    int n;
    int a_previous = 0;
    int a_new = 1;
    int a = 1;
    cout << "Введите номер элемента" << endl;
    cin >> n ;
    for (unsigned int i = 2;  i <= n; i++) {

        a = a_previous + a_new;
        a_previous = a_new;
        a_new = a;

    }
    cout << endl << a;
    return 0;
}
