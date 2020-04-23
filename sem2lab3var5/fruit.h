#ifndef FRUIT_H_INCLUDED
#define FRUIT_H_INCLUDED
#include"product.h"

class fruit : virtual public product
{
protected:
    string country;
public:
    fruit();
    fruit(const fruit& f);
    fruit(const string name,const int price,const string country);
    void set_country(const string country);
    const string get_country() const;
    void print() const;
    fruit& operator= (fruit& f);
};

#endif // FRUIT_H_INCLUDED
