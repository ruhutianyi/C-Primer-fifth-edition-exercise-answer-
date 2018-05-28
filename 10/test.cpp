#include "test.h"

/*exercise 10.1 10.2
int main(int argc, char *argv[])
{
    vector<int> ivec = {1,2,1,1,3,4,6,3,31,42,4,57,21,31,9,8,1,2,35,6,7,8,9};
    int val = 31;
    auto result1 = count(ivec.begin(), ivec.end(), val);
    cout << " val present " << result1 << " time(s)" << endl;

    list<string> ilst = {"aa", "bb", "cc", "dd", "aa", "aa"};
    string s("aa");
    auto result2 = count(ilst.begin(), ilst.end(), s);
    cout << " val present " << result2 << " time(s)" << endl;
    return 0;
}
*/

/*exercise 10.3 10.4
int main(int argc, char *argv[])
{
    vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
    int sum1 = accumulate(ivec.begin(), ivec.end(), 0);
    cout << sum1 << endl;

    vector<double> dvec = {0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    double sum2 = accumulate(dvec.begin(), dvec.end(), 0);
    cout << sum2 << endl;
    return 0;
}
*/

/*exercise 10.5
int main()
{
    char c1[10] = "eipi10";
    char c2[10] = "eipi10";
    vector<char*> roster1{c1};
    list<char*> roster2{c2};
    vector<string> roster3{"eipi10"};
    list<string> roster4{"eipi10"};
    cout << equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) << endl;
    cout << equal(roster3.cbegin(), roster3.cend(), roster4.cbegin()) << endl;
    return 0;
}
*/

/*page 383
int main(int argc, char *argv[])
{
    int a1[] = {0,1,2,3,4,5,6,7,8,9};
    int a2[sizeof(a1)/sizeof(*a1)];
    auto ret = copy(begin(a1), end(a1), a2);
    cout << equal(begin(a1), end(a1), begin(a2)) << endl;
    cout << sizeof(a1) << endl;
    cout << sizeof(*a1) << endl;
    return 0;
}
*/

/*exercise 10.6
int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fill_n(ivec.begin(), ivec.size(), 0);
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 10.7
template <typename Sequence> void print(Sequence const& seq)
{
    for (const auto& i : seq) cout << i << " ";
    cout << endl;
}

int main()
{
    // (a)
    vector<int> vec;
    list<int> lst;
    int i;
    while (cin >> i) lst.push_back(i);
    vec.resize(lst.size());
    // ^ Fixed: added this statement
    // Cause Algorithms that write to a destination iterator assume
    // the destination is large enough to hold the number of elements being
    // written.
    copy(lst.cbegin(), lst.cend(), vec.begin());

    // another way to fix bug
    // copy(lst.cbegin(), lst.cend(), back_inserter(vec));

    // (b)
    vector<int> v;
    v.reserve(10);
    fill_n(v.begin(), 10, 0);
    // ^ (b)No error, but not any sense. v.size() still equal zero.
    // Fixed: 1. use `v.resize(10);`
    //    or  2. use `fill_n(std::back_inserter(v), 10, 0)`

    print(v);
    print(vec);
}
*/

/*exercise 10.9
void elimDups(vector<string> &s)
{
    cout<<"排序前：";
    for (int i = 0; i<s.size(); ++i)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl<<"sort()排序后：";
    sort(s.begin(),s.end());//sort排序
    for (int i = 0; i<s.size(); ++i)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl<<"unique()排序后：";
    vector<string>::iterator str = unique(s.begin(),s.end());//unique排序
    for (int i = 0; i<s.size(); ++i)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl<<"erase()操作后：";
    s.erase(str,s.end());//erase()操作
    for (int i = 0; i<s.size(); ++i)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, char**argv)
{
    string a[10] = {"because","I","Like","Like","C++","very","very","much","that's","why"};
    vector<string> s(a,a+10);
    elimDups(s);

    return 0;
}
*/

