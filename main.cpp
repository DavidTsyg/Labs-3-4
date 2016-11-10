
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
    srand(time(0));
    int n, m, sum;
    n = rand() %5 + 1;
    m = rand() %5 + 1;
    sum = 0;
    float **ptrarray = new float* [n];
    for (int count = 0; count < n; count++)
        ptrarray[count] = new float [m];
    for (int count_row = 0; count_row < n; count_row++)
        for (int count_column = 0; count_column < m; count_column++)
            ptrarray[count_row][count_column] = rand() % 10 + 1;
    for (int count_row = 0; count_row < n; count_row++)
    {
        for (int count_column = 0; count_column < m; count_column++)
            cout << setw(m) <<setprecision(n) << ptrarray[count_row][count_column] << "   ";
        cout << endl;
    }
    for (int count_row = 0; count_row < n; count_row++)
        for (int count_column = 0; count_column < m; count_column++)
            sum = sum + ptrarray[count_row][count_column];
     cout << "Сумма " << sum;
    for (int count = 0; count < n; count++)
        delete []ptrarray[count];
    return 0;
}
