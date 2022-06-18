#include <demo01.h>

//! 这个类外的实现会编译报错
// template <class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age)
// {
//     this->m_Name = name;
//     this->m_Age = age;
// }

// 这个对模板指定了数据类型，不会报错
template <>
Person<std::string, int>::Person(std::string name, int age)
{
    std::cout << "分文件构造函数："
              << "<string,int>" << std::endl;
    this->m_Name = name;
    this->m_Age = age;
}

template <>
Person<int, int>::Person(int name, int age)
{
    std::cout << "分文件构造函数："
              << "<int,int>" << std::endl;
    this->m_Name = name;
    this->m_Age = age;
}



template <>
void Person<std::string, int>::showPerson()
{
    cout << "姓名:" << this->m_Name << endl;
    cout << "年龄:" << this->m_Age << endl;
}

template <>
void Person<int, int>::showPerson()
{
    std::cout << "分文件内函数："
              << "<int,int>" << std::endl;
    cout << "姓名:" << this->m_Name << endl;
    cout << "年龄:" << this->m_Age << endl;
}

template <>
void Person<string, string>::showPerson()
{
    std::cout << "分文件内函数："
              << "<string, string>" << std::endl;
    cout << "姓名:" << this->m_Name << endl;
    cout << "年龄:" << this->m_Age << endl;
}