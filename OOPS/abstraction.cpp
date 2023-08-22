#include <iostream>
using namespace std;

class Animal {
   private:
      int age;
      virtual void makeSound() = 0;
   public:
      void setAge(int a) {
         age = a;
      }
      int getAge() {
         return age;
      }
      
};

class Cat: public Animal {
   public:
      void makeSound() {
         cout << "Meow" << endl;
      }
};

int main() {
   Cat c;
   c.setAge(3);
   cout << "The cat is " << c.getAge() << " years old." << endl;
   c.makeSound();
   return 0;
}

