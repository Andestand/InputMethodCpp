#include<iostream>

using namespace std;

string input(string text) {
    setlocale(LC_ALL, "Russian");
    string text_;
    cout << text;
    cin>> text_;
    return text_;
}