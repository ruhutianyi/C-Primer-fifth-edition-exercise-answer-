#include "test.h"

/*exercise 9.2
int main(int argc, char *argv[])
{
    list<deque<int>> ldi;
    return 0;
}
*/

/*exercise 9.4 9.5
bool find_i(vector<int> vi, int i)
{
    for (auto it = vi.begin(); it != vi.end(); ++it)
        if (*it == i) {
            return true;
        }
    return false;
}

int findout_i(vector<int> vi, int i)
{
    for (auto it = vi.begin(); it != vi.end(); ++it)
        if (*it == i) {
            cout << "i = " << i << endl;
            return 0;
        }
    cout << "not find i" << endl;
    return 0;
}

int main(int argc, char *argv[])
{
    vector<int> vi;
    for (int i = 0; i != 100; ++i)
        vi.push_back(i);
    int i = 101;
    //cout << vi[54] << endl;
    if(find_i(vi, i)) {
        cout << "find it" << endl;
    }else {
        cout << "not find i" << endl;
    }
    findout_i(vi, i);
    return 0;
}
*/

/*exercise 9.7
    vector<int>::size_type
*/

/*exercise 9.8
    list<string>::iterator || list<string>::const_iterator // read
    list<string>::iterator // write
*/

/*exercise 9.11
vector<int> vec;    // 0
vector<int> vec(10);    // 0
vector<int> vec(10,1);  // 1
vector<int> vec{1,2,3,4,5}; // 1,2,3,4,5
vector<int> vec(other_vec); // same as other_vec
vector<int> vec(other_vec.begin(), other_vec.end()); // same as other_vec
*/

/*exercise 9.13
int main()
{
    list<int> ilst(5, 4);
    vector<int> ivc(5, 5);

    //! from list<int> to vector<double>
    vector<double> dvc(ilst.begin(), ilst.end());
    for (auto i : ilst) cout << i;
    cout << endl;
    for (auto t : dvc) cout << t;
    cout << endl;

    //! from vector<int> to vector<double>
    vector<double> dvc2(ivc.begin(), ivc.end());
    for (auto i : ivc) cout << i;
    cout << endl;
    for (auto t : dvc2) cout << t;
    cout << endl;

    return 0;
}
*/

/*exercise 9.14
int main()
{
    list<const char*> l{"Mooophy", "pezy", "Queeuqueg"};
    vector<string> v;
    v.assign(l.cbegin(), l.cend());

    for (const auto& ch : v) cout << ch << endl;

    return 0;
}
*/

/*exercise 9.15
int main()
{
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{1, 2, 3, 4, 5};
    std::vector<int> vec3{1, 2, 3, 4};

    std::cout << std::boolalpha << (vec1 == vec2) << std::endl;
    std::cout << std::boolalpha << (vec1 == vec3) << std::endl;

    return 0;
}
*/

/*exercise 9.16
int main()
{
    std::list<int> list{1, 2, 3, 4, 5};
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{1, 2, 3, 4};

    std::cout << std::boolalpha
              << (std::vector<int>(list.begin(), list.end()) == vec1)
              << std::endl;
    std::cout << std::boolalpha
              << (std::vector<int>(list.begin(), list.end()) == vec2)
              << std::endl;
}
*/

/*exercise 9.18
int main(int argc, char *argv[])
{
    deque<string> sdq;
    string s;
    while (cin >> s) {
        sdq.push_back(s);
    }
    for (auto iter = sdq.begin(); iter != sdq.end(); ++iter)
        cout << *iter << endl;
    return 0;
}
*/

/*exercise 9.19
int main(int argc, char *argv[])
{
    list<string> sdq;
    string s;
    while (cin >> s) {
        sdq.push_back(s);
    }
    for (auto iter = sdq.begin(); iter != sdq.end(); ++iter)
        cout << *iter << endl;
    return 0;
}
*/

