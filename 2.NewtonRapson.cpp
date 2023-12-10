#include<bits/stdc++.h>
using namespace std;
double f(double x){
	return x*x*x - x*x + 2;
}
double df(double x)
{
    return 3*x*x - 2*x;
}
int main(){
	double x,tol;
        cout<<"Enter initial value of x \n";
        cin>>x;
     cout<<"Enter tolarance of error \n";
     cin>>tol;
    double h = f(x) / df(x);
    while (abs(h) >= tol){
        h = f(x)/df(x);
        x = x - h;
    }
    cout << "The value of the root is : " << x;
	return 0;
    }

