using namespace std;
#include"product.h"

product::product() : product("None",0/*,0*/){};

product::product(const product& p) : product(p.name,p.price/*,p.weight*/) {};

product::product(const string name,const int price/*,const int weight*/)
{
set_name(name);
if(!set_price(price))
{
    set_price(0);
}
//if(!set_weight(weight))
//{
//    set_weight(0);
//}
}

void product::set_name(const string name )
{
    this->name=name;
}

bool product::set_price (const int price )
{
    if (price<0)
    {
        return false;
    }
        this->price=price;
        return true;
}

//bool product::set_weight (const int weight )
//{
//    if (weight<0)
//    {
//        return false;
//    }
//        this->weight=weight;
//        return true;
//}

const string product::get_name() const
{
    return this->name;
}

const int product::get_price() const
{
    return this->price;
}

//const int product::get_weight() const
//{
//    return this->weight;
//}

void product::print() const
{
    cout<<"Name: "<<get_name()<<" Price: "<<get_price()<</*" Weight: "<<get_weight()<<*/endl;
}

product& product::operator= (product& p)
{
 set_name(p.get_name());
if(!set_price(p.get_price()))
{
    set_price(0);
}
//if(!set_weight(p.get_weight()))
//{
//    set_weight(0);
//}
}


