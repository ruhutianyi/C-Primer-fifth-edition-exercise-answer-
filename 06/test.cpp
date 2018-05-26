#include "test.h"

/*exercise 6.2
string f(string s) {
    return s;
}

int main()
{
    cout << f("balabala") << endl;
}
*/

/*exercise 6.3
int fact(int i){
    int res = 1;
    while (i > 1){
        res *= i--;
    }
    return res;
}

int main()
{
    int n = 5;
    int j = fact(n);
    cout << n << "! is " << j << endl;
}
*/

/*exercise 6.4
int fact(int i){
    int res = 1;
    while (i > 1){
        res *= i--;
    }
    return res;
}

int main()
{
    int n;
    cout << "Please enter a number:\n";
    while (cin >> n){
        cout << n << "! is " << fact(n) << endl;
    }
}
*/

/*exercise 6.5
double absValue(double d) {
    double absd;
    if (d>=0){
        absd = d;
    }else{
        absd = -d;
    }
    cout << "|" << d << "|" << " = " << absd << endl;
    //return abs(d);
}

int main()
{
    double num = -5;
    absValue(num);
}
*/

/*section 6.1.1
int count_calls(int i) {
    cout << i << endl;
    static int times = 0;
    return times++;
}

int main()
{
    int n = 10;
    for (int j = 0; j != n; ++j){
        cout << count_calls(n) << endl;
    }
    return 0;
}
*/

/*exercise 6.10
int exchange(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return *a, *b;
}

int main()
{
    int i1 = 1, i2 = 2;
    exchange(&i1, &i2);
    cout << "i1 = " << i1 << "\n"
         << "i2 = " << i2 << endl;
}
*/

/*exercise 6.11
int reset(int &i) {
    i = 5;
}

int main()
{
    int j = 42;
    reset(j);
    cout << "j = " << j << endl;
}
*/

/*exercise 6.12
int exchange(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
    return 0;
}

int main()
{
    int i1 = 1, i2 = 2;
    exchange(i1, i2);
    cout << "i1 = " << i1 << "\n"
         << "i2 = " << i2 << endl;
}
*/

/*exercise 6.17
int cntCaps(const string &s) {
    int cnt = 0;
    for (auto c : s){
        if (isupper(c))
            ++cnt;
    }
    cout << "number of captial letter is: " << cnt << endl;
}

string lower_case(const string &s) {
    for (auto c : s){
        c = tolower(c);
        cout << c;
    }
    cout << endl;
}

string lower_letter(string &s)
{
    for (int i = 0;i < s.size();i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

int main()
{
    cntCaps("AbCdEfGh");
    lower_case("ABCDEFgh");
    string str;
    cin >> str;
    cout << lower_letter(str) << endl;
}
*/

/*exercise 6.18
bool compare(matrix &m1, matrix &m2){

}

vector<int>::iterator change_val(int i , vector<int>::iterator vec) {

}

int main()
{

}
*/

/*exercise 6.21
int compare(int a, int *b) {
    if (a>=*b){
        return a;
    }else{
        return *b;
    }
}

int main()
{
    int a = 3;
    int b = 4;
    cout << compare(a,&b) << endl;
}
*/

/*exercise 6.22
int exchange(int* a, int* b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int exchangeip(int* &a, int* &b) {
    int *c = NULL;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 3;
    int b = 4;
    int *p1 = &a;
    int *p2 = &b;
    cout << *p1 << " " << *p2 << endl;
    cout << p1 << " " << p2 << endl;
    //exchange(&a,&b);
    exchangeip(p1,p2);
    cout << *p1 << " " << *p2 << endl;
    cout << p1 << " " << p2 << endl;
}
*/

/*exercise 6.23
int print(const int* ia, size_t size) {
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << endl;
    }
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(&i, 1);
    cout << j << endl;
    print(j, end(j) - begin(j));
}
*/

/*exercise 6.24
int print1(const int ia[2]) {
    for (size_t i = 0; i != 2; ++i) {
        cout << ia[i] << endl;
    }
}

int print2(const int (&ia)[2]) {
    for (size_t i = 0; i != 2; ++i) {
        cout << ia[i] << endl;
    }
}

int main()
{
    int i = 0, j[2] = {0, 1};
    cout << j << endl;
    print1(j);
    print2(j);
}
*/

/*section 6.2.5
int main(int argc, char *argv[])
{
    string str;
    for (int i = 1; i != argc; ++i) {
        str += argv[i];
        str += " ";
    }
    cout << str <<endl;
    return 0;
}
*/

/*exercise 6.27
int add(initializer_list<int> i)
{
    int sum;
    for (auto beg = i.begin(); beg != i.end(); ++beg)
        sum += *beg;
    cout << sum << endl;
}

int main(int argc, char *argv[])
{
    add({1,2,3,4,5});
    return 0;
}
*/

/*exercise 6.30
bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size())
                ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return;
    }
}

int main(int argc, char *argv[])
{

    return 0;
}
*/

/*exercise 6.33
int iterSelf(vector<int> vec, int i)
{
    if (i != vec.size()){
        cout << vec[i] << endl;
        return iterSelf(vec, ++i);
    }
    return 0;
}

int main(int argc, char *argv[])
{
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
    int i;
    iterSelf(vec, i);
    return 0;
}
*/

/*exercise 6.47
int iterSelf(vector<int> vec, int i)
{
    cout << "vector size: " << vec.size() << endl;
    if (i != vec.size()){
        cout << vec[i] << endl;
        return iterSelf(vec, ++i);
    }
    assert(i == vec.size());
    return 0;
}

int main(int argc, char *argv[])
{
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
    int i;
    iterSelf(vec, i);
    return 0;
}
*/

/*exercise 6.51
void f()
{
    cout<<"f()"<<endl;
}
void f(int)
{
    cout<<"f(int)"<<endl;
}
void f(int,int)
{
    cout<<"f(int, int)"<<endl;
}
void f(double,double = 3.14)
{
    cout<<"f(double,double = 3.14)"<<endl;
}
int main(int argc, char** argv)
{
    //f(42, 2.56);//编译器报错
    //f(2.56, 42);//编译器报错
    f();
    f(42);
    f(42, 0);
    f(2.56,3.14);
    return 0;
}
*/

/*section 6.7
int f(int, int)
{
   return 0;
}

int add(int a, int b)  { return a+b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }//声明定义函数

int main(int argc, char** argv)
{
    typedef decltype(f) *p;
    //typedef int(*p)(int a, int b);
    vector<p> vec = {add, subtract, multiply, divide};
    for (auto f : vec)
        cout << f(2, 2) <<endl;
    return 0;
}
*/
