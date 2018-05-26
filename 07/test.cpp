#include "test.h"

/*
C++ 中保留了C语言的 struct 关键字，并且加以扩充。在C语言中，struct 只能包含成员变量，不能包含成员函数。
而在C++中，struct 类似于 class，既可以包含成员变量，又可以包含成员函数。

C++中的 struct 和 class 基本是通用的，唯有几个细节不同：
1:使用 class 时，类中的成员默认都是 private 属性的；而使用 struct 时，结构体中的成员默认都是 public 属性的。(最本质的区别)
2:class 继承默认是 private 继承，而 struct 继承默认是 public 继承。
3:class 可以使用模板，而 struct 不能。

总结
1：struct作为数据结构的实现体，它默认的数据访问控制是public的，而class作为对象的实现体，它默认的成员变量访问控制是private的
2：当你觉得你要做的更像是一种数据结构的话，那么用struct，如果你要做的更像是一种对象的话，那么用class。
3：然而对于访问控制，应该在程序里明确的指出，而不是依靠默认，这是一个良好的习惯，也让你的代码更具可读性。
*/

/*exercise 7.1
int main(int argc, char **argv)
{
    Sales_data total;//此部分和第一章21页的内容相同
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;//第三题的使用修改之处
            }
            else {
                cout << total.bookNo << " " << total.units_sold << " "
                    << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue
            << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}

int main()
{
    Sales_data total;         // variable to hold the running sum
    if (read(cin, total))  {  // read the first transaction
        Sales_data trans;     // variable to hold data for the next transaction
        while(read(cin, trans)) {      // read the remaining transactions
            if (total.isbn() == trans.isbn())   // check the isbns
                total.combine(trans);  // update the running total
            else {
                print(cout, total) << endl;  // print the results
                total = trans;               // process the next book
            }
        }
        print(cout, total) << endl;          // print the last transaction
    } else {                                 // there was no input
        cerr << "No data?!" << endl;         // notify the user
    }

    return 0;
}
*/

/*exercise 7.2 and 7.3
double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

// add the value of the given Sales_data into this object
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // add the members of rhs into
    revenue += rhs.revenue;       // the members of ``this'' object
    return *this; // return the object on which the function was called
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;  // copy data members from lhs into sum
    sum.combine(rhs);      // add data members from rhs into sum
    return sum;
}

// transactions contain ISBN, number of copies sold, and sales price
istream& read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream& print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

int main()
{
    Sales_data total;         // variable to hold the running sum
    if (read(cin, total))  {  // read the first transaction
        Sales_data trans;     // variable to hold data for the next transaction
        while(read(cin, trans)) {      // read the remaining transactions
            if (total.isbn() == trans.isbn())   // check the isbns
                total.combine(trans);  // update the running total
            else {
                print(cout, total) << endl;  // print the results
                total = trans;               // process the next book
            }
        }
        print(cout, total) << endl;          // print the last transaction
    } else {                                 // there was no input
        cerr << "No data?!" << endl;         // notify the user
    }

    return 0;
}
*/

/*exercise 7.4 and 7.5
Person show_info(const Person &client)
{
    cout << client.get_name() << "'s address is " << client.get_address() << endl;
    return client;
}

int main(int argc, char *argv[])
{
    Person clientx = {"Mr.right","your heart"};
    //cout << clientx.get_name() << " " << clientx.get_address() << endl;
    show_info(clientx);
    return 0;
}
*/

/*exercise 7.9
istream& read(istream &is, Person &client)
{
    is >> client.name >> client.address;
    return is;
}

ostream& print(ostream &os, Person &client)
{
    os << client.name << "'s address is " << client.address;
    return os;
}

int main(int argc, char *argv[])
{
    Person client;
    while (read(cin, client))  {
        print(cout, client) << endl;
    }
    return 0;
}
*/

/*exercise 7.11~7.14 and 7.21
Sales_data::Sales_data(istream &is)
{
    read(is, *this);
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

// add the value of the given Sales_data into this object
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // add the members of rhs into
    revenue += rhs.revenue;       // the members of ``this'' object
    return *this; // return the object on which the function was called
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;  // copy data members from lhs into sum
    sum.combine(rhs);      // add data members from rhs into sum
    return sum;
}

// transactions contain ISBN, number of copies sold, and sales price
istream& read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream& print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

int main()
{
    Sales_data total(cin);
        if (cin)
        {
            Sales_data trans(cin);
            do
            {
                if (total.isbn() == trans.isbn())
                    total.combine(trans);
                else
                {
                    print(cout, total) << endl;
                    total = trans;
                }
            }while (read(cin, trans));
            print(cout, total)<<endl;
        }
        else
        {
            cerr << "No data?!"<<endl;
        }

    return 0;
}
*/

/*exercise 7.15 and 7.19, 22
int main(int argc, char *argv[])
{
    Person client("Mr.right","your heart");
    cout << client.get_name() << "'s address is " << client.get_address() << endl;
    return 0;
}
*/

/*exercise 7.18
封装实现了类的接口和实现的分离，隐藏了类的实现细节，用户只能接触到类的接口。
优点：
隐藏类的实现细节；
让使用者只能通过程序规定的方法来访问数据；
可以方便的加入存取控制语句，限制不合理操作；
类自身的安全性提升，只能被访问不能被修改；
类的细节可以随时改变，不需要修改用户级别的代码；
*/

/*exercise 7.27~7.29 7.32
int main(int argc, char *argv[])
{
    Screen myScreen(5,5,'X');
    myScreen.display(cout);
    cout << "\n";
    //myScreen.move(4,0).set('#').display(cout);
    myScreen.move(4,0).set('#');
    myScreen.display(cout);
    cout << "\n";
    return 0;
}
*/

