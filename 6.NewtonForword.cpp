#include<bits/stdc++.h>
using namespace std;
int main(){
    double x[100],y[100][100];
    cout<<"Enter number of data \n";
    int n;   cin>>n;
    for(int i=0; i<n;i++){
        cout<<"x["<<i<<"]= "; cin>>x[i];
        cout<<"y["<<i<<"]= "; cin>>y[i][0];
    }
    double xx; cout<<"Enter  value of x "; cin>>xx;
    for(int i=1; i<n;i++){
        for(int j=0; j<n-i;j++)y[j][i]=y[j+1][i-1]-y[j][i-1];
    }
    cout<<"Newton forward different's table \n";
    for(int i=0;i<n;i++){
        cout<<x[i]<<'\t';
        for(int j=0;j<n-i;j++){
            cout<<y[i][j]<<'\t';
        }
        cout<<endl;
    }
    double u= (xx-x[0])/(x[1]-x[0]),ans=y[0][0],p,q=1;
    p=u;
    //cout<<ans<<endl;
    for(int i=1; i<n;++i){
            //cout<<ans<<endl;
        ans+=((u*y[0][i])/q);
        q=q*(i+1);
        u=(u*(p-i));
    }
     cout<<"Value of Y in point "<<xx<<"= "<<ans<<endl;
    return 0;

}
