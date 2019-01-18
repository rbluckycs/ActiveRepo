#include<iostream>
using namespace std;



class CopCon
{
private:
	int alpha, beta;
	char *str;
	
public:
	
	CopCon(int x,int y)
	{
		alpha=x;
		beta=y;

	}
	
	CopCon(const CopCon &obj)
	{
	}

	void operator = (const CopCon &obj)
	{
	

		cout<<"Value of alpha before Copy Const" <<alpha<<"\n";
//		cout << "Value of Beta before Copy Const"<<obj.alpha<<"\n";

	
//		beta=100;
		alpha=obj.alpha;
//		cout<<"Value of alpha before Copy Const" <<obj.beta<<"\n";
		cout << "Value of Beta after Copy Const"<<obj.alpha<<"\n";







	}

	int getALPHA()
	{	
		return alpha; }

	int getBEETA()
	{
		return beta;  }


};



int main()
{
	CopCon obj1(121, 131), obj2(1000,2000);
//cout << "Before Assignment operator Beta="<< obj1.getBEETA()<<"\n" ;
//cout << "Before Assignment operator Alpha="<< obj1.getALPHA()<<"\n" ;
		//cout<<"Value of alpha before Copy Const" <<obj2.alpha<<"\n";
obj2=obj2;

int i,j;
i=5;
cout << "i with ++ ="<<i++<<"\n";
j=++i;
cout << "i= "<<i<< " j= "<<j;
//	cout << "Value of Beeta of obj1="<<obj1.getBEETA() << "  Value of Beeta of obj2=" <<obj2.getBEETA()<< "\n";
//	cout << "Value of Alpha of obj1="<<obj1.getALPHA() << "  Value of alpha of obj2=" <<obj2.getALPHA()<< "\n";


return 0;
}



