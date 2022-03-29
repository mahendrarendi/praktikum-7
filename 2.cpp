#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int MAXSTACK;
typedef int itemtype;

typedef struct {
	itemtype item[300];
	int count;
}stack;

void initializestack(stack *s) {
	s->count = 0;
}

int empty(stack *s) {
	return (s->count == 0);
}

int full(stack *s) {
	return (s->count == MAXSTACK);
}

void push(itemtype x, stack *s) {
	if(full(s))
		printf("stack penuh !\n");
	else {
		s->item[s->count]=x;
		++(s->count);
	}
}

int pop(stack *s) {
	if(empty(s))
		printf("stack kosong\n");
	else {
		--(s->count);
		return (s->item[s->count]);
	}
	return 0;
}

//deklarasi
int i, n, m, o,p,choose;
int num;
stack tumpukan;
void biner();
void oktal();
void heksa();
main() {
	cout<<"=======konversi desimal to biner oktal dan heksadesimal======"<<endl;
	initializestack(&tumpukan);
	cout<<endl;
	cout<<"masukkan bilangan desimal = "; cin>>num;
	cout<<endl;
	cout<<"|======= Button=======|"<<endl;
	cout<<"|1. Konversi to biner |"<<endl;
	cout<<"|2. Konversi to oktal |"<<endl;
	cout<<"|3. Konversi to heksa |"<<endl;
	cout<<"|4. Exit              |"<<endl;
	while(pilih<4){
		cout<<"\nchoose :  "; cin>>choose;
	switch(choose) {
		case 1:
	 		cout<<"bilangan binernya = ";
	 		biner();break;
		case 2:
	 		cout<<"bilangan oktalnya = ";
	 		oktal();break;
		case 3:
	 		cout<<"bilangan heksadesimalnya = ";
	 		heksa();break;
		case 4:
			cout<<"Please Enter";
		}
	}
	getch();
	return 0;
}
