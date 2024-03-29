1) What is the return type of a method that does not returns any value ?
   Ans:- void
   
  
************************************************************************************************************************************************************************
   
2) Let’s say the problem is - You will be given two numbers(both integers) and you need to return their sum.
   For this problem, what should be the return type of function
   Ans:- int
 
***********************************************************************************************************************************************************************
   
3) What will be the output of following code ?
   void func(int a, int b)
   {
     cout << (a + b);
   }

   int main() 
   {
     int a = 7;
     func(a, 12);
   }

  Ans:- 19
    
***********************************************************************************************************************************************************************

4) What will be the output of the following code ?
  void demo(int a, int b)
  {
    cout << a << " " << b;
  }

  int main()
  {
    int a = 5;
    int b = 15; 
    demo(a);
  }

  Ans:- Compilation Error
  
**********************************************************************************************************************************************************************

5) Will following code generate any error ?
  #include <iostream>
  using namespace std;
  void func(int a)
  {
    int b = a;
    b = b + 10;
  }

  int main() 
  {
    int a = 10;
    func(a);
    cout << b << endl;
  }

  Ans:- Yes
  
*********************************************************************************************************************************************************************

6) Will following code generate any error ?
  #include <iostream>
  using namespace std;
  void func(int a)
  {
    int b = 10;
    a = b + 10;
    cout << a << " ";
  }

  int main() 
  {
    int a = 10;
    func(a);
    cout << a << " ";
  }

  Ans:- No
  
*********************************************************************************************************************************************************************

7) What will be the output of the following code ?
  void doubleValue(int a) 
  {
    a = a * 2;
  }
  int main() 
  {
    int a = 8;
    doubleValue(a);
    cout << a;
  }

  Ans:- 8
    
    
**********************************************************************************************************************************************************************

9) What will be the output of the following code ?
  int func(int a)
  {
    a += 10;
    return a;
  }

  int main() 
  {
    int a = 5;
    func(a);
    cout << a;
  }

  Ans:- 5
    
    
**********************************************************************************************************************************************************************

