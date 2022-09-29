#include <iostream>
using namespace std;
class student
{
protected:
  string name;
  int roll;

public:
  void setname()
  {
    string a;
    cout << "Enter the name : " << endl;
    cin >> a;
    name = a;
  }
  void setroll()
  {
    int d;
    cout << "Enter the roll no : ";
    cin >> d;
    roll = d;
  }
  int getroll()
  {
    return roll;
  }
  string getname()
  {
    return name;
  }
};

class test : public student
{
protected:
  int marks;

public:
  void read()
  {
    int f;
    cout << "Enter marks : ";
    cin >> f;
    marks = f;
  }
};

class sport
{
protected:
  int score;

public:
  void read()
  {
    int x;
    cout << "Enter the marks :";
    cin >> x;
    score = x;
  }
};

class result : public test, public sport
{
  int total;

public:
  void calculate()
  {
    total = marks + score;
  }
  int gettotal()
  {
    return total;
  }
};

int main()
{
  result r;
  r.setname();
  r.setroll();
  r.test::read();
  r.sport::read();
  r.calculate();
  cout << "The total score is " << r.gettotal() << endl;
}
