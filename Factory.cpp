#include <Factory.h>
#include <ConcreteProductA.h>
#include <ConcreteProductB.h>

Product* Factory:: createProduct(string proname){
    if( "A" == proname){
        return new ConcreteProductA();
    }
    else if{
        return new ConcreteProductB();
    }
    return NULL;
}

