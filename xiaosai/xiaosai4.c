/*************************************************************************
  > File Name: xiaosai4.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月23日 星期六 13时28分51秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char stack[51];int stack1[51];int top=-1,top1=-1;char queue[50];int queue1[50];int front=49,front1=49,rear=49,rear1=49,num=0,num1=0,stackNum=0;
int stackNum1=0;
int operation(char c,int a,int b){
	if(c=='+'){
		return a+b;	
	}else if(c=='-'){
		return a-b;	
	}else if(c=='/'){
		return a/b;
	}else if(c=='*'){
		return a*b;
	}

}
int priority(char op){ 
	{
		switch(op)  {
			case '-':
			case '+':
			case '*':
			case '/':return(2);
		}
	}
	return 0;
}
int mutl(char a,int n){
	int i,c=1;
	for(i=0;i<n-1;i++){
		c=c*10;
	}
    int b=a-48;	
	b=b*c;
	return b;
}
void push(char a){
	top++;
	stackNum++;
	stack[top]=a;
}
void push1(int a){
	top1++;
	stackNum1++;
	stack1[top1]=a;
}
char pop(){
	char a=stack[top];
	top--;
	stackNum--;
	return a;
}
int pop1(){
	int a=stack1[top1];
	top1--;
	stackNum1--;
	return a;
}
void in(char a){
	queue[rear]=a;
	rear--;
	num++;
}
void in1(int a){
	queue1[rear1]=a;
	rear1--;
	num1++;
}
char out(){
	char a=queue[front];
	front--;
	num--;
	return a;
}
int out1(){
	int a=queue1[front1];
	front1--;
	num1--;
	return a;
}
int xuanze(char oper){
	if(oper=='+'){
		return 0-4; 
	}else if(oper=='-'){
		return 1-4; 
	}else if(oper=='*'){
		return 2-4; 
	}else if(oper=='/'){
		return 3-4;
	}

}
int main(){
	char input[50];int j=0,sum=0;char oper[]={'+','-','*','/'};int result=0;
	while(scanf("%s",input)!=EOF){
		j=0;sum=0;front1=49;front=49;rear=49;rear1=49;top=-1;top1=-1;result=0;
		if(input[0]=='-'|| input[0]=='+'){
		   in1(0);
		}
		while(input[j]!='\0'){
			if(input[j]>='1' && input[j]<='9'){
				in(input[j]);
			}else{
				sum=0;
				while(num>0){
					sum+=mutl(out(),num);
				}
				front=49;rear=49;
				if(sum>0){
					in1(sum);
				}
				char mm=input[j];char t;
				switch(mm){
					case '(':push(mm);break;
					case ')':do{
								 t=pop();
								 if(t!='(' && top!=-1)in1(xuanze(t));
							 }while(t!='(' && top!=-1);break;
					case '+':
					case '-':
					case '*':
					case '/':
							 while(priority(mm)<=priority(stackNum>0?stack[stackNum-1]:0)){
								 t=pop();in1(xuanze(t));
							 }
							 push(mm);break;
				}
			} 
			j++;
		}
		sum=0;
		while(num>0){
			sum+=mutl(out(),num);
		}
		if(sum>0){
			in1(sum);
		}
		while(stackNum>0){
			in1(xuanze(pop()));
		}
		int z;
		if(num1==1){
	       printf("%d\n",out1())	;
		   continue;
		}
		while(num1>0){
			z=out1();
			if(z>0){
				push1(z);	
			}else{
				result=operation(oper[z+4],pop1(),pop1());
				push1(result);
			}
		}

		printf("%d\n",result);
	}
	return 0;
}
