
> 1st method A Binomial coefficient based function to find nth catalan number in O(n) time 
```
unsigned long int catalan(unsigned int n) 
{ 
    // Calculate value of 2nCn 
    unsigned long int c = binomialCoeff(2 * n, n);  // Func defination at 
  
    // return 2nCn/(n+1) 
    return c / (n + 1); 
}
```
Defination of [binomialCoeff( )](   https://github.com/Naveen-Aggarwal/dsa/blob/7606572b4509d22077010b4283508b16f006c4b5/Binomial-Cofficient-nCr.cpp)

> 2-method
```
/*
For example: N = 5

Initially set cat_=1 then, print cat_  ,

then, iterate from i = 1 to i < 5

for i = 1; cat_ = cat_ * (4*1-2)=1*2=2
cat_ = cat_ / (i+1)=2/2 = 1      

For i = 2; cat_ = cat_ * (4*2-2)=1*6=6
cat_ = cat_ / (i+1)=6/3 =2  

For i = 3 :-      cat_ = cat_ * (4*3-2)=2*10=20
cat_ = cat_ / (i+1)=20/4 =5   

For i = 4 :-      cat_ = cat_ * (4*4-2)=5*14=70
 cat_ = cat_ / (i+1)=70/5 =14  
 */

#include <boost/multiprecision/cpp_int.hpp> 
#include <bits/stdc++.h>
using boost::multiprecision::cpp_int; 
using namespace std; 
  
// Function to print the number 
void catalan(int n) 
{ 
    cpp_int cat_ = 1; 
  
    // For the first number 
    cout << cat_ << " "; // C(0) 
  
    // Iterate till N 
    for (cpp_int i = 1; i < n; i++)  
    { 
        // Calculate the number 
        // and print it 
        cat_ *= (4 * i - 2); 
        cat_ /= (i + 1); 
        cout << cat_ << " "; 
    } 
} 
```
