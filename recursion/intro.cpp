//recursion
//1.base case
//2.recursive call

// eg find the value of n!
#include <bits/stdc++.h>
using namespace std;

int fact (int num)
{
    if(num == 0 || num == 1 ) return 1; // base condition
    return num*fact(num-1); // recursive call
}
int main()
{
    
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
//it is the simple program to find the value of factorial 
 