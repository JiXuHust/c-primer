#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
using namespace std;
class Sales_data
{
private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;

public:
    double avg_price() const;
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &rhs);
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &iem);
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

istream &read(istream &is, Sales_data &item)
{
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold
       << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif