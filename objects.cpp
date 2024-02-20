#include "objects.h"
namespace objects_r
{
    Animal_Cl::Animal_Cl(){
        color_Str_ = "";
        std::cout << "конструктор Animal" << std::endl;
    }
    Cat_Cl::Cat_Cl(){
        fur_Bl_ = true;
        cat_breed_Str = "none";
    }

    void Cat_Cl::says_meow(){
        std::cout << "Кот говорит МЯУ " << std::endl;
    }

    void Cat_Cl::set_color(std::string const& color_Str){
        color_Str_ = color_Str;
    }
    void Cat_Cl::get_color(){
        std::cout << "Кот цвета " << color_Str_ << std::endl;
    }
    void Cat_Cl::cat_says_time(){
        std::cout << "Кот говорит сейчас " << func_r::unix_time_now_Tt() << " секунд" << std::endl;
    }

}
