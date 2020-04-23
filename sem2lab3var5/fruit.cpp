using namespace std;
#include"fruit.h"

fruit::fruit():fruit("None",0,"None") {}

fruit::fruit(const fruit& f) : fruit(f.get_name(),f.get_price(),f.get_country()) {}

fruit::fruit (const string name,const int price,const string country) : product(name,price)
{
    set_country(country);
}

void fruit::set_country(const string country )
{
    this->country=country;
}
const string fruit::get_country() const
{
    return this->country;
}

void fruit::print() const
{
    cout<<"Name: "<<get_name()<<" Price: "<<get_price()<<" Country: "<<get_country()<<endl;
}

fruit& fruit::operator= (fruit& f)
{
 set_name(f.get_name());
if(!set_price(f.get_price()))
{
    set_price(0);
}
set_country(f.get_country());
}
