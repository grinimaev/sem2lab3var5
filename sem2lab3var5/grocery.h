#ifndef GROCERY_H_INCLUDED
#define GROCERY_H_INCLUDED
#include"product.h"

class grocery : virtual public product
{
public:
    grocery();
    grocery(const grocery& g);
    grocery(const string name,const int price);
    void print() const;
    grocery& operator= (grocery& g);
};


#endif // GROCERY_H_INCLUDED
