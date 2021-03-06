/*Solution : We will be traversing the Matrix in Spiral form with the help of 5 variables which includes iterator, starting and ending index of row and columns.
k - starting row index
m - ending row index
l - starting column index
n - ending column index
i - iterator
Pseudo Code*/
void print_spiral(A[][], m, n)
{
    k = 0, l = 0
    while (k < m && l < n)
    {
        /* Print the first row from the remaining rows */
        for (i=l to n-1)
            print(A[k][i])
        k++

        /* Print the last column from the remaining columns */
        for (i = k to i = m-1 )
            print(A[i][n-1])
        n--

        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
                print(A[m-1][i])
            m--
        }

        /* Print the first column from the remaining columns */
        if (l < n) :
        {
            for (i = m-1; i >= k; --i)
                print(A[i][l])
            l++
        }
    }
}

If you are facing any issue on this page. Please let us know.
*/
