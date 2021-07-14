#include <string>

#include <iostream>

using namespace std;

struct STUDENT

{
    int age;
    string name;
    void move() {
        cout << name << " is moving" << endl;
    }
};


class Person
{
public://является спецификатором доступа (access specifier), то есть определяет параметры доступа к членам класса - переменным и функциям.
    //По сути спецификатор public определяет общедоступный интерфейс класса.
    int age;
     string name;
  //  int& ageRef;const string name;
    /*    Этот класс не будет компилироваться, так как здесь есть две ошибки - отсутствие инициализации константы name и ссылки ageRef.
         Хотяя их значения устанавливаются в конструкторе, но к моменту, когда код инструкции из тела конструктора начнут выполняться, константы и ссылки уже должны быть инициализированы.
         И для этого необходимо использовать списки инициализации .
         Списки инициализации представляют перечисления инициализаторов для каждой из переменных и констант через двоеточие после списка параметров конструктора
         */



    Person(string n, int a);
    void move();
private:
    string name1;
    int age1;
};
Person::Person(string n, int a)
{
    name = n; age = a;
}
void Person::move()
{
    cout << name << " is not moving" << endl;
}
   /*  Person(string n) : name(n), age(18), ageRef(age)
    {
    }

   // string name;
    //int age;
   /* Person(string n, int a) // КОНСТРУКТОР
    {
        name = n; age = a;//Конструктор представляет функцию, которая может принимать параметры и которая должна называться по имени класса. 
        //В данном случае конструктор принимает два параметра и передает их значения полям name и age.
    }
   
    void move()// Обычная ункция
    {
        cout << name << " is not moving" << endl;
    }
    */

class Person2
{
public:
    std::string name2;       //  имя
    int age2;                // возраст
    void display2()
    {
        std::cout << "Name: " << name2 << "\tAge: " << age2 << std::endl;
    }
};
class Employee : public Person2//Наследование
{
public:
    std::string company;    // компания
};

int main()
{
    Person2 tom;
    tom.name2 = "Tom";
    tom.age2 = 23;
    tom.display2();

    Employee bob;
    bob.name2 = "Bob";
    bob.age2 = 31;
    bob.company = "Microsoft";
    bob.display2();






    STUDENT student;
    STUDENT* ptr = &student;
    ptr->name = "John";
    ptr->age = 42;
    cout << "Name: " << ptr->name << "\tAge: " << ptr->age << endl;
    ptr->move();


   
  /*  Person person = Person("Tom", 22);
    // или Person person("Tom", 22);
    cout << "Name: " << person.name << "\tAge: " << person.age << endl;
    person.name = "Bob";
    person.move();
    */
    // string personName = tom.name;    // ошибка - переменная name закрытая
    Person Jack("Tom", 22);
    cout << "Name: " << Jack.name << "\tAge: " << Jack.age << endl;
    Jack.move();
    return 0;

    return 0;

 
    return 0;

}
/*В классах есть наследование*/
/*Структуры по умолчанию являются открытыми (public). Тогда как в классе все его члены, для которых не указан спецификатор доступа, являются закрытыми (private).*/
/*Когда использовать структуры? Как правило, структуры используются для описания таких данных, которые имеют только набор публичных атрибутов - открытых переменных.
Иногда подобные сущности еще называют аггрегатными классами (aggregate classes).*/