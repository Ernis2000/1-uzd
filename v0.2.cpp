#include<iostream>
#include<string>

int main()
{
    int n,m;
    std::string vardas, sveik, eilute2, eilute3, eilute4, eilute5, tarpas = " ";
    std::cout<<"Iveskite varda"<<std::endl;
    std::cin>>vardas;
    int dydis=vardas.size();
    if(*vardas.rbegin()=='s')
    {
        sveik="Sveikas, ";
        n=14;
        m=12;
    }
    else{

        sveik="Sveika, ";
        n=13;
        m=11;
    }
    std::string eilute1(dydis+n, '*'), tarpai(m+dydis, ' ');
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
