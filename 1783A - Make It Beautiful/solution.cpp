#include <iostream>
using namespace std;

bool check(int n, int a[])
{
   int sum = a[0];
   bool isUgly = true;
   for (int i = 1; i < n; i++)
   {
      if (sum == a[i])
         isUgly = false;
      else
      {
         sum += a[i];
      }
   }
   return isUgly;
}

void randomize(int n, int a[])
{
   for (int i = n - 1; i > 0; i--)
   {
      int j = rand() % (i + 1);
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
   }
}
void solution(int n, int a[])
{
   int x;
   x = a[0];
   for (int i = 1; i < n; i++)
      if (x != a[i])
         break;
      else
      {
         if (i == n - 1)
            x = 0;
      }
   if (x == 0)
   {
      cout << "NO" << endl;
   }
   else
   {

      while (!check(n, a))
      {
         randomize(n, a);
      }

      printf("YES\n");
      for (int i = 0; i < n; i++)
      {
         cout << a[i] << " ";
      }
      cout << endl;
   }
}

int32_t main()
{
   int T, n;
   cin >> T;
   while (T--)
   {
      cin >> n;
      int a[n];
      for (int j = 0; j < n; j++)
      {
         cin >> a[j];
      }
      solution(n, a);
   }

   // return 0;
}
