//                                                                        Number Pattern 1
//                                                                        ****************
/*
Problem:

Print the following pattern
Pattern for N = 4
1
23
345
4567

Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/


//********************************************************************************************************************************************************************
//Solution:
//using FOR loop
//**************


#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin >> N;
   for(int i=1;i<=N;i++)
   {
      for(int j=i;j<2*i;j++)
      {
         cout << j;
      }
      cout << "\n";
   }
}

*********************************************************************************************************************************************************************

//using WHILE loop
//****************

/*
#include<iostream>
using namespace std;
int main()
{
   int N;       //No Of Rows
   cin >> N;
   int i=1;
   int val=1;
   while(i<=N)
   {
      int j=1;
      val = i;
      while(j<=i)
      {
         cout << val;
         val++;
         j++;
      }
      cout << "\n";
      i++;
   }
}
*/

********************************************************************************************************************************************************************















