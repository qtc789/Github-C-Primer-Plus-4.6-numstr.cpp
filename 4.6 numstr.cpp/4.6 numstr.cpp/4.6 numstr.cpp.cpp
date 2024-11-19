// 4.6 numstr.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    using namespace std;
    cout << "what year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "what is its street address?\n";
    char address[80];
    cin. getline(address, 80);
    cout << "year built;    " << year << endl;
    cout << "address;    " << address << endl;

    
}