/*exercise 9.20
int main(int argc, char *argv[])
{
    list<int> li = {0,1,2,3,4,5,6,7,8,9,10};
    deque<int> die;//even
    deque<int> dio;//odd
    for (auto c : li) {
        if (c%2 == 0)
            die.push_back(c);
        else
            dio.push_back(c);
    }
    for (auto e : die)
        cout << e << " ";
    cout << endl;
    for (auto o : dio)
        cout << o << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 9.22
void insertDoubleValue(vector<int>& iv, int some_val)
{
    auto cursor = iv.size() / 2;
    auto iter = iv.begin(), mid = iv.begin() + cursor;
    while (iter != mid) {
        if (*iter == some_val) {
            iter = iv.insert(iter, 2 * some_val);
            ++iter;
            ++cursor;
            mid = iv.begin() + cursor;
        }
        ++iter;
    }
}

void print(const vector<int>& iv)
{
    for (auto i : iv) std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    vector<int> iv = {1, 1, 1, 1, 1, 7, 1, 9};
    insertDoubleValue(iv, 1);
    print(iv);
}
*/

/*exercise 9.24
int main(int argc, char *argv[])
{
    vector<string> svec;
    cout << svec[0];
    cout << svec.at(0);
    cout << svec.front();
    cout << *svec.begin();
    return 0;
}
*/

/*exercise 9.25
int main(int argc, char *argv[])
{
    list<int> ilst = {0,1,2,3,4,5,6,7,8,9};
    auto elem1 = ilst.begin();
    auto elem2 = ilst.end();
    auto elem3 = elem1;
    auto elem4 = elem2;
    elem1 = ilst.erase(++elem1, --elem2);
    //elem1 = ilst.erase(elem1, elem3);
    //elem2 = ilst.erase(elem2, elem4);
    for (auto i : ilst)
        cout << i << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 9.26
int main(int argc, char *argv[])
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> ivec(ia, end(ia));
    list<int> ilst(ivec.begin(), ivec.end());

    for (auto it = ilst.begin(); it != ilst.end();)
        if(*it%2 == 1)
            it = ilst.erase(it);
        else
            ++it;

    for (auto it = ivec.begin(); it != ivec.end();)
        if(*it%2 == 0)
            it = ivec.erase(it);
        else
            ++it;

    cout << "list: ";
    for (auto i : ilst)
        cout << i << " ";
    cout << endl;

    cout << "vector: ";
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 9.27
int main()
{
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto prev = flst.before_begin(), curr = flst.begin();
         curr != flst.end();)
        if (*curr%2)
            curr = flst.erase_after(prev);
        else
            prev = curr++;

    for (auto i : flst) cout << i << " ";
    cout << endl;
}
*/

/*exercise 9.28
void findS1_insertS2(forward_list<string> &flst, const string &S1, const string &S2)
{
    auto prev = flst.before_begin();
    auto size = distance(flst.begin(), flst.end());
    //auto size = flst.size();//c.size() not support forward_list
    for (auto curr = flst.begin(); curr != flst.end(); prev = curr++)
        if (*curr == S1)
            curr = flst.insert_after(curr, S2);
    if (size == distance(flst.begin(), flst.end()))
    //if (size == flst.size())//c.size() not support forward_list
        flst.insert_after(prev, S2);
}

int main(int argc, char *argv[])
{
    forward_list<string> flst = {"qwer", "asd", "zxc", "fgh"};
    //string s1 = {"asd"}, s2 = {"jkl"};
    string s1 = {"uiop"}, s2 = {"jkl"};
    findS1_insertS2(flst, s1, s2);

    for (auto s : flst)
        cout << s << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 9.31.1
int main()
{
    list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            advance(iter, 2);
        }
        else
            iter = vi.erase(iter);
    }

    for (auto i : vi) cout << i << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 9.31.2
int main()
{
    forward_list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin(), prev = vi.before_begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert_after(prev, *iter);
            advance(iter, 2);
            advance(prev, 2);
        }
        else
            iter = vi.erase_after(prev);
    }

    for (auto i : vi) cout << i << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 9.38
int main()
{
    std::vector<std::string> v;
    std::string word;

    while (std::cin >> word) {
        v.push_back(word);
        std::cout << "size: " << v.size() << "\n";
        std::cout << "capacity: " << v.capacity() << "\n";
    }
    cout << endl;

    return 0;
}
*/

