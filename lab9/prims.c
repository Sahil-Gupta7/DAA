
#include <stdio.h>
int a, b, u, v, n, i, j, ne = 1;
int visited[10] = {0}, min, mincost = 0, cost[10][10];
void main()
{
    printf("\nEnter the number of nodes:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    /* Taking the input of the graph. */
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }
    visited[1] = 1;
    printf("\n");
    /* Finding the minimum cost adjacent vertex. */
    while (ne < n)
    {
        for (i = 1, min = 999; i <= n; i++)
        {
            for (j = 1; j <= n; j++) // Checking minimum cost adjacent vertex
            {
                if (cost[i][j] < min)
                    if (visited[i] != 0)
                    {
                        min = cost[i][j];
                        a = u = i;
                        b = v = j;
                    }
            }
        }
        /* This is the part of the code that is actually adding the edges to the minimum spanning tree. */
        if (visited[u] == 0 || visited[v] == 0)
        {
            printf("\n Edge: %d <-> %d cost:%d", a, b, min);
            mincost += min;
            visited[b] = 1;
        }
        /* Setting the cost of the edge to be 999, so that it is not considered in the next iteration. */
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\n Minimun cost=%d", mincost);
}