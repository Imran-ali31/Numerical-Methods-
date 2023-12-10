#include<bits/stdc++.h>
#define f(x,y) (y*y-x*x)/(y*y+x*x)
using namespace std;
int main()
{
    float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
    int i, n;
    cout.precision(6);
    cout.setf(ios::fixed);
    cout<<"Enter Initial Condition"<< endl;
    cout<<"x0 = ";    cin>> x0;
    cout<<"y0 = ";    cin >> y0;
    cout<<"Enter calculation point xn = ";
    cin>>xn;
    cout<<"Enter number of steps: ";
    cin>> n;

    h = (xn-x0)/n;

    cout<<"\nx0\t\ty0\t\tyn\n";
    cout<<"-----------------------------------\n";
    for(i=0; i < n; i++){
        k1 = h * (f(x0, y0));
        k2 = h * (f((x0+h), (y0+k1)));
        k = (k1+k2)/2;
        yn = y0 + k;
        cout<<x0<<setw(15),cout<<y0<<setw(15),cout<< yn, cout<<endl;
        x0 = x0+h;
        y0 = yn;
        }

    cout<<"\nValue of y at x = "<< xn<< " is " << yn;

    return 0;
}
