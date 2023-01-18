#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(long long n, long long m, vector<long long> &a)
{
   int myWins = 0;

   vector<long long> alter(n + 1);
   alter = a;

   sort(alter.begin(), alter.end());

   for (long long i = 1; i < alter.size(); i++)
   {
      if (m >= alter[i])
      {
         myWins++;
         m -= alter[i];
      }
      else
      {
         break;
      }
   }

   if (myWins == n)
      cout << 1 << endl;
   else if (m + alter[myWins] >= a[myWins + 1])
      cout << n - myWins << endl;
   else
      cout << n + 1 - myWins << endl;
}

int main()
{
   int T;
   cin >> T;
   while (T--)
   {
      long long n, m;
      cin >> n >> m;
      vector<long long> a(n + 1);
      for (int i = 1; i <= n; i++)
      {
         cin >> a[i];
      }
      solve(n, m, a);
   }
   return 0;
}