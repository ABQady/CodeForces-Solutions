// Biggest difference matrix for a 4x4 matrix has 16 (n*n) unique differnces ranging from 1 to 15
// to obtain the matrix start with a min of 1 and a maximum of 16 and arrange the values like the following diagram
//
// -> min max min max ˇ|
// ˇ| max min max min <-
// -> min max min max ˇ|
//    max min max min <-
//
// the resulting matrix:
//    1  16  2  15
//    13  4  14  3
//    5  12   6 11
//    9   8  10  7

#include <iostream>
using namespace std;

void printArray(int n, int **a)
{
   for (int r = 0; r < n; r++)
   {
      for (int c = 0; c < n; c++)
         cout << a[r][c] << " ";
      cout << endl;
   }
}

void fillArray(int n, int **a)
{
   int min = 1, max = n * n, counter = 0;
   for (int r = 0; r < n; r++)
   {
      if ((r + 1) % 2)
      {
         for (int c = 0; c < n; c++)
         {
            if ((counter + 1) % 2)
            {
               a[r][c] = min;
               min++;
               counter++;
            }
            else
            {
               a[r][c] = max;
               max--;
               counter++;
            }
         }
      }
      else
      {
         for (int c = n - 1; c >= 0; c--)
         {
            if ((counter + 1) % 2)
            {
               a[r][c] = min;
               min++;
               counter++;
            }
            else
            {
               a[r][c] = max;
               max--;
               counter++;
            }
         }
      }
   }
}

void solve(int n)
{
   int **a;
   a = new int *[n];
   for (int i = 0; i < n; i++)
      a[i] = new int[n];

   fillArray(n, a);
   printArray(n, a);
}

int main()
{
   int T, n;
   cin >> T;
   while (T--)
   {
      cin >> n;
      solve(n);
   }

   return 0;
}