#include<iostream>
#include"point.h"
int main()
{
    char a;
    std::cout << "Bonjour" << std::endl;
    point* mourmansk = new point(-124, 233);
    std::cout << mourmansk->getx() << " " << mourmansk->gety();
    std::cin >> a;
    std::cout << a << std::endl;
}