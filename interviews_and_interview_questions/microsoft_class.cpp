#include <cstring>
#include <iostream>

using namespace std;

class MyClass
{

  private:

    char* data;

  public:

    // Default constructor:
    MyClass()
    {
      data = new char[0];
    }

    // Custom constructor:
    MyClass(char* data_)
    {
      data = new char[strlen(data_)];
      strcpy(data, data_);
    }

    // Destructor:
    ~MyClass()
    {
      delete[] data;
    }

    // Assignment operator:
    MyClass& operator= (const MyClass &rhs)
    {
      // Check for self-assignment:
      if( this == &rhs)
      {
        return *this;
      }

      // Copy contents:
      data = new char[strlen(rhs.data)];
      strcpy(data, rhs.data);

      // Return obj:
      return *this;
    }

    // Print function:
    void display()
    {
      cout << "Data: "; 
      
      size_t size = strlen(data);
      
      for (int i=0; i<size; ++i)
      {
        cout << data[i];
      }

      cout << endl;
    }

};

int main()
{

  char data[] = "hello";

  MyClass c1, c2(data);

  c1.display();
  c2.display();

  c1 = c2;

  c1.display();
  c2.display();

  return 0;

}
