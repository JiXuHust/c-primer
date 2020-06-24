#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    string address;

public:
    Person() = default;
    Person(const string &na, const string &add) : name(na), address(add) {}
    Person(istream &is);

public:
    string getName() const { return name; }
    string getAddress() const { return address; }
    friend istream &read(istream &is, Person &person);
    friend ostream &print(ostream &os, const Person &person);
};

Person::Person(istream &is) { read(is, *this); }

istream &read(istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

ostream &print(ostream &os, const Person &person)
{
    os << person.name << " " << person.address << endl;
    return os;
}