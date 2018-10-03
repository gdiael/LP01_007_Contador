#include <iostream>
#include "contador.h"

int main()
{
    // teste para tipo int
    Contador<int> cont1;

    cont1.addNovo(1);
    cont1.addNovo(2);
    cont1.addNovo(3);
    auto res1 = cont1.getTotal();

    std::cout << "O teste para o tipo <int> tem que retornar 6:" << std::endl;
    std::cout << res1 << std::endl;

    // teste para tipo double
    Contador<double> cont2;

    cont2.addNovo(7.0);
    cont2.addNovo(8.0);
    cont2.addNovo(9.2);
    auto res2 = cont2.getTotal();

    std::cout << "O teste para o tipo <double> tem que retornar 24.2:" << std::endl;
    std::cout << res2 << std::endl;

    // teste para tipo std::string
    Contador<std::string> cont3;

    cont3.addNovo("Nao ");
    cont3.addNovo("deu ");
    cont3.addNovo("certo!");
    auto res3 = cont3.getTotal();

    std::cout << "O teste para o tipo <string> tem que retornar 14:" << std::endl;
    std::cout << res3 << std::endl;

    return 0;
}