/*exercise 9.40
void func(int val)
{
    vector<string> svec;
    svec.reserve(1000);
    string mystring = "string";
    for (int i = 0; i < val; ++i)
    {
        svec.push_back(mystring);
    }
    svec.resize(svec.size()+svec.size()/2);
    cout<<"输入"<<val<<"个词之后size"<<svec.size()<<endl;
    cout<<"输入"<<val<<"个词之后capacity"<<svec.capacity()<<endl;
}
int main(int argc, char**argv)
{
    func(256);
    func(512);
    func(1000);
    func(1024);

    return 0;
}
*/

/*exercise 9.41
int main()
{
    vector<char> vec{'p', 'e', 'z', 'y'};
    string str(vec.begin(), vec.end());

    cout << str << endl;

    return 0;
}
*/

/*exercise 9.43
void Replace(string& s, const string& oldVal, const string& newVal)
{
    for (auto beg = s.begin(); distance(beg, s.end()) >=
                               distance(oldVal.begin(), oldVal.end());) {
        if (string{beg, beg + oldVal.size()} == oldVal) {
            beg = s.erase(beg, beg + oldVal.size());
            beg = s.insert(beg, newVal.cbegin(), newVal.cend());
            advance(beg, newVal.size());
        }
        else
            ++beg;
    }
}

int main()
{
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{
            "To drive straight thruthru is a foolish, thotho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "thruthru");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{"my world is a big world"};
        Replace(str, "world",
                "worldddddddddddddddddddddddddddddddddddddddddddddddd");
        cout << str << endl;
    }
    return 0;
}
*/

/*exercise 9.44
void Replace(string& s, string const& oldVal, string const& newVal)
{
    for (string::size_type i = 0; i != s.size(); ++i)
        if (s.substr(i, oldVal.size()) == oldVal) {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size() - 1;
        }
}

int main()
{
    string str{"To drive straight thru is a foolish, tho courageous act."};
    Replace(str, "tho", "though");
    Replace(str, "thru", "through");
    cout << str << endl;
}
*/

/*exercise 9.45
string fullname(string& name, const string& prefix, const string& suffix)
{
    name.insert(0, prefix);
    name.append(suffix);
    return name;
}

int main(int argc, char *argv[])
{
    string name = "LIQI";
    fullname(name, "Aisinjuro ", " 27th");
    cout << name << endl;
    return 0;
}
*/

/*exercise 9.46
string fullname(string& name, const string& prefix, const string& suffix)
{
    name.insert(0,prefix);
    name.insert(name.size(),suffix);
    return name;
}

int main(int argc, char *argv[])
{
    string name = "LIQI";
    fullname(name, "Aisinjuro ", " 27th");
    cout << name << endl;
    return 0;
}
*/

/*exercise 9.47.1
int main(int argc, char *argv[])
{
    string s = "ab2c3d7R4E6", num = "0123456789", letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "numeric characters: ";
    for (string::size_type pos = 0;
         (pos = s.find_first_of(num, pos)) != string::npos; ++pos)
        cout << s[pos] << " ";
    cout << "\nalphabetic characters: ";
    for (string::size_type pos = 0;
         (pos = s.find_first_of(letter, pos)) != string::npos; ++pos)
        cout << s[pos] << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 9.47.2
int main(int argc, char *argv[])
{
    string s = "ab2c3d7R4E6", num = "0123456789", letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "numeric characters: ";
    for (string::size_type pos = 0;
         (pos = s.find_first_not_of(letter, pos)) != string::npos; ++pos)
        cout << s[pos] << " ";
    cout << "\nalphabetic characters: ";
    for (string::size_type pos = 0;
         (pos = s.find_first_not_of(num, pos)) != string::npos; ++pos)
        cout << s[pos] << " ";
    cout << endl;
    return 0;
}
*/

