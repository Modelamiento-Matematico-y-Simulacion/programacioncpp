#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double x1, y1, x2,y2;
    double distance;

    std::cout<<"Calcula la distancia entre dos puntos"<<std::endl;
    std::cout<<"Ingrese la coordenada x1"<<std::endl;
    cin>>x1;
    std::cout<<"Ingrese la coordenada y1"<<std::endl;
    cin>>y1;
    std::cout<<"Ingrese la coordenada x2"<<std::endl;
    cin>>x2;
    std::cout<<"Ingrese la coordenada y2"<<std::endl;
    cin>>y2;

    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    std::cout<<"La distancia es: "<<distance<<std::endl;

}
