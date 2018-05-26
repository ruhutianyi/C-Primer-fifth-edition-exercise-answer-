#include "test.h"

/*
int main()
{
    string line, word;

    //while (getline(cin, line))
        //cout << line << endl;
        //if (!line.empty())
    while (cin >> word)
        cout << word << endl;


    //string s1 = "hello", s2 = "world";
    //string s3 = "," + s2;
    //cout << s3 << endl;
    return 0;
}
*/

/*ispunct
int main()
{
    //string str("some string");
    //for (auto c : str)
       // cout << c << endl;
    string s("Hello World!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
            punct_cnt++;
    cout << punct_cnt
         << " punctuation characters in " << s << endl;
}
*/

/*toupper total
int main()
{
    string s("Hello world!!!");
    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;
}
*/

/*
int main()
{
    string s("some string");
    //if (!s.empty())
        //s[0] = toupper(s[0]);
    for (decltype(s.size()) index = 0;
        index != s.size() && !isspace(s[index]); ++index)
            s[index] = toupper(s[index]);
    cout << s << endl;
    return 0;
}
*/

/*0~15 decimal to hexadecimal
int main()
{
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by space. Hit ENTER when finished: "
         << endl;
    string result;
    string::size_type n;
    while (cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];
    cout << "Your hex number is: " << result << endl;
}
*/

/*exercise 3.6
int main()
{
    string s("balabala energy");
    for (auto &c : s)
        if (!isspace(c))
            c = 'X';
    cout << s << endl;
}
*/

/*exercise 3.10
int main()
{
    string s("AWDAW!,DAWFe.;GRDG/u*ht%3423,.");
    string result;
    for (auto &c : s)
        if (!ispunct(c))
            result += c;
    cout << result << endl;
}
*/

/*exercise 3.11
int main()
{
    const string s("keep out!");
    for (auto &c : s)
        cout << s  << typeid(s).name() << endl;
}
*/

/*exercise 3.12
int main()
{
    vector<vector<int>> ivec;
    //vector<string> svec = ivec;
    vector<string> svec(10, "null");
}
*/

/*exercise 3.14
int main()
{
    int num;
    vector<int> v;
    while (cin >> num)
        v.push_back(num);
    for (int i=0;i!=v.size();i++)
        cout<<v.at(i)<<endl;
    return 0;

}
*/

/*exercise 3.15
int main()
{
    string s;
    vector<string> v;
    while (cin >> s)
        v.push_back(s);
    for (int i=0;i!=v.size();i++)
        cout<<v.at(i)<<endl;
    return 0;

}
*/

/*exercise 3.16
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    //cout << v1[0] << endl;

    for (unsigned i=0;i<v2.size();i++)
        cout << v2[i] << " ";
    cout << endl;
    for (unsigned i=0;i<v3.size();i++)
        cout << v3[i] << " ";
    cout << endl;
    cout << v4[0] << endl;
    cout << v5[0] << " " << v5[1] << endl;
    //for (unsigned i=0;i<v6.size();i++)
        //cout << v6[i] << " ";
    for (unsigned i=0;i<v7.size();i++)
        cout << v7[i] << " ";
    cout << endl;
}
*/

/*exercise 3.17
int main()
{
    string word;
    vector<string> text;
    while (cin >> word)
        text.push_back(word);
    for (decltype(text.size()) i=0;i<text.size();i++)
        for (decltype(text[i].size()) index = 0; index < text[i].size(); ++index)
            text[i][index] = toupper(text[i][index]);
    for (decltype(text.size()) i=0;i<text.size();i++)
        cout << text[i] << endl;
        //cout << endl;
}
*/

/*exercise 3.19
int main()
{
    vector<int> vec1(10, 42);
    vector<int> vec2;
    for (int i = 0; i < 10; ++i)
        vec2.push_back(42);
    vector<int> vec3{42,42,42,42,42,42,42,42,42,42};
    for (decltype(vec1.size()) i=0; i<vec1.size(); i++)
        cout << vec1[i] << " " << vec2[i] << " " << vec3[i] << endl;
}
*/

/*exercise 3.20.1
int main()
{
    int num;
    vector<int> v;
    while (cin >> num)
        v.push_back(num);
    for (decltype(v.size()) i=0; i<v.size()-1; i++)
        cout << v.at(i) + v.at(i+1) << endl;
    return 0;

}
*/

