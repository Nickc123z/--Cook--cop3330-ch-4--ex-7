/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nick Cook
 */

#include<vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> digs;

void init_vector()
{
    digs.push_back("zero");
    digs.push_back("one");
    digs.push_back("two");
    digs.push_back("three");
    digs.push_back("four");
    digs.push_back("five");
    digs.push_back("six");
    digs.push_back("seven");
    digs.push_back("eight");
    digs.push_back("nine");
}

int nums()
{
    int inp = 0;
    if (cin>>inp)
        return inp;
    cin.clear();
    string ins;
    cin >> ins;
    for (int i = 0; i<digs.size(); ++i) {
        if (digs[i]==ins)
            return i;
    }
    return(-1);
}

int main()
{
    init_vector();
    cout << "Enter two values\n";
    while (true) {
        int res1 = 0;
        int res2 = 0;
        char res3 = 0;
        res1 = nums();
        cin >> res3;
        res2 = nums();
        if (res1 == -1 || res2 ==- 1)
            cout << "Incorrect input\n";
        else {
            switch (res3) {
            case '+':
                cout << "The sum of " << res1 << " and " << res2 << " is " << res1+res2 << ".\n";
                break;
            case '-':
                cout << "The difference of " << res1 << " and " << res2 << " is " << res1-res2 << ".\n";
                break;
            case '*':
                cout << "The product of " << res1 << " and " << res2 << " is " << res1*res2 << ".\n";
                break;
            case '/':
                if (res2==0)
                    cout << "No division by zero!\n";
                else
                    cout << "The ratio of " << res1 << " and " << res2 << " is " << double(res1)/res2 << ".\n";
                break;
            case 'q':
                return 0;
            default:
                cout << "(use +, -, * or /)\n";
                break;
            }
        }
    }
}