/*exercise 7.30
优点：
1：当需要将一个对象作为整体引用而不是引用对象的一个成员时，使用this，则该函数返回对调用该函数的对象的引用。
2：可以非常明确地指出访问的是调用该函数的对象的成员，且可以在成员函数中使用与数据成员同名的形参。

缺点：不必要使用，代码多余。
*/

/*exercise 7.41
double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

// add the value of the given Sales_data into this object
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // add the members of rhs into
    revenue += rhs.revenue;       // the members of ``this'' object
    return *this; // return the object on which the function was called
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;  // copy data members from lhs into sum
    sum.combine(rhs);      // add data members from rhs into sum
    return sum;
}

// transactions contain ISBN, number of copies sold, and sales price
istream& read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream& print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

int main()
{
    Sales_data total(cin);
        if (cin)
        {
            Sales_data trans(cin);
            do
            {
                if (total.isbn() == trans.isbn())
                    total.combine(trans);
                else
                {
                    print(cout, total) << endl;
                    total = trans;
                }
            }while (read(cin, trans));
            print(cout, total)<<endl;
        }
        else
        {
            cerr << "No data?!"<<endl;
        }

    return 0;
}
*/

/*exercise 7.43
class NoDefault {
public:
    NoDefault(int i) {}
};

class C {
public:
    C() : def(0) {} // define the constructor of C.
private:
    NoDefault def;
};

int main()
{
    C c;
    //exercise 7.44
    //向量中的十个元素都需要默认初始化，但是类NoDefault没有默认的构造函数，所以错误
    //vector<NoDefault> vec(10);
    std::vector<C> vec(10);//exercise 7.45 合法，C已经定义了默认的构造函数
    return 0;
}
*/

/*exercise 7.46
（a）：错误，类本身不提供构造函数时，编译器会自动合成一个默认构造函数
（b）：错误，为成员提供默认值的构造函数也成为默认构造函数
（c）：错误，知识点1：默认构造函数在很多情况下也是非常重要的。
            1：当类的作用域内不需要使用任何初始值定义非静态变量时
            2：当类中含有需要使用默认构造函数当作被委托构造函数时
            3：类的成员没有在构造函数初始值列表中显示初始化时
           知识点2：当类中定义了其它类型的构造函数时，最好提供一个默认的构造函数，养成良好的习惯。
           知识点3：类声明对象是不需要加括号！加括号是声明函数的。
（d）：错误，当类没有定义构造函数时，才会默认编译器生成默认构造函数。
*/

/*exercise 7.49
（a）Sales_data＆combine（Sales_data）; // 好
（b）Sales_data＆combine（Sales_data＆）; //[Error]没有匹配函数调用'Sales_data::combine（std::string＆）
                                        //（std :: string＆`不能转换为Sales_data类型。）
（c）Sales_data＆combine（const Sales_data＆）const; //尾随的const标记不能放在这里，因为它禁止数据成员的任何突变。
                                                   //这与结合语义冲突。
关于问题（b）的一些详细解释：
这是不对的。因为`combine`的参数是一个非const引用，所以我们不能将临时参数传递给该参数。
如果`combine`的参数是对`const`的引用，我们可以传递一个临时参数给那个参数。
像这样：`Sales_data＆combine（const Sales_data＆）;
`在这里我们调用`Sales_data`` combine`成员函数和一个字符串参数。
这个声明是完全合法的;编译器会根据给定的字符串自动创建一个`Sales_data`对象。
新生成的（临时）`Sales_data`被传递给`combine`
*/

/*exercise 7.51
Such as a function like that:
```cpp
int getSize(const std::vector<int>&);
```
if vector has not defined its single-argument constructor as explicit. we can use the function like:
```cpp
getSize(34);
```
What is this mean? It's very confused.

But the `std::string` is different. In ordinary, we use `std::string` to replace `const char *`(the C language). so when we call a function like that:
```cpp
void setYourName(std::string); // declaration.
setYourName("pezy"); // just fine.
```
it is very natural.
*/

/*exercise 7.55
struct Data {
    int ival;
    std::string s;
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_literal_type<Data>::value << std::endl;
    // output: false
}
*/

/*exercise 7.56
>什么是静态类成员？
与类**关联的类成员，而不是类类型的单个对象。
>静态成员的优点是什么？
每个对象可以不需要存储公共数据。 如果数据发生变化，每个对象都可以使用新值。
>他们与普通成员有什么不同？
- 一个静态数据成员可以有**不完整的类型**。
- 我们可以使用静态成员**作为默认参数**。

知识点1：类的静态成员：该成员只需与类的本身有关，而不是与类的对象有关，
        加上static关键字即可声明，其不与任何实例化对象绑定，但是我们仍然可以使用类作用域运算符访问静态成员。
知识点2：static声明在内部。在外部定义时，不加static。类似与一个全局变量，其初始值必须是常量表达式。
知识点3：静态成员独立于任何对象，其类型可以是它所属的类类型。而非静态成员只能声明为其类的指针或引用。
*/

/*exercise 7.57
int main()
{
    Account a1("bem", 42);
    cout << a1.balance() << endl;
    a1.calculate();
    cout << a1.balance() << endl;
    cout << "rate is: " << a1.rate() << endl;
    a1.rate(0.024);
    a1.calculate();
    cout << a1.balance() << endl;
    cout << "rate is: " << a1.rate() << endl;
    return 0;
}
*/

/*exercise 7.58
// example.h
static double rate = 6.5;
                ^
            rate 应该是一个常量表达式
static vector<double> vec(vecSize);
                            ^
            类的静态成员不应该在类的内部初始化

改正:
// example.h
class Example {
public:
    static constexpr double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec;
};

// example.C
#include "example.h"
constexpr double Example::rate;
vector<double> Example::vec(Example::vecSize);
*/
