#include <iostream>
#include "objects.h"
#include "function.h"

using namespace std;
using namespace objects_r;
using namespace func_r;

int main()
{
    setlocale (LC_ALL, "Rus");
    Cat_Cl j;
    string color_Str = "black";
    j.set_color(&color_Str);
    j.get_color();
    j.says_meow();
    j.cat_says_time();


//    system("pause");
    return 0;
}
