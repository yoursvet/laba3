#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num = 0;
    int i;
    string str, s;
    ifstream file;
    file.open("f1.txt");
    cout << "Enter your string: ";
    cin >> s;
    while (!file.eof()) {
        num++;
        getline(file,str);
        i = str.find(s);
        if (i != -1)
        {
            cout << num << endl;
        }


    }
    file.close();
    return 0;


}