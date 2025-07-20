/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

struct Rectangle
{
    int l, h;
};

int area(Rectangle r)
{
    return r.l * r.h;
}

void init(struct Rectangle *r, int l, int h)
{
    r->l = l;
    r->h = h;
}

void change(struct Rectangle *r, int new_l)
{
    r->l = new_l;
}

int main()
{
    Rectangle rec;
    init(&rec, 10, 10);
    cout<<"Area: "<<area(rec)<<endl;
    change(&rec, 15);
    cout<<"Area: "<<area(rec);
    
    return 0;
}
