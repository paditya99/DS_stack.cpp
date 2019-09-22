#include<iostream>
#define MAX 20
using namespace std;

template <class T>
class stack{
	T top;
	T data[MAX];

public:

	stack(){
		top= -1;
    }

	void push(T elem);
	void pop();
	bool isempty();
	T topelement();
	void display();
};


template <class T>
void stack<T>::display(){
    cout<<endl;
    cout<<"THE SUM IS: ";
	while(top>=0){
		cout<<data[top];
	top--;
	}
	cout<<endl;
}


template <class T>
void stack<T>::push(T elem){
	if(top<MAX-1){
			top++;
			data[top]=elem;

	}else{
		cout<<"STACK OVERFLOW\n";
     }
}


template <class T>
void stack<T>::pop(){
	if(top<0){
		cout<<"ERROR:STACK IS EMPTY\n";
	}else{
		top--;
	}
}


template <class T>
bool stack<T>:: isempty(){
	if(top<0){return true;}
	else{return false;}
}


template <class T>
T stack<T>:: topelement(){
	 if(top<0)
     cout<<"STACK IS EMPTY\n";
     else{
     return data[top];
	}
}

template <class T>
stack<T> sum(stack<T> s1 , stack<T> s2){
	int sum,carry=0;
	stack<T> s3;
	while((!s1.isempty())&&(!s2.isempty())){
		sum=s1.topelement()+s2.topelement()+carry;
		carry=int(sum/10);
		sum=sum%10;
		s3.push(sum);
		s1.pop();
		s2.pop();
	}
	if(!s1.isempty()){
		while(!s1.isempty()){
				sum=s1.topelement()+carry;
				carry=int(sum/10);
				sum=sum%10;
				s3.push(sum);
				s1.pop();
		}
	}else{
		while(!s2.isempty()){
				sum=s2.topelement()+carry;
				carry=int(sum/10);
				sum=sum%10;
				s3.push(sum);
				s2.pop();
		}
	}

	return s3;

}


int main(){
	int element;
	char c;
	stack<int> s1,s2,s3;
    do{
      cout<<"Enter the element of STACK 1: ";
      cin>>element;
      s1.push(element);
      cout<<"Do you want to continue? y or n? : ";
      cin>>c;
      switch(c){
         case 'n':
           cout<<"Enter the element of STACK 2: ";
           cin>>element;
           s2.push(element);
           cout<<"Do you want to continue? y or n? : ";
           cin>>c;
           switch(c){
             case 'n':
                break;
           }
      }
  }while(c=='y');



	s3 = sum(s1,s2);
	s3.display();

return 0;

}
