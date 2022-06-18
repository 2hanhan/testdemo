#ifndef DEOM_01_H_
#define DEOM_01_H_

#include <iostream>
using namespace std;

template <class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age)
    {
        std::cout << "h文件内构造函数："
                  << "<T1,T2>" << std::endl;
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson();
    // {
    //     std::cout << "h文件内函数：" << std::endl;
    //     cout << "姓名:" << this->m_Name << endl;
    //     cout << "年龄:" << this->m_Age << endl;
    // }

    T1 m_Name;
    T2 m_Age;
};
#endif