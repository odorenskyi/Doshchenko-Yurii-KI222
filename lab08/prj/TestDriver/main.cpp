#include <iostream>
#include "ModulesDoshschenko.h"

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++ ){
        int x, y, z;
        float result;
        cin >> x >> y >> z;
        if (x + y == 0 || y == 0 || z == 0 ){
            cout << "bad numbers" << endl;
            continue;
        }
        cout << s_calculation(x,y,z) << endl;
        cin >> result;
        if (result == s_calculation(x,y,z)){
            cout << "passed" << endl;
        }
        else {
            cout << "failed" << endl;
        }
    }
    return 0;
}
