#include<iostream>
#include<string>

int main()
{
    std::string vardas, sveik="Sveikas, ", eilute2, eilute3, eilute4, eilute5, tarpas = " ";
    std::cout<<"Iveskite varda"<<std::endl;
    std::cin>>vardas;
    int dydis=vardas.size();
    std::string eilute1(dydis+14, '*'), tarpai(12+dydis, ' ');
    eilute2= "*" + tarpai + "*";
    eilute3= "*" + tarpas + sveik + vardas + "!" + tarpas + "*";
    eilute4=eilute2;
    eilute5=eilute1;
    std::cout<<eilute1<<std::endl;
    std::cout<<eilute2<<std::endl;
    std::cout<<eilute3<<std::endl;
    std::cout<<eilute4<<std::endl;
    std::cout<<eilute5<<std::endl;






return 0;
}

