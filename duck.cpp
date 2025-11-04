#include "duck.h"

void Duck::performFly(){
    if(flyBehavior) 
        flyBehavior -> fly();
    else 
        cout<<"(No fly behavior set)" <<endl;
}

void Duck::performQuack(){
    if(quackBehavior) 
        quackBehavior -> quack();
    else 
        cout << "(No quack behavior set)" << endl;
}

void Duck::setFlyBehavior(FlyBehavior* fb){
    if(flyBehavior) 
        delete flyBehavior;
    flyBehavior = fb;
}
    
void Duck::setQuackBehavior(QuackBehavior* qb){
    if(quackBehavior) 
        delete quackBehavior;
    quackBehavior = qb;
}


MallardDuck::MallardDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}
RedheadDuck::RedheadDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}

RubberDuck::RubberDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new Squeak();
}

DecoyDuck::DecoyDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}
ModelDuck::ModelDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}