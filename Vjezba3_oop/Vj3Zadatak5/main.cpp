#include <iostream>
#include <string>
using namespace std;

int counter(string str, string subStr) {
    int cnt = 0;
    size_t nPos = str.find(subStr);
    while (nPos != string::npos)
    {
        cnt++;
        nPos = str.find(subStr, nPos + 1);
    }
    return cnt;
}
int main()
{
	int cnt;
	string str = "this is my string that has multiple strings and has a word string";
	string findMe = "string";

    cnt = counter(str, findMe);
    cout << "Number: " << cnt << endl;
}