/*exercise 3.20.2
int main()
{
    int num;
    vector<int> v;
    while (cin >> num)
        v.push_back(num);
    for (decltype(v.size()) i=0; i<v.size()/2; i++)
        cout << v.at(i) + v.at(v.size()-1-i) << endl;
    if (v.size()%2 == 1)
        cout << v.at(v.size()/2) << endl;
    return 0;
}
*/

/*exercise 3.22
int main()
{
    vector<string> text{"Now is the time for all good boys","","to come to the aid of the party"};
    for (int j=0;j<text.size();j++)
    {
        string s = text[j];
        for(int i=0;i<s.length();i++)
        {
            if(s[i] < 'a')
            {
                cout <<s[i];
            }else
            {
                cout <<(char)(s[i]-32);
            }
        }
    }
}
*/

/*exercise 3.22
int main()
{
    vector<string> text{"Now is the time for all good boys","","to come to the aid of the party"};
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for (auto &c : *it)
            c = toupper(c);
                cout << *it << endl;
    }
}
*/

/*exercise 3.23
int main()
{
    vector<int> num;
    for (int i = 0; i != 10; i++)
        num.push_back(i);
    if (num.begin() != num.end())
    {
        for (auto it = num.begin(); it != num.end(); ++it)
        {
            cout << *it << " " << 2* *it << endl;
        }
    }
}
*/

/*exercise 3.24.1
int main()
{
    int num;
    vector<int> v;
    while (cin >> num)
        v.push_back(num);
    //for (decltype(v.size()) i=0; i<v.size()-1; i++)
        //cout << v.at(i) + v.at(i+1) << endl;
    auto beg = v.begin(), end = v.end();
    for (decltype(v.size()) i=0; i<v.size()-1; i++)
        cout << *(beg + i) + *(beg + i +1) << endl;
    return 0;
}
*/

/*exercise 3.24.2
int main()
{
    int num;
    vector<int> v;
    while (cin >> num)
        v.push_back(num);
    auto beg = v.begin(), end = v.end();
    //for (decltype(v.size()) i=0; i<v.size()/2; i++)
        //cout << v.at(i) + v.at(v.size()-1-i) << endl;
    for (decltype(v.size()) i=0; i<v.size()/2; i++)
        cout << *(beg + i) + *(end - i - 1) << endl;
    if (v.size()%2 == 1)
        cout << *(beg + (end - beg)/2) << endl;
    return 0;
}
*/

/*exercise 3.25
int main()
{
    vector<unsigned> scores(11, 0);
    auto it = scores.begin();
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
        {
            //++it[grade/10];
            ++it[grade/10];
        }
    }
    for (auto it = scores.begin(); it != scores.end(); it++)
        cout << *it << " ";
}
*/

/*vecScores.cpp
int main()
{
    // hold the grades we read from the standard input
    vector<unsigned> grades;

    // count the number of grades by clusters of ten:
    // 0--9, 10--19, . ..  90--99, 100
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    unsigned grade;
    while (cin >> grade) {      // read the grades
        if (grade <= 100)       // handle only valid grades
            grades.push_back(grade);
            ++scores[grade/10]; // increment the counter for the current cluster
    }
    cout << "grades.size = " << grades.size() << endl;
    for (auto it : grades)
        cout << it << " " ;
    cout << endl;

    cout << "scores.size = " << scores.size() << endl;
    for (auto it : scores)
        cout << it << " " ;
    cout << endl;

    // equivalent program using iterators instead of subscripts
    vector<unsigned> alt_scores(11, 0);  // 11 buckets, all initially 0
    // for each grade in the input
    for (auto it = grades.begin(); it != grades.end(); ++it) {
        unsigned i = *it;
        // increment the counter for the current cluster
        ++(*(alt_scores.begin() + i/10));
    }

    cout << "alt_scores.size = " << alt_scores.size() << endl;
    for (auto it = alt_scores.begin(); it != alt_scores.end(); ++it)
        cout << *it << " " ;
    cout << endl;

}
*/

/*exercise 3.27
int main()
{
    int ia[4*7 - 14];
    unsigned b = 1024;
    int a[b];
    cout << 2 << endl;
}
*/

