#ifndef TEST_H
#define TEST_H

#include <iostream>
#include<string>
#include<vector>

using namespace std;

/*exercise 7.2 and 7.3
struct Sales_data {
    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;//类内部的变量成员不允许在定义时初始化，必须使用构造函数
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
*/

/*exercise 7.4, 7.5, 7.9
struct Person {
    string get_name() const { return name; }
    string get_address() const { return address; }

    string name;
    string address;
};
Person show_info(const Person&);
istream &read(istream&, const Person&);
ostream &print(std::ostream&, Person&);
*/

/*exercise 7.11, 12, 13, 14, 21
struct Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);

public:
    Sales_data() = default;
    Sales_data(const string &s): bookNo(s) { }
    Sales_data(const string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(istream &);

    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
private:
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
*/

/*exercise 7.15, 19, 22
class Person {
public:
    Person() = default;
    Person(const string &s1, const string &s2): name(s1), address(s2) { }

    string get_name() const { return name; }
    string get_address() const { return address; }
private:
    string name;
    string address;
};
*/

/*exercise 7.23, 24, 27~29 7.32
class Screen
{
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, string contents): height(ht), width(wd),
        contents(ht*wd, ' ') { }
    Screen(pos ht, pos wd, char c): height(ht), width(wd),
    contents(ht*wd, c) { }
    friend class Window_mgr;

    //exercise 7.33
    pos size() const;

    inline Screen &move(pos r, pos c)
    {
        pos row = r * width;
        cursor = row + c;
        return *this;
    }
    inline Screen &set(char c)
    {
        contents[cursor] = c;
        return *this;
    }
    inline Screen &set(pos r, pos col, char ch)
    {
        contents[r*width + col] = ch;
        return *this;
    }
    Screen &display(ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen &display(ostream &os) const
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(ostream &os) const {os << contents;}

    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};
// exercise 7.33
Screen::pos Screen::size() const
{
    return height * width;
}

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

inline
void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}
*/

/*exercise 7.31
class Y;
class X
{
    Y *my_pointer = NULL;
};

class Y
{
    X x;
};
*/

/*exercise 7.35
typedef string Type;
Type initVal();
class Exercise {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};
Exercise::Type Exercise::initVal() {}
Exercise::Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}
*/

/*exercise 7.36
class X {
    int i;
    int j;
public:
    X(int val): j(val), i(j) { }
};
*/

/*exercise 7.38
Sales_data(std::istream &is = std::cin) { read(is, *this); }//将默认实参直接赋予变量即可
*/

/*exercise 7.41
class Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);

public:
    //Sales_data() = default;
    //Sales_data(const string &s): bookNo(s) { }
    Sales_data(const string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(p*n) { }
    //Sales_data(istream &);
    Sales_data(): Sales_data("", 0, 0) {}
    Sales_data(string s): Sales_data(s, 0, 0) {}
    Sales_data(istream &is): Sales_data() { read(is, *this); }

    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
private:
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
*/

/*Page 262
class NoDefault {
public:
    NoDefault(const string&);
};
struct A {
    NoDefault my_mem;
};
//A a;
struct B {
    B() {}
    //NoDefault b_member;
    NoDefault b_member;
};
*/

/*exercise 7.53
class Debug {
public:
    constexpr Debug(bool b = true) : rt(b), io(b), other(b) {}
    constexpr Debug(bool r, bool i, bool o) : rt(r), io(i), other(0) {}
    constexpr bool any() { return rt || io || other; }

    void set_rt(bool b) { rt = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }

private:
    bool rt;    // runtime error
    bool io;    // I/O error
    bool other; // the others
};
*/

/*exercise 7.57
class Account {
public:
    Account(): amount(0.0) { }
    Account(const std::string &s, double amt):
        owner(s), amount(amt) { }

    void calculate() { amount += amount * interestRate; }
    double balance() { return amount; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }

private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = .0225;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();
*/

#endif // TEST_H
