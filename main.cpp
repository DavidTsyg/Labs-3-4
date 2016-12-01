#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    int n, m, sum;
    cout << "Введите число строк и столбцов" << endl;
    cin >> n >> m;
    sum = 0;
    cout << endl;
    float **ptrarray = new float* [n];
    for (int count = 0; count < n; count++)
        ptrarray[count] = new float [m];
    for (int count_row = 0; count_row < n; count_row++)
        for (int count_column = 0; count_column < m; count_column++)
        {
            cout << "Введите значение элемента " << count_row + 1 << " " << count_column + 1 << " ";
            cin >> ptrarray[count_row][count_column];
        }
    for (int count_row = 0; count_row < n; count_row++)
    {
        for (int count_column = 0; count_column < m; count_column++)
            cout << setw(m) << ptrarray[count_row][count_column] << "   ";
        cout << endl;
        for (int count_column = 0; count_column < m; count_column++)
            sum = sum + ptrarray[count_row][count_column];
    }
    cout << "Сумма всех элементов равна " << sum;
    for (int count = 0; count < n; count++)
        delete []ptrarray[count];
    return 0;
}