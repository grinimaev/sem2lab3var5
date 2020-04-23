#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <iostream>
#include<string>

class product
{
protected:
    string name;
    int price;
//    int weight;
public:
    product();
    product(const product& p);
    product(const string name,const int price/*,const int weight*/);
    void set_name(const string name);
    bool set_price(const int price);
//    bool set_weight(const int weight);
    const string get_name() const;
    const int get_price() const;
//    const int get_weight() const;
   virtual void print() const = 0;
    product& operator= (product& p);
};

#endif // PRODUCT_H_INCLUDED