/*exercise 10.10
这个设计的目的是分离算法和成员函数提供的操作。
库算法在**迭代器**，**而不是容器**上运行。 因此，算法**不能（直接）**添加或移除元素。
*/

/*exercise 10.11
inline bool is_shorter(std::string const& lhs, std::string const& rhs)
{
    return lhs.size() < rhs.size();
}

void elimdups(std::vector<std::string>& vs)
{
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

int main()
{
    std::vector<std::string> v{"1234", "1234", "1234", "Hi", "alan", "wang"};
    elimdups(v);
    for (const auto &s : v)
        cout << s << " ";
    cout << endl;
    //std::stable_sort(v.begin(), v.end(), is_shorter);
    sort(v.begin(), v.end(), is_shorter);
    for (const auto &s : v)
        cout << s << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 10.12
#include "sales_data.h"

bool compareIsbn(const Sales_data sd1, const Sales_data sd2)
{
    return sd1.isbn() < sd2.isbn();
}

int main()
{
    Sales_data d1("CppPrimer"), d2("JavaCore"), d3("PythonCookBook"),
        d4("CppCore"), d5("AwesomeCPP");
    vector<Sales_data> v{d1, d2, d3, d4, d5};

    //! @note   the elements the iterators pointing to
    //!         must match the parameters of the predicate.
    sort(v.begin(), v.end(), compareIsbn);

    for (const auto& element : v) cout << element.isbn() << " ";
    cout << endl;
}
*/

/*exercise 10.13
bool s_morethan_five(const string& s)
{
    return s.size() >= 5;
}

int main(int argc, char *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    auto pos = partition(words.begin(), words.end(), s_morethan_five);
    for (auto beg = words.begin(); beg != pos; ++beg)
        cout << *beg << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 10.14
int main(int argc, char *argv[])
{
    auto sum = [](const int &i1, const int &i2){ cout << i1 + i2 << endl; };
    sum(5,6);
    return 0;
}
*/

/*exercise 10.15
int main(int argc, char *argv[])
{
    int i1 = 5;
    auto sum = [i1](const int &i2){ cout << i1 + i2 << endl; };
    sum(6);
    return 0;
}
*/

/*exercise 10.16
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    stable_sort(words.begin(), words.end(),
                [](const string &a, const string &b)
                  { return a.size() < b.size(); });

    auto wc = find_if(words.begin(), words.end(),
                      [sz](const string &a)
                        { return a.size() >= sz; });

    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer " << endl;

    for_each(wc, words.end(),
             [](const string &s){cout << s << " "; });
    cout << endl;
}

int main(int argc, char *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(words, 5);
    return 0;
}
*/

/*exercise 10.17
#include "sales_data.h"

int main()
{
    Sales_data d1("CppPrimer"), d2("JavaCore"), d3("PythonCookBook"),
        d4("CppCore"), d5("AwesomeCPP");
    vector<Sales_data> v{d1, d2, d3, d4, d5};

    //! @note   the elements the iterators pointing to
    //!         must match the parameters of the predicate.
    sort(v.begin(), v.end(), [](const Sales_data sd1, const Sales_data sd2)
                                {return sd1.isbn() < sd2.isbn();});

    for (const auto& element : v) cout << element.isbn() << " ";
    cout << endl;
}
*/

/*exercise 10.18 10.19
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void biggies_partition(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    auto wc = partition(words.begin(), words.end(),
                      [sz](const string &a)
                        { return a.size() >= sz; });

    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer " << endl;

    for_each(words.begin(), wc,
             [](const string &s){cout << s << " "; });
    cout << endl;
}

void biggies_stable_partition(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    auto wc = stable_partition(words.begin(), words.end(),
                      [sz](const string &a)
                        { return a.size() >= sz; });

    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer " << endl;

    for_each(words.begin(), wc,
             [](const string &s){cout << s << " "; });
    cout << endl;
}

int main(int argc, char *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps",
                         "over", "the", "slow", "red", "turtle"};
    cout << "ex10.18: " << endl;
    vector<string> v1(words);
    biggies_partition(v1, 4);

    cout << "ex10.19: " << endl;
    vector<string> v2(words);
    biggies_stable_partition(v2, 4);

    return 0;
}
*/

