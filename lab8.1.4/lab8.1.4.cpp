#include <iostream> 

#include <string> 

using namespace std;



int Count(const string s, const string substr)
{
    size_t pos = 0;
    int k = 0;
    while ((pos = s.find(substr, pos)) != -1)
    {
        k++;
        pos++;
    }
    return k;
}

string Replace(string& str)

{

    while (str.find("abc") != -1)

        str = str.replace(str.find("abc"), 3, "**");


    return str;

}

int main()

{

    string str;
    string s = "abc";

    cout << "Enter string:" << endl;

    getline(cin, str);

    cout << Count(str, s) << endl;

    cout << Replace(str) << endl;

    cout << endl;

}