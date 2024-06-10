#include<iostream>
void order(int a, int b, int c){
    if(a<b & b< c)
        std::cout<<"El orden es "<<a<<","<<b<<","<<c<<std::endl;      
    if(a<c & c< b)
        std::cout<<"El orden es "<<a<<","<<c<<","<<b<<std::endl;
    if(b<a & a< c)
        std::cout<<"El orden es "<<b<<","<<a<<","<<c<<std::endl;
    if(b<c & c< a)
        std::cout<<"El orden es "<<b<<","<<c<<","<<a<<std::endl;
    if(c<a & a< b)
        std::cout<<"El orden es "<<c<<","<<a<<","<<b<<std::endl;
    if(c<b & b< a)
        std::cout<<"El orden es "<<c<<","<<b<<","<<a<<std::endl;
}
int main(int argc, char *argv[]){
    //argc:  Permite conocer el número de argumentos pasados por la línea de comandos
    //argv:  Es un array con los argumentos pasados en la línea de comandos
    std::cout<<"El numero de argumentos en la línea de comandos es = "<<argc<<std::endl;
    std::cout<<"Los argumentos son: "<<std::endl;
    for (int index = 0;index <argc; index++){
        std::cout<<argv[index]<<std::endl;
    }
    std::cout<<"Vamos a ordenar tres números"<<std::endl;
    int a=2,b=3,c=4;
    order(a,b,c);
    a=8; b=1; c=4;
    order(a,b,c);
    a=4; b=10; c=2;
    order(a,b,c);
    return 0;
}