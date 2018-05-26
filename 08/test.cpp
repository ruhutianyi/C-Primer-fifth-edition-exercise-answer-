#include "test.h"

/*exercise 8.1 8.2
istream& func(istream& is)
{
    string str;
    while(is >> str)
        cout << str << endl;
    is.clear();
    return is;
}

int main(int argc, char *argv[])
{
    istream& is = func(cin);
    cout << is.rdstate() << endl;
    return 0;
}
*/

/*exercise 8.4
void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs) {
        string buf;
        while (std::getline(ifs, buf)) vec.push_back(buf);
    }else
    {
        cerr << "cannot open this file: " << fileName << endl;
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("/home/lq/Code/CppPrimer-master/data/book.txt", vec);
    for (const auto& str : vec) cout << str << endl;
    return 0;
}
*/

/*exercise 8.5
void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs) {
        string buf;
        while (ifs >> buf) vec.push_back(buf);
    }else
    {
        cerr << "cannot open this file: " << fileName << endl;
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("/home/lq/Code/CppPrimer-master/data/book.txt", vec);
    for (const auto& str : vec) cout << str << endl;
    return 0;
}
*/

/*exercise 8.6 8.7 8.8
#include "sales_data.h"

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

int main(int argc, char** argv)
{
    ifstream input(argv[1]); // use "../data/book.txt"
    //ofstream output(argv[2]);//exercise 8.7
    ofstream output(argv[2], std::ofstream::app);//exercise 8.8
    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(output, total) << std::endl;
                total = trans;
            }
        }
        print(output, total) << std::endl;
    }
    else {
        std::cerr << "No data?!" << std::endl;
    }
}
*/

/*exercise 8.9
istream& func(istream& is)
{
    string buf;
    while (is >> buf) cout << buf << endl;
    is.clear();
    return is;
}

int main()
{
    istringstream iss("hello");
    func(iss);
    return 0;
}
*/

/*exercise 8.10
int main(int argc, char *argv[])
{
    ifstream ifs("/home/lq/Code/CppPrimer-master/data/book.txt");
    if (!ifs) {
        cerr << "No data?" << endl;
        return -1;
    }

    string line, word;
    vector<string> info;
    while (getline(ifs, line)) info.push_back(line);

    for (auto s : info) {
        istringstream is(s);
        while (is >> word) cout << word << endl;
    }
    return 0;
}
*/

/*exercise 8.11
int main()
{
    ifstream ifs("/home/lq/Code/VisualStudio2012/8/data/sstream");
    if (!ifs) {
        cerr << "No data?" << endl;
        return -1;
    }

    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(ifs, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word) info.phones.push_back(word);
        people.push_back(info);
    }

    for (auto& p : people) {
        std::cout << p.name << " ";
        for (auto& s : p.phones) std::cout << s << " ";
        std::cout << std::endl;
    }

    return 0;
}
*/

//exercise 8.13
//输出形式为什么是正确和错误的对象分开？？？ostringstream也太强大了。。。
bool valid(const string& str)
{
    return isdigit(str[0]);
}

string format(const string& str)
{
    return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main()
{
    ifstream ifs("/home/lq/Code/Qt-pro/build-capture8-Desktop_Qt_5_6_0_GCC_64bit-Debug/8.13");
    if (!ifs) {
        cerr << "no phone numbers?" << endl;
        return -1;
    }

    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(ifs, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word) info.phones.push_back(word);
        people.push_back(info);
    }

    for (const auto& entry : people) {
        ostringstream formatted, badNums;
        for (const auto& nums : entry.phones) {
            if (!valid(nums)) {
                badNums << " " << nums;
            }else
                formatted << " " << format(nums);
        }
        if (badNums.str().empty())
            cout << entry.name << " " << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name << " invalid number(s) "
                 << badNums.str() << endl;
    }

    return 0;
}
