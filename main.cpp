#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int n, k;
    k = 0;
    n = rand() %10 + 1;
    int *m_array = new int[n];
    for (int i = 0; i < n; i++)
    {
        m_array[i] = rand() %10 + 1;
        cout << m_array[i] << " ";
    }
    for (int i = 0; i <= (n - 1)/2; i++)
    {
        if (m_array[i] == m_array[n-1-i])
            k = k;
        else k = k+1;
    }
    if (k == 0)
        cout << "Палиндром";
    else cout << "Не палиндром";
    delete [] m_array;
    return 0;
}