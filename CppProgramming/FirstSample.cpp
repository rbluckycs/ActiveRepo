#include<iostream>



using namespace std;


class abc
{
private:
int a,b;
char *str;
public:

abc(int, int);
~abc();
int getA();
int getB();
int sizeOfStr();

};

abc::abc(int x, int y)
{
	str=new char[12];
	str="Hello";
	a=x;
	b=y;
}

abc::~abc()
{
	str=0;
}

int abc::getA()
{

	cout <<"\n"<<"Value of String" <<str << "\n";
	return a;
}

int abc::getB()
{
	return b;
}


int abc::sizeOfStr()
{

return sizeof(str);


}
int main()
{

abc a(12,13);
cout <<"Value of A" <<a.getA();

//const int a=87;
//int *p=(int*)&a;
//const int *p=&a;
//*p++;
//*p=121;
//*p=121;
//std::cout << *p+5;
//std::cout << "\n " << "Value of A" << a;


return 0;
}
