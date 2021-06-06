#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define in insert
#define mp make_pair
#define GCD(a,b) __gcd(a,b);
using namespace std;

class RationalNumber
{
private:
    int Numerator=0,Denomirator=0;

public:
    void assign(int numerator,int denominator)
    {
        if(numerator==0)
        {
            cout<<"ERROR"<<endl;
        }
        else
        {
            Numerator=numerator;
        }
        Denomirator=denominator;
      //  cout<<Numerator<<' '<<Denomirator<<endl;
    }
    void print()
    {
        cout<<Numerator<<"/"<<Denomirator<<endl;
    }

    double convert()
    {   double p,q,x;
        p=Numerator;
        q=Denomirator;
        x=double (p/q);
        return x;
    }
    void invert()
    {    int p;
         p=Numerator;
        Numerator=Denomirator;
        Denomirator=p;
    }

};



int main()
{
    RationalNumber a;
    a.assign(50,20);
    a.print();
    cout<<a.convert()<<endl;
   a.invert();
   a.print();
   cout<<a.convert()<<endl;
}



