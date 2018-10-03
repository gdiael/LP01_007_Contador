#ifndef CONTADOR_H
#define CONTADOR_H
#define ELEMENTOS_MAX 100

#include <string>

template <typename T>
class Contador{
private:
    T m_elementos[ELEMENTOS_MAX];
    int m_quant;
public:
    Contador();
    Contador(T first);
    Contador(T *arg[]);
    void addNovo(T novo);
    T getTotal();
};

template <typename T>
Contador<T>::Contador(){
    m_quant = 0;
}

template <typename T>
Contador<T>::Contador(T novo){
    m_quant = 0;
    this->addNovo(novo);
}

template <typename T>
void Contador<T>::addNovo(T novo){
    m_elementos[m_quant++] = novo;
}

template <typename T>
T Contador<T>::getTotal(){
    T res = 0;
    for(int i = 0; i < m_quant; i++){
        res += m_elementos[i];
    };
    return res;
}

template <>
std::string Contador<std::string>::getTotal(){
    int res = 0;
    for(int i = 0; i < m_quant; i++){
        res += m_elementos[i].size();
    };
    return std::to_string(res);
}

#endif