/*exercise 10.20
string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

int main(int argc, char *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps",
                         "over", "the", "slow", "red", "turtle"};
    cout << "ex10.20: " << endl;
    int i = count_if(words.begin(), words.end(), [](const string &s)
                { return s.size() > 5; });
    cout << i << " " << make_plural(i, "word", "s") << " length of more than 5 " << endl;
    return 0;
}
*/

/*exercise 10.21
int main()
{
    // local int variable
    int local_val = 7;
    auto decrement_to_zero = [&local_val]() {
        if (local_val == 0)
            return true;
        else {
            --local_val;
            return false;
        }
    };

    while (!decrement_to_zero()) cout << local_val << endl;
}
*/

/*exercise 10.22
bool clen(const string &s, string::size_type sz)
{
    return s.size() <= sz;
}

int main(int argc, char *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps",
                         "over", "the", "slow", "red", "turtle"};
    cout << count_if(words.begin(), words.end(), bind(clen, _1, 6)) << endl;

    return 0;
}
*/

/*exercise 10.24
bool check_size(const string &s, string::size_type sz)
{
    return s.size() > sz;
}

int main(int argc, char *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps",
                         "over", "the", "slow", "red", "turtle"};
    string s("asd");
    cout << *find_if(words.begin(), words.end(), bind(check_size, _1, s.size())) << endl;

    return 0;
}
*/

/*exercise 10.25
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

void biggies_partition(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));

    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer " << endl;

    for_each(words.begin(), wc,
             [](const string &s){cout << s << " "; });
    cout << endl;
}

int main(int argc, char *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps",
                         "over", "the", "slow", "red", "turtle"};
    biggies_partition(words, 4);

    return 0;
}
*/

/*exercise 10.27
int main(int argc, char *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps",
                         "over", "the", "slow", "red", "turtle"};
    list<string> slst;

    sort(words.begin(), words.end());
    unique_copy(words.begin(), words.end(), back_inserter(slst));
    for(auto s : slst)
        cout << s << " ";
    cout << endl;

    return 0;
}
*/

/*exercise 10.28
int main(int argc, char *argv[])
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    list<int> ilst1, ilst2, ilst3;
    copy(ivec.cbegin(), ivec.cend(), inserter(ilst1, ilst1.begin()));
    copy(ivec.cbegin(), ivec.cend(), front_inserter(ilst2));
    copy(ivec.cbegin(), ivec.cend(), back_inserter(ilst3));
    for(auto i : ilst1)
        cout << i << " ";
    cout << endl;
    for(auto i : ilst2)
        cout << i << " ";
    cout << endl;
    for(auto i : ilst3)
        cout << i << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 10.29
int main()
{
    ifstream ifs("/home/lq/Code/CppPrimer-master/data/book.txt");
    istream_iterator<string> in(ifs), eof;
    ostream_iterator<string> out_iter(cout, "\n");
    vector<string> svec;
    copy(in, eof, back_inserter(svec));

    // output
    copy(svec.cbegin(), svec.cend(), out_iter);
}
*/

/*exercise 10.30 10.31
int main(int argc, char *argv[])
{
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> ivec(in_iter, eof);

    sort(ivec.begin(), ivec.end());
    //copy(ivec.begin(), ivec.end(), out_iter);//exercise 10.30
    unique_copy(ivec.begin(), ivec.end(), out_iter);//exercise 10.31
    return 0;
}
*/

