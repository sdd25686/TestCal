#include<iostream>
#include<string>
using namespace std;
void main(){
	int round,num1,num2,sum=0;
	int	total[10];
	string str="";
	cin>>round;
	for(int i=0; i<round; i++){
		cin>>num1>>num2;
		if(num1 > num2)
			total[i] = num1;
		else
			total[i] = num2;
	}
	cout << "Result = ";
	for(int a=0;a<round; a++){
		cout << total[a];
		if(a != round-1)
			cout<<"+";
		sum += total[a];
	}
	cout<<"="<<sum<<endl;
	
	system("pause");
}