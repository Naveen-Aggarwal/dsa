/*
C(n, k) 
    = n! / (n-k)! * k!
    = [n * (n-1) *....* 1]  / [ ( (n-k) * (n-k-1) * .... * 1) * 
                            ( k * (k-1) * .... * 1 ) ]
After simplifying, we get
  C(n, k) 
     = [n * (n-1) * .... * (n-k+1)] / [k * (k-1) * .... * 1]

     Notice , k value in Numerator : 0->k-1 and in Denominator : 1->k 

Also, C(n, k) = C(n, n-k)  
// r can be changed to n-r if r > n-r 

*/

// Program to calculate C(n, k)
 
#include <bits/stdc++.h>
using namespace std;
 
// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
    int res = 1;
 
    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;
 
    // Calculate value of
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}
