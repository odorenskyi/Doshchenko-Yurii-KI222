#include <iostream>
#include "ModulesDoshschenko.h"
#include <Windows.h>

using namespace std;

string print_name(){
    return "��� ������� �";
}

bool logic(char a,char b){
    return a+1<b+3;
}

float rebut(int x, int y, int z){

    cout << "x = " << dec << x << " � �������������� ������: " << hex << x << endl;
    cout << "y = " << dec << y << " � �������������� ������: " << hex << y << endl;
    cout << "z = " << dec << z << " � �������������� ������: " << hex << z << endl;
    return s_calculation(x,y,z);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y, z;
    char a,b;
    cout << print_name() << endl;
    cin >> a >> b;
    cout << logic(a,b) << endl;
    cin >> x >> y >> z;
    cout << rebut(x,y,z) << endl;
    return 0;
}
