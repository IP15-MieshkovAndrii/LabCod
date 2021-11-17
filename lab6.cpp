#include <iostream>
#include <cmath>
using namespace std;

long long fact(long long f){
    long long FACT=1;
    int m;
    for(m=1; m <= f; m++){
        FACT*=m;
    }
    return FACT;
}

long long C(int n0, int m0){
    long long c;
    c = fact(n0)/(fact(n0-m0)*fact(m0));
    return c;
}

int main ()
{
    int n, m;
    long long Cnm;
    cout << "n = ";
    cin >> n;
    
    cout << "m = ";
    cin >> m;
    
    if(n<0||m<0){
        cout << "n and m must be positive." << endl;
    }
    
    else if(((m==0)&&(n>0))||((m==n)&&(n>=0))) {
        Cnm = 1;
        cout << "Cnm = " << Cnm << endl;
    }
    
    else if((m>n)&&(n>=0)){
        Cnm = 0;
        cout << "Cnm = " << Cnm << endl;
    }
    
    else{
        Cnm = C(n-1,m-1) + C(n-1,m);
        cout << "Cnm = " << Cnm << endl;
    }
}
