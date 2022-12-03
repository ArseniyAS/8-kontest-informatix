using namespace std;
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    //Проверьте, является ли двумерный массив симметричным относительно главной диагонали. 
    //Главная диагональ — та, которая идёт из левого верхнего угла двумерного массива в правый нижний.
    int n;
    int s = 0;
    cin >> n;
    vector<vector<int>>a(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i][j] != a[j][i])
            {
                s = 1;
              
            }

        }
    }
    if (s == 0)
    {
        cout << "yes";
    }
    if (s == 1)
    {
        cout << "no";
    }
}


