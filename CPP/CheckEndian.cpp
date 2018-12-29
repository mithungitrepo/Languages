#include<iostream>
using namespace std;
int main(){
	unsigned int i=1;
	char *ch=(char *)&i;
	if(*ch)
		cout<<"Little Endian"<<endl;
	else
		cout<<"Big Endian"<<endl;
	return 0;
}
