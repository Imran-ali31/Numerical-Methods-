#include<bits/stdc++.h>
using namespace std;
double f(double x){
	return x*x*x - x*x + 2;
}
int main(){
	double a,b,tol;
	while(1){
        cout<<"Enter approximate intervals \n";
        cin>>a>>b;
        if (f(a) * f(b) >= 0){
            cout << "You have not assumed right a and b\n";
            continue;
        }
        break;
	 }
     cout<<"Enter tolarance of error \n";
     cin>>tol;
    double c = a;
    int i=1;
    cout<<"Before any iteration a and b "<<a<<" and "<<b<<endl;
    cout<<"Before any iteration f(a) and f(b) "<<f(a)<<" and "<<f(b)<<endl;
    while ((b-a) >= tol){
        c = (a+b)/2;
        if (f(c) == 0.0)break;
        else if (f(c)*f(a) < 0)b = c;
        else
            a = c;
        cout<<"After " <<i<<" th iteration a and b "<<a<<" and "<<b<<endl;
        cout<<setw(20)<<" f(a) and f(b) "<<a<<" and "<<b<<endl;
        }
	cout << "The value of root is : " << c;
	return 0;
    }
