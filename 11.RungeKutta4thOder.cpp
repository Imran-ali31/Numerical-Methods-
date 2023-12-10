#include<bits/stdc++.h>
#define f(x,y) (y*y-x*x)/(y*y+x*x)
using namespace std;
int main()
{
    double x0,y0,yn,xn,k1,k2,k3,k4,k;
    int n;
    cout.precision(6);
    cout.setf(ios::fixed);
    cout<<"Enter Initial Value (x0 & y0) : ";
    cin>>x0>>y0;
    cout<<"Enter Calculation point : " ; cin>>xn;
    cout<<"Enter number of step : ";     cin>>n;

    double h= (xn-x0)/n;
    cout<<"\nx0\t\ty0\t\tyn\n";
    cout<<"------------------------\n";
    for(int i=0; i<n; i++){
        k1= h*f(x0,y0);
        k2 = h*f(x0 + h/2.0 ,y0+k1/2.0);
        k3 = h*f(x0 + h/2.0 ,y0+k2/2.0);
        k4= h*f(x0+h, y0+k3);
        k= (k1+2*k2+2*k3+k4)/6.0;
        yn= y0+k;
        cout<<x0<<setw(15),cout<<y0<<setw(15),cout<< yn, cout<<endl;
        y0=yn;
        x0=x0+h;
    }
    cout<<"\nValue of y at x = "<< xn<< " is " << yn;
    return 0;
}
