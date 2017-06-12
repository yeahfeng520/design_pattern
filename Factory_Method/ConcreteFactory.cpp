#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

Product* ConcreteFactoy::factoryMethod(){
    return new ConcreteProduct();
}
