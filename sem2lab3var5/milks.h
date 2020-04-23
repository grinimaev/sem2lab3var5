#ifndef MILKS_H_INCLUDED
#define MILKS_H_INCLUDED
#include"product.h"

class milks : virtual public product
{
protected:
    int fatness;
    int volume;
public:
    milks();
    milks(const milks& f);
    milks(const string name,const int price,const int fatness, const int volume);
    bool set_fatness(const int fatness);
    bool set_volume(const int volume);
    const int get_fatness() const;
    const int get_volume() const;
    void print() const;
    milks& operator= (milks& m);
};

#endif // MILKS_H_INCLUDED
