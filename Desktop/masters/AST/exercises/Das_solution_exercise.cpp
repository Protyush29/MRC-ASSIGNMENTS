#include <iostream>
#include <algorithm>  
using namespace std;
void divide()
{
	cout<<"Entering the 2nd problem"<<endl;
	int first_var=1024;
	while (first_var>0)
	{
		cout<<first_var<<endl;
		first_var/=2;
	}
	cout<<endl<<endl;

}
void super_tictactoe()
{
	cout<<"super_tictactoe"<<endl;
	int rows=18;
	for(int i=1;i<rows;i++)
	{
		if (i%2==0 && i!=6 && i!=12) cout<<"--+--+--H--+--+--H--+--+--"<<endl;
		else if (i==6 || i==12) cout<<"========+========+========"<<endl;
		else cout<<"  |  |  H  |  |  H  |  |  "<<endl;
	}
	cout<<endl<<endl;
}
void tictactoe()
{
	cout<<"tictactoe"<<endl;
	int rows=6;
	for(int i=1;i<rows;i++)
	{
		if (i%2==0) cout<<"--------"<<endl;
		else cout<<"  |  |"<<endl;
	}
	cout<<endl<<endl;
}

void natural_number()
{
	int natural=1001,sum=0;
	while (natural>0)
	{
		if (natural%3==0 || natural%5==0)
		{
		    sum+=natural;
		    
		}
		natural--;
	
	}
	cout<<"sum of multiples of 3 or 5 uptil 1001="<<sum<<endl;
	cout<<endl<<endl;
	
}

void Collatz_sequence()
{ 
	int limit=1000,count=0,array_of_count[1000];
	for (int j=0;j<1000;j++)
	{
		while (limit>1)
		{
			if (limit%2==0) limit=limit/2;
			else limit=3*limit + 1;
			count++;
		}
		array_of_count[j]=count;
		count=0;
	}
	cout<<"maximum chain length="<< *std::max_element(array_of_count,array_of_count+1000)<<endl;
	cout<<endl<<endl;
	
}

void conversion()
{
	int Centigrade,Farenheit=0;
	cout<<"Enter Fareheit Temperature"<<endl;
	cin>>Farenheit;
	Centigrade=5*(Farenheit-32)/9;
	cout<<"Temperature in Centigrade="<<Centigrade<<endl;
	cout<<"The end.";
 	cout<<endl<<endl;
}

void compare()
{
	int first_var,second_var=0;
	cout<<"Enter 2 variables"<<endl;
	cin>>first_var>>second_var;
	cout<<"if else return"<<endl;
	if (first_var>second_var) cout<<"First is greater"<<endl;
	if (first_var==second_var) cout<<"Both are equal"<<endl;
	if (first_var<second_var) cout<<"Second is greater"<<endl; 
	cout <<"nested conditional"<<endl;
 	if (first_var>second_var) cout<<"First is greater"<<endl;
	else if (first_var==second_var) cout<<"Both are equal"<<endl;
	else cout<<"Second is greater"<<endl; 
	cout <<"switch case output not possible"<<endl;
	
	cout<<endl<<endl;
	
}
void conditional()
{
	cout<<"Hello User"<<endl;
	compare();
	divide();
	tictactoe();
	super_tictactoe();
	natural_number();
	Collatz_sequence();
	conversion();
}
int main()
{
	conditional();
	return 0;
}
