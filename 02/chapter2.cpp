#include "chapter2.h"

/*
//exercise 2.18
int main()
{
    int a = 12, *p = &a;
    int b = 0, c = 24;
    std::cout << p << std::endl;
    p = &b;
    *p = c;
    std::cout << p << " " << *p << std::endl;
}
*/

/*
int main()
{
    int i = 42;
    int *p = &i;
    *p = *p * *p;
    std::cout << *p << " " << i << std::endl;
}
*/

/*
int main()
{
    int i = 3;
    int *p = &i;
    int **pi = &p;
    std::cout << "The value of i\n"
              << "direct value: " << i << "\n"
              << "indirect value: " << *p << "\n"
              << "doule indirect value: " << **pi
              << std::endl;

    return 0;
}
*/

/*
//exercise 2.33
int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    std::cout << a << " "
              << b << " "
              << c << " "
              << d << " "
              << e << " "
              << g << " "
              << std::endl;
    a = 42;
    b = 42;
    c = 42;
    *d = 42;
    *e = 42;
    g = 42;
    std::cout << a << " "
              << b << " "
              << c << " "
              << d << " "
              << e << " "
              << g << " "
              << std::endl;
}
*/

/*
int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;
    std::cout << a << " "
              << b << " "
              << c << " "
              << d << std::endl;
}
*/

/*
struct Sales_data
{
    std::string transaction_record;
    unsigned sale_num = 0;
    double revenue = 0.0;
};
int main()
{
    return 0;
}
*/

/*
#include "test.h"

int main()
{
    test data1, data2;

    double price = 0;

    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << " " << totalCnt
                  << " " << totalRevenue << " ";
        if (totalCnt != 0)
            std::cout << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;
    }
    else {
        std::cerr << "Data must refer to the same ISBN"
                  << std::endl;
        return -1;
    }
}
*/


//exercise 2.42
#include "test.h"

int main()
{
    test data1, data2;
    double price = 0;
    int cnt = 1;
    if (std::cin >> data1.bookNo >> data1.units_sold >> price){
        unsigned totalCnt = data1.units_sold;
        data1.revenue = data1.units_sold * price;
        double totalRevenue = data1.revenue;
        while (std::cin >> data2.bookNo >> data2.units_sold >> price) {
            data2.revenue = data2.units_sold * price;
            if (data1.bookNo == data2.bookNo){
                totalCnt += data2.units_sold;
                totalRevenue += data2.revenue;
                cnt++;
                data1 = data2;
            }
            else if ((data1.bookNo != data2.bookNo)&&cnt == 1){
                std::cout << data1.bookNo << " " << totalCnt
                          << " " << totalRevenue << " "
                          << totalRevenue/totalCnt << std::endl;
                data1 = data2;
                totalCnt = data2.units_sold;
                totalRevenue = data2.revenue;
            }
            else {
                std::cout << data1.bookNo << " " << totalCnt
                          << " " << totalRevenue << " "
                          << totalRevenue/totalCnt << std::endl;
                data1 = data2;
                totalCnt = data2.units_sold;
                totalRevenue = data2.revenue;
                cnt = 1;
            }
        }
        std::cout << data1.bookNo << " " << totalCnt
                  << " " << totalRevenue << " "
                  << totalRevenue/totalCnt << std::endl;
    }
}