/*arrayscore
int main()
{
    unsigned scores[11] = {};
    unsigned grade;
    while (cin >> grade)
        if (grade <= 100)
            ++scores[grade/10];
    for (auto it : scores)
        cout << it << " " ;
    cout << endl;
}
*/

/*exercise 3.30
int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix < array_size; ++ix){
        ia[ix] = ix;
    }
}
*/

/*exercise 3.31
int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix < array_size; ++ix){
        ia[ix] = ix;
            cout << ia[ix] << " ";
    }
    cout << endl;
}
*/

/*exercise 3.32.1
int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size], ib[array_size];
    for (size_t ix = 0; ix < array_size; ++ix){
        ia[ix] = ix;
        ib[ix] = ia[ix];
            cout << ia[ix] << " " << ib[ix] << " ";
    }
    cout << endl;
}
*/

/*exercise 3.32.2
int main()
{
    vector<int> array;
    for (int i = 0; i != 10; i++){
        array.push_back(i);
        cout << array[i] << " ";
    }
    cout << endl;
    vector<int> array1 = array;
    for (auto i : array1)
        cout << i << " ";
    cout << endl;
}
*/

/*exercise 3.35
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *p = arr;
    for (int i = 0; i < 10; ++i){
        p[i] = 0;
    }
    for (auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}
*/

/*exercise 3.36.1
int main()
{
    char a[] = {'C','+','+','\0'}, b[] = "C++";
    char *bega = begin(a), *begb = begin(b);
    char *lasta = end(a), *lastb = end(b);
    auto na = end(a) - begin(a), nb = end(b) - begin(b);
    if ((*bega == *begb) && na == nb)
    {
        if (bega != lasta){
            ++bega, ++begb;
        }
        cout << "good time~~~ they are equal" << endl;
    }
    else
        cout << "bad time### they are difference" << endl;
}
*/

/*exercise 3.36.2
int main()
{
    vector<int> a(10, 42), b(10, 42);
    if (a == b)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
*/

/*exercise 3.37
int main()
{
    const char ca[] = {'h','e','l','l','o','\0'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp;
        ++cp;
    }
    cout << endl;
}
*/

/*exercise 3.39
int main()
{
    string s1("balabala"), s2("debadeba");
    if (s1 < s2)
        cout << "spalash" << endl;
    const char c1[] = "aishasha", c2[] = "yanyuan";
    if (strcmp(c1, c2) < 0)
        cout << "Ooh that's it C" << endl;
}
*/

/*exercise 3.40
int main()
{
    const char c1[] = "balabala energy", c2[] = "boom~~ blingbling";
    char c3[34];
    strcpy(c3, c1);
    strcat(c3, " ");
    strcat(c3, c2);
    char *str = c3;
    while (*str){
        cout << *str;
        ++str;
    }
    cout << endl;
}
*/

/*exercise 3.41
int main()
{
    int arr[] = {0,1,2,3,4,5};
    vector<int> object(begin(arr), end(arr));
    for (auto i : object)
        cout << i << " ";
    cout << endl;
}
*/

/*exercise 3.42
int main()
{
    vector<int> vec{1,2,3,4,5};
    int arr[5];
    for (auto i : vec)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/

/*exercise 3.43.1
int main()
{
    int ia[3][4] ={0,1,2,3,4,5,6,7,8,9,10,11};
    //constexpr size_t row = 3, col = 4;
    for (int (&row)[4] : ia){
        for (size_t col : row)
            cout << col << " ";
    }
    cout << endl;
}
*/

/*exercise 3.43.2
int main()
{
    int ia[3][4] ={0,1,2,3,4,5,6,7,8,9,10,11};
    constexpr size_t row = 3, col = 4;
    for (size_t i = 0; i != row; ++i){
        for (size_t j = 0; j != col; ++j)
            cout << ia[i][j] << " ";
    }
    cout << endl;
}
*/

/*exercise 3.43.3
int main()
{
    int ia[3][4] ={0,1,2,3,4,5,6,7,8,9,10,11};
    for (int(*p)[4] = begin(ia); p != end(ia); ++p){
        for (int *q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";
    }
    cout << endl;
}
*/
