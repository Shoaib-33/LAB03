#include <iostream>
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
class Counter
{
  private:
  int x=0,count=0;

  public:


      void setIncrementStep(int step_val)
      {
        x=step_val;
      }

    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=x;
    }
    void resetCount()
    {
        count=0;
    }

};

int main()

{
    Counter a;
    a.setIncrementStep(2);
    a.increment();
    cout<<a.getCount();
    a.resetCount();
    cout<<a.getCount();
    a.setIncrementStep(5);
    a.increment();
    cout<<a.getCount();


}
