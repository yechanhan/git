#include <iostream>

using namespace std;

class Animal {
 public:
  Animal() { cout << "����" << endl; }
  ~Animal() { cout << "����" << endl; }
  virtual void Cry() = 0;
};

class Cat : public Animal {
 public:
  void Cry() {
    cout << "�߿�\n";
    return;
  }
};
class Dog : public Animal {
 public:
  void Cry() {
    cout << "�۸�\n";
    return;
  }
};
class Bird : public Animal {
 public:
  void Cry() {
    cout << "±±\n";
    return;
  };
};

int main() {
  Animal *pa = new Dog;
  Animal *pb = new Bird;
  Animal *pc = new Cat;
  pa->Cry();
  pb->Cry();
  pc->Cry();
  Dog *pd = (Dog *)pa;
  pd->Cry();
  Cat *pe = (Cat *)pc;
  pe->Cry();
  Bird *pf = (Bird *)pb;
  pf->Cry();
  return 0;
}