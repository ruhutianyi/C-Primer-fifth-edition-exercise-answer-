#include "test.h"

/*exercise 4.4, 4.5
int main()
{
    cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
    cout << -30 * 3 + 21 / 5 << endl;
    cout << -30 + 3 * 21 / 5 << endl;
    cout << 30 / 3 * 21 % 5 << endl;
    cout << -30 / 3 * 21 % 4 << endl;
}
*/

/*exercise 4.6
int main()
{
    int i = -21;
    if (i%2 == 1 || i%2 == -1)
        cout << "i is Odd" << endl;
    else
        cout << "i is Even" << endl;
}
*/

/*exercise 4.7
int main()
{
    int i = pow(2, 32);
    cout << i + 2 << endl;
}
*/

/*section 4.4
int main()
{
    int i; double d;int *p;
    //d = i = 3.5;
    i = d = 3.5;
    cout << d << " " << i << endl;
    d = i = *p = 0;
}
*/

/*section 4.5
int main()
{
    int *p;
    vector<int> vec;
    int v;
    if(p != 0 && *p++)
    if(v++ && v)
    if(vec[v++] <= vec[v])
    {}
}
*/

/* 4.6
int main()
{
    string s = "a string", *p = &s;
    auto n = (*p).size();
    cout << n << " " << *p << endl;
}
*/

/*exercise 4.20
int main()
{
    vector<string>::iterator iter;
    *iter++;
    *++iter;
    //*iter.empty();
    iter->empty();
    //++*iter;
    iter++->empty();
}
*/

/*exercise 4.21
int main()
{
    vector<int> vec = {1,2,3,4,5,6};
    for (auto &c : vec){
        c =((c%2 == 1) ? 2*c : c);
            cout << c << " ";
    }
    cout << endl;
}
*/

/*section 4.8
int main()
{
    cout << (~'q'<<6) << endl;
    unsigned long u1 = 3, u2 = 7;
    cout << (u1&u2) << endl;
    cout << (u1|u2) << endl;
    cout << (u1&&u2) << endl;
    cout << (u1||u2) << endl;
}
*/

/*exercise 4.28
int main()
{
cout<<"short:"<<sizeof(short)<<endl;
cout<<"char:"<<sizeof(char)<<endl;
cout<<"int:"<<sizeof(int)<<endl;
cout<<"long:"<<sizeof(long)<<endl;
cout<<"float:"<<sizeof(float)<<endl;
cout<<"double:"<<sizeof(double)<<endl;
}
*/

/*exercise 4.29
int main()
{
    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
    cout << sizeof(p) << " " << sizeof(*p) << endl;
}
*/

/*exercise 4.35
int main()
{
    char cval;
    int ival;
    unsigned int ui;
    float fval;
    double dval;
    cval = 'a' - 32;
    cout << cval << endl;
    fval = ui - ival * 1.0;
}
*/

int main()
{
    int i = 1; double d = 2.0;
    cout << static_cast<int> (i*=d) << endl;
}
