#include <bits/stdc++.h>
using namespace std;
int something(int a)
{
   a += 10;
   return a;
}

int main()
{
   int n = 10;
   int sum = something(n);
   cout << sum << endl;
   cout << "The number is : " << n;
}