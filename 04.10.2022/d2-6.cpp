#include <stdio.h>
 
const int M = 4;
const int N = 4;
 
void printDiagonalSums(int mat[M][N])
{
    int principal = 0, secondary = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
                        if (i == j)
                principal += mat[i][j];
 
           
            if ((i + j) == (N - 1))
                secondary += mat[i][j];
        }
    }
 
    printf("%s", "Principal Diagonal:");
    printf("%d\n", principal);
    printf("%s", "Secondary Diagonal:");
    printf("%d\n", secondary);
}
 
int main()
{
    int a[][4] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {1, 2, 3, 4},
                  {5, 6, 7, 8}};
    printDiagonalSums(a);
    return 0;
}  
