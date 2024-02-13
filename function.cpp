#include "function.h"
// using namespace std;

namespace func_r
{
    time_t unix_time_now_Tt(){
        time_t time_now_unix_Tt;
        time_now_unix_Tt = time(NULL);
        return time_now_unix_Tt;
    }

}
