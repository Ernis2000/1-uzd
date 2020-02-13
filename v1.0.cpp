#include<iostream>
#include<string>

int main()
{
    int n,m,tarpuskaicius,plotis;
    double padalintas, pirma, antra;
    std::string vardas, sveik, eilute2, eilute3, eilute4, eilute5, tarpas = " ";
    std::cout<<"Iveskite varda:"<<std::endl;
    std::cin>>vardas;
    std::cout<<"Iveskite norima remelio ploti(sveikasis skaicius):"<<std::endl;
    std::cin>>plotis;
    tarpuskaicius=plotis-3;
        if(tarpuskaicius % 2 == 0)
        {
          tarpuskaicius/=2;
          pirma=tarpuskaicius;
          antra=pirma;

        }
        else{
                tarpuskaicius/=2;
            padalintas=tarpuskaicius;
            pirma=padalintas-0.5;
            antra=padalintas+0.5;
        }
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
    for(int i=0; i<pirma; i++)
    {
        std::cout<<eilute2<<std::endl;
    }
    std::cout<<eilute3<<std::endl;
    for(int i=0; i<antra; i++)
    {
        std::cout<<eilute4<<std::endl;
    }
    std::cout<<eilute5<<std::endl;

return 0;
}
