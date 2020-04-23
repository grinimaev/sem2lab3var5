using namespace std;
#include"grocery.h"

  grocery::grocery() : grocery("None",0){}

    grocery::grocery(const grocery& g) : grocery(g.get_name(),g.get_price()){}

    grocery::grocery(const string name,const int price) : product(name,price) {}


void grocery::print() const
{
    cout<<"Name: "<<get_name()<<" Price: "<<get_price()<</*" Weight: "<<get_weight()<<*/endl;
}

grocery& grocery::operator= (grocery& p)
{
 set_name(p.get_name());
if(!set_price(p.get_price()))
{
    set_price(0);
}
}
