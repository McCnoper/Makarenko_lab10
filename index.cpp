#include <iostream>
#include<regex>

using namespace std;

int main()
{
    cout <<"Введіть час у форматі HH:MM (24-годинний формат)."<<endl;
    string tm;
    cin>>tm;
    regex pattern(R"(^([01]+\d|2[0-3]):([0-5]\d)$)");
    if (regex_match(tm,pattern)){
        cout <<"Правильно введений час"<<endl;
    }else{
        cout <<"Не правильно введений час"<<endl;
    }
}
