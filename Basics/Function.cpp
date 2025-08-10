#include <bits/stdc++.h>
using namespace std;
int sumTwo(int a, int b)
{
   return a + b;
}

int main()
{
   int a, b;
   cout << "Enter a: ";
   cin >> a;
   cout << "Enter b: ";
   cin >> b;
   int sum = sumTwo(a, b);
   cout << "The sum is: " << sum;
   return 0;
}