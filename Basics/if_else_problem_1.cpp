#include <bits/stdc++.h>
using namespace std;
int main()
{
   int marks;
   cout << "Enter the marks: ";
   cin >> marks;
   if (marks < 33)
   {
      cout << "Fail";
   }
   else if (marks < 39)
   {
      cout << "D";
   }
   else if (marks < 49)
   {
      cout << "C";
   }
   else if (marks < 59)
   {
      cout << "B";
   }
   else if (marks < 69)
   {
      cout << "A-";
   }
   else if (marks <79)
   {
      cout << "A";
   }
   else
      cout << "A+";
   return 0;
}