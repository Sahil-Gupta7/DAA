#include <stdio.h>
int solve(int symb[], char oper[], int n)
{
    int F[n][n], T[n][n];

    for (int i = 0; i < n; i++)
    {
        if (symb[i] == 1)
        {
            T[i][i] = 1;
            F[i][i] = 0;
        }
        else
        {
            T[i][i] = 0;
            F[i][i] = 1;
        }
    }

    for (int gap = 1; gap < n; ++gap)
    {
        for (int i = 0, j = gap; j < n; ++i, ++j)
        {
            T[i][j] = F[i][j] = 0;
            for (int g = 0; g < gap; g++)
            {
                int k = i + g;

                int tik = T[i][k] + F[i][k];
                int tkj = T[k + 1][j] + F[k + 1][j];

                if (oper[k] == '&')
                {
                    T[i][j] += T[i][k] * T[k + 1][j];
                    F[i][j] += (tik * tkj - T[i][k] * T[k + 1][j]);
                }
                if (oper[k] == '|')
                {
                    F[i][j] += F[i][k] * F[k + 1][j];
                    T[i][j] += (tik * tkj - F[i][k] * F[k + 1][j]);
                }
                if (oper[k] == '^')
                {
                    T[i][j] += F[i][k] * T[k + 1][j] + T[i][k] * F[k + 1][j];
                    F[i][j] += T[i][k] * T[k + 1][j] + F[i][k] * F[k + 1][j];
                }
            }
        }
    }
    return T[0][n - 1];
}

int main()
{
    int symbols[3] = {1, 0, 1};
    char operators[] = "^&";
    int n = 3;
    printf("%d",solve(symbols, operators, n));
    return 0;
}