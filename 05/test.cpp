#include "test.h"

/*exercise 5.3
int main()
{
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to 10
    while (val <= 10)
        sum += val++;
    cout << "Sum of 1 to 10 inclusive is "
              << sum << endl;

    return 0;
}
*/

/*exercise 5.5
int main()
{
    const vector<string> grades = {"E", "D", "C", "B", "A", "A++"};
    vector<int> scores = {35, 55, 62, 78, 85, 91, 99, 100};
    string grade;
    for (int score : scores){
        if (score < 60){
            grade = grades[0];
            cout << grade << " ";
        }
        else{
            grade = grades[(score - 50)/10];
            if (score != 100){
                if (score % 10 > 7){
                    grade += '+';
                }
                else if (score % 10 < 3){
                    grade += '-';
                }
            }
            cout << grade << " ";
        }
    }
    cout << endl;
}
*/

/*exercise 5.9
int main()
{
    unsigned vowelCnt = 0, otherCnt = 0;
    char ch;
    while (cin >> ch) {
            if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'){
                ++vowelCnt;
            }
            else{
                ++otherCnt;
            }
    }
    cout << "Number of vowel is: " << vowelCnt << endl;
    cout << "Number of other is: " << otherCnt << endl;
}
*/

/*exercise 5.10
int main()
{
    // initialize counters for each vowel
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
    unsigned spaCnt = 0, excCnt = 0, newlineCnt = 0;
    char ch;
    while (cin >> ch) {
        // if ch is a vowel, increment the appropriate counter
        switch (ch) {
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i': case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            case '\n': case '\r':
                ++newlineCnt;
                break;
            case ' ':
                ++spaCnt;
                break;
            case '\v':
                ++excCnt;
                break;
            default:
                ++otherCnt;
                break;
        }
    }
    // print results
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << '\n'
         << "Number of other letter: \t" << otherCnt << '\n'
         << "Number of space: \t" << spaCnt << '\n'
         << "Number of tabs: \t" << excCnt << '\n'
         << "Number of newline: \t" << newlineCnt << endl;

    return 0;
}
*/

/*exercise 5.11
int main()
{
    // initialize counters for each vowel
    //unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
    unsigned spaCnt = 0, excCnt = 0, newlineCnt = 0;
    char ch;
    while (cin >> std::noskipws >> ch) {
        if (ch == ' '){
            ++spaCnt;
        }
        if (ch == '\n'){
            ++newlineCnt;
        }
        if (ch == '\t'){
            ++excCnt;
        }
    }
    cout << "Number of space: \t" << spaCnt << '\n'
         << "Number of tabs: \t" << excCnt << '\n'
         << "Number of newline: \t" << newlineCnt << endl;
}
*/

/*exercise 5.12
int main()
{
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;
    while (cin >> ch) {
        if (ch == 'f'){
            cin >> ch;
            switch (ch) {
                case 'f':
                    ffCnt++;
                    break;
                case 'l':
                    flCnt++;
                    break;
                case 'i':
                    fiCnt++;
                    break;
                }
        }
    }
    cout << "Number of ff: \t" << ffCnt << '\n'
         << "Number of fl: \t" << flCnt << '\n'
         << "Number of fi: \t" << fiCnt << endl;
}
*/

/*exercise 5.14
int main()
{
    string str, str1, maxstr;
    int cnt = 0, flag = 0;
    while (cin >> str){
        if (str == str1){
            ++cnt;
        }
        else{
            str1 = str;
            cnt = 1;
        }

        if (flag < cnt){
            flag = cnt;
            maxstr = str1;
        }
    }
    if (flag == 1){
        cout << "no string repeat" << endl;
    }
    else{
        cout << maxstr << " appear " << flag << " times " << endl;
    }
}
*/

/*exercise 5.17
int main()
{
    vector<int> vec1 = {0,1,1,2,6}, vec2 = {0,1,1,2,3,5,8};
    int flag = 0;
    decltype(vec1.size()) minsize;
    if (vec1.size() > vec2.size()){
        minsize = vec2.size();
    }else{
        minsize = vec1.size();
    }
    for (decltype(vec1.size()) i = 0; (vec1[i] == vec2[i] && i < minsize); ++i){
        if (i == minsize - 1){
            flag = 1;
        }
    }
    if (flag){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}
*/

/*exercise 5.19
int main()
{
    do{
        string i1, i2;
        cout << "Please enter two strings: " ;
        if (cin >> i1 >> i2){
            if (i1.size()!=i2.size()){
                string shortI = i1.size()>i2.size()?i2:i1;
                cout << "The shorter one is: " << shortI << endl;
            }
            else{
                cout << "Both are equal in length" << endl;
            }
        }
    }
    while (cin);
}
*/

/*exercise 5.20
int main()
{
    string t1, t2;
    int flag = 0;
    while (cin >> t1){
        if (t1 == t2){
            flag = 1;
            break;
        }else{
            t2 = t1;
        }
    }
    if (flag == 1){
        cout << t1 << endl;
    }else{
        cout << "no words repeat" << endl;
    }
}
*/

/*
int main()
{
    string t1, t2;
    int flag = 0;
    while (cin >> t1){
        if (isupper(t1[0]) && t1 == t2){
            flag = 1;
            break;
        }else{
            t2 = t1;
        }
    }
    if (flag == 1){
        cout << t1 << endl;
    }else{
        cout << "no words repeat" << endl;
    }
}
*/

/*section 5.6.3
int main()
{
    int i1, i2;
    while (cin >> i1 >> i2){
        try{
            if (i2 == 0) {
                throw invalid_argument("divisor cannot be zero");
            }
            cout << i1/i2 << endl;
        }catch (invalid_argument err) {
            cout << err.what()
                 << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n'){
                break;
            }
        }
    }
}
*/
