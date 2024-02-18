#ifndef OBJECTS_H_INCLUDED
#define OBJECTS_H_INCLUDED
#include <iostream>
#include "function.h"
namespace objects_r
{
    class Animal_Cl{
    protected:
        std::string color_Str_;
        std::string word_Str_;
    public:
        Animal_Cl();
    };

    class Cat_Cl : public Animal_Cl{
    private:
        std::string cat_breed_Str;
        std::string cat_name_Str;
    public:
        Cat_Cl();
        void says_meow();
        void set_color(std::string const& color_Str);
        void get_color();
        void cat_says_time();
    };
}
#endif // OBJECTS_H_INCLUDED
