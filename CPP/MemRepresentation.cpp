#include<cstdio>
#include<iostream>
using namespace std;
void showMemRepresentation(char *begin, int n){
		int i;
		for(i=0;i<n;i++)
			printf("%.2x",begin[i]);
		cout<<"\n";
}
int main()
{
	int i=0x01234567;
	showMemRepresentation((char*)&i, sizeof(i));
	return 0;
}
