/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

//void fun(int *A)
//{
//    cout<<sizeof(A)<<endl;
//}

int * fun2(int n)
{
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return p;
}

int main()
{
    int *A = fun2(5);
    A[0] = 5;
    cout<<A[0]<<endl;
}