/*exercise 9.48
int main(int argc, char *argv[])
{
    string numbers("0123456789"), name("r2d2");
    cout << numbers.find(name) << endl;
    return 0;
}
*/

/*exercise 9.49
int main()
{
    ifstream ifs("/home/lq/Code/CppPrimer-master/data/letter.txt");
    if (!ifs) return -1;
    string longest_word;
    for (string word; ifs >> word;)
        if (word.find_first_not_of("aceimnorsuvwxz") == string::npos &&
            word.size() > longest_word.size())
            longest_word = word;

    cout << longest_word << endl;
}
*/

/*exercise 9.50
int sum_for_int(const vector<string> &v)
{
    int sum = 0;
    for (auto const& s : v) sum += stoi(s);
    return sum;
}

float sum_for_float(const vector<string> &v)
{
    float sum = 0.0;
    for (auto const& s : v) sum += stof(s);
    return sum;
}

int main()
{
    vector<string> v = {"1", "2", "3", "4.5"};
    cout << sum_for_int(v) << endl;
    cout << sum_for_float(v) << endl;

    return 0;
}
*/

/*exercise 9.51
class wy_Date {
public:
    wy_Date(const std::string& s);
    unsigned year;
    unsigned month;
    unsigned day;
};

int main()
{
    wy_Date d("99/21/3871");

    cout << d.day << " " << d.month << " " << d.year << " " << endl;

    return 0;
}

wy_Date::wy_Date(const std::string& s)
{
    unsigned format = 0;

    //! 1/1/1900
    if (s.find_first_of("/") != std::string::npos) format = 0x10;

    //! Jan 1, 1900
    if (s.find_first_of(",") >= 4 && s.find_first_of(",") != std::string::npos)
        format = 0x01;

    switch (format) {

    //! format = 1/1/1900
    case 0x10:
        day = std::stoi(s.substr(0, s.find_first_of("/")));
        month = std::stoi(s.substr(s.find_first_of("/") + 1,
                                   s.find_last_of("/") - s.find_first_of("/")-1));
        year = std::stoi(s.substr(s.find_last_of("/") + 1, 4));
        break;

    //! format = January 1, 1900  or Jan 1, 1900
    case 0x01:
        day = std::stoi(
            s.substr(s.find_first_of("1234567890"),
                     s.find_first_of(",") - s.find_first_of("1234567890")));

        if (s.find("Jan") < s.size()) month = 1;
        if (s.find("Feb") < s.size()) month = 2;
        if (s.find("Mar") < s.size()) month = 3;
        if (s.find("Apr") < s.size()) month = 4;
        if (s.find("May") < s.size()) month = 5;
        if (s.find("Jun") < s.size()) month = 6;
        if (s.find("Jul") < s.size()) month = 7;
        if (s.find("Aug") < s.size()) month = 8;
        if (s.find("Sep") < s.size()) month = 9;
        if (s.find("Oct") < s.size()) month = 10;
        if (s.find("Nov") < s.size()) month = 11;
        if (s.find("Dec") < s.size()) month = 12;

        year = std::stoi(s.substr(s.find_last_of(" ") + 1, 4));
        break;
    }
}
*/

/*exercise 9.52
int main()
{
    auto& expr = "This is (Mooophy(awesome)((((wooooooooo))))) and (ocxs) over";
    auto repl = '#';
    auto seen = 0;

    stack<char> stk;

    for (auto c : expr) {
        stk.push(c);
        if (c == '(') ++seen;   // open
        if (seen && c == ')') { // pop elements down to the stack
            while (stk.top() != '(') stk.pop();
            stk.pop();      // including the open parenthesis
            stk.push(repl); // push a value indicate it was replaced
            --seen;         // close
        }
    }

    // Test
    string output;
    for (; !stk.empty(); stk.pop()) output.insert(output.begin(), stk.top());
    cout << output << endl; // "This is # and # over"
}
*/
