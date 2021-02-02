#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

#include<algorithm>
void shuffle(int *w,int *x,int *y,int *z){

	int *arr[] = {w,x,y,z};
	
	int a = rand()%4;
	int b = -1, c = -1, d = -1;
	
	do{
		b = rand()%4;
	}while(b == a);
	do{
		c = rand()%4;
	}while(c == a || c == b);
	do{
		d = rand()%4;
	}while(d == a || d == b || d == c);

	swap(*(arr[a]),*(arr[b]));
	swap(*(arr[c]),*(arr[d]));

	return;
}