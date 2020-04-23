using namespace std;
#include"milks.h"

milks::milks():milks("None",0,0,0) {}

milks::milks(const milks& f) : milks(f.get_name(),f.get_price(),f.get_fatness(),f.get_volume()) {}

milks::milks(const string name,const int price,const int fatness, const int volume) : product(name,price)
{
    if(!set_fatness(fatness))
{
    set_fatness(0);
}
    if(!set_volume(volume))
{
    set_volume(0);
}
}

bool milks::set_fatness(const int fatness)
{
    if (fatness<0 || fatness>100)
    {
        return false;
    }
        this->fatness=fatness;
        return true;
}

bool milks::set_volume(const int volume)
{
    if (volume<0)
    {
        return false;
    }
        this->volume=volume;
        return true;
}

const int milks::get_fatness() const
{
    return this->fatness;
}

const int milks::get_volume() const
{
    return this->volume;
}

void milks::print() const
{
    cout<<"Name: "<<get_name()<<" Price: "<<get_price()<<" Fatness: "<<get_fatness()<<" Volume: "<<get_volume()<<endl;
}

milks& milks::operator= (milks& f)
{
 set_name(f.get_name());
if(!set_price(f.get_price()))
{
    set_price(0);
}
    if(!set_fatness(f.get_fatness()))
{
    set_fatness(0);
}
    if(!set_volume(f.get_volume()))
{
    set_volume(0);
}
}
