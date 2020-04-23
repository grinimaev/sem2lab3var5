#include <iostream>
using namespace std;
#include"product.h"
#include"fruit.h"
#include"milks.h"
#include"grocery.h"
int main()
{
    product p1; // Показываю, что класс абстрактный
    fruit f1("banana",123,"egypt"),f2;
    milks m1("cheese",321,13,3000),m2;
    grocery g1("bread",321),g2;
    f1.print();
    f1=f2;
    f1.print();
    m1.print();
    m1=m2;
    m1.print();
    g1.print();
    g1=g2;
    g1.print();
    return 0;
}
