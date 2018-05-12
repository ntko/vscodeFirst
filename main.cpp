#include <iostream>
using namespace std
;

class firstClass
{
public:
  firstClass()
  {
    m_inti = 10;
  }
  int get_int()
  {
    return m_inti;
  }
  void set_intM3(int i)
  {
    m_inti = i * 3;
  }

private:
  int m_inti;
};

int main()
{
  firstClass fc;

  cout << "ok ok ok! m_inti=" << fc.get_int() << endl;

  fc.set_intM3(20);

  cout << "ok ok ok! m_inti=" << fc.get_int() << endl;

  return 0;
}
