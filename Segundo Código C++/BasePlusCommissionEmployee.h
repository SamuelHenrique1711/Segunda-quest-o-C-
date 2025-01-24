#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // classe string padrão C++
using std::string;

class BasePlusCommissionEmployee
{
public:
    // Construtor
    BasePlusCommissionEmployee(const string &first, const string &last,
                               const string &ssn, double sales = 0.0, double rate = 0.0, double salary = 0.0);

    // Métodos de acesso (setters e getters)
    void setFirstName(const string &); // configura o nome
    string getFirstName() const; // retorna o nome

    void setLastName(const string &); // configura o sobrenome
    string getLastName() const; // retorna o sobrenome

    void setSocialSecurityNumber(const string &); // configura o SSN
    string getSocialSecurityNumber() const; // retorna o SSN

    void setGrossSales(double); // configura a quantidade de vendas brutas
    double getGrossSales() const; // retorna a quantidade de vendas brutas

    void setCommissionRate(double); // configura a taxa de comissão
    double getCommissionRate() const; // retorna a taxa de comissão

    void setBaseSalary(double); // configura o salário-base
    double getBaseSalary() const; // retorna o salário-base

    double earnings() const; // calcula os rendimentos
    void print() const; // imprime o objeto BasePlusCommissionEmployee

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;     // vendas brutas semanais
    double commissionRate; // porcentagem da comissão
    double baseSalary;     // salário-base
};

#endif // BASEPLUS_H