/*exercise 10.32
#include "Sales_item.h"

bool compareisbn(Sales_item const& sd1, Sales_item const& sd2)
{
    return sd1.isbn() < sd2.isbn();
}

int main(int argc, char *argv[])
{
    ifstream ifs("/home/lq/Code/VisualStudio2012/10/data/book_sales");
    istream_iterator<Sales_item> in_iter(ifs), eof;
    ostream_iterator<Sales_item> out_iter(cout, "\n");

    vector<Sales_item> svec(in_iter, eof);
    //copy(svec.begin(), svec.end(), out_iter);
    //cout << endl;

    sort(svec.begin(), svec.end(), compareisbn);
    copy(svec.begin(), svec.end(), out_iter);
    cout << endl;

    for (auto beg = svec.cbegin(), end = beg; beg != svec.cend(); beg = end) {
        end = find_if(beg, svec.cend(), [beg](const Sales_item& item) {
            return item.isbn() != beg->isbn();
        });
        cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl;
    }

    return 0;
}
*/

/*****exercise 10.33
int main(int argc, char** argv)
{
    if (argc != 4) return -1;

    ifstream ifs(argv[1]);
    ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

    istream_iterator<int> in(ifs), in_eof;
    ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

    for_each(in, in_eof, [&out_odd, &out_even](const int i) {
        *(i % 2 ? out_odd : out_even)++ = i;
    });

    return 0;
}
*/

/*page 364
int main(int argc, char *argv[])
{
    string svec{"FIRST,MIDDLE,LAST"};
    auto com = find(svec.cbegin(), svec.cend(), ',');
    cout << string(svec.cbegin(), com) << endl;
    auto rcom = find(svec.crbegin(), svec.crend(), ',');
    cout << string(svec.crbegin(), rcom) << endl;
    cout << string(rcom.base(), svec.cend()) << endl;
    return 0;
}
*/

/*section 10.4.3
int main(int argc, char *argv[])
{
    list<int> ilst1{0,1,2,3,4,5,6,7,8,9};
    vector<int> ivec{0,1,2,3,4,5,6,7,8,9};

    for(auto r_iter = ivec.crbegin(); r_iter != ivec.crend();)
        cout << *r_iter++ << " ";
    cout << endl;

    for (auto iter = ivec.cend(); iter != ivec.cbegin();)
        cout << *--iter << " ";
    cout << endl;

    auto zero_iter = find(ilst1.crbegin(), ilst1.crend(), 0);
    cout << "find " << *zero_iter << " in front of " << *zero_iter.base() << endl;

    list<int> ilst2(5), ilst3(5);
    copy(ivec.crbegin() + 3, ivec.crend() - 2, ilst2.begin());
    reverse_copy(ivec.cbegin() + 2, ivec.cend() - 3, ilst3.begin());
    for (auto i : ilst2)
        cout << i << " ";
    cout << endl;
    for (auto i : ilst3)
        cout << i << " ";
    cout << endl;

    return 0;
}
*/

/*exercise 10.38
 * 输入迭代器：可以读取序列中的元素。
 * 输出迭代器，看作是输入迭代器的补集，可写。
 * 前向迭代器：单向，支持输入输出。
 * 双向迭代器：双向，支持读写，还支持递增递减运算符。
 * 随机访问迭代器：基本支持所有功能。
*/

/*exercise 10.40
- `copy` : first and second are Input iterators, last is Output iterators.
- `reverse` : Bidirectional iterators.
- `unique` : Forward iterators.
*/

/*exercise 10.41
(a)：遍历beg到end，找到oldVal就用newVal替换
(b)：遍历beg到end，找到满足pred条件的就用newVal替换
(c)：遍历beg到end，找到oldVal就用newVal替换，并将其拷贝至dest
(d)：遍历beg到end，找到满足pred条件的就用newVal替换，并将其拷贝至dest
*/

/*exercise 10.42
void elimDups(list<string> &words)
{
    words.sort();
    words.unique();
}

int main()
{
    list<string> l = {"aa", "aa", "aa", "aa", "aasss", "aa"};
    elimDups(l);
    for (const auto& e : l) cout << e << " ";
    cout << endl;
}
*/
