#include <iostream>
#include "objects.h"
#include "function.h"

using namespace std;
using namespace objects_r;
using namespace func_r;

int main()
{
    //setlocale (LC_ALL, "Rus");
    Cat_Cl j;
    string const color_Str = "black";
    j.set_color(color_Str);
    j.says_meow();
    j.get_color();


//    system("pause");
    return 0;
}
