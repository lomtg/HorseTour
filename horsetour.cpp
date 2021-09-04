#include <iostream>
using namespace std;
int a[8][8],k;

int dr[8]={-2,-1,1,2,2,1,-1,-2};
int dc[8]={1,2,2,1,-1,-2,-2,-1};

void print(){
	
	int i,j;
	
	for(i=0;i<8;i++){
		for(j=0;j<=7;j++)
		cout<<a[i][j]<<"  ";
		cout<<endl;
	}

}

void horse(int n, int m, int z){

	if(z>=64){
	print();
	system("pause");
			}
	
//	print();
//	system("pause");
	for(int i=0;i<8;i++){
	if(n+dr[i]>=0 && n+dr[i]<8 && m+dc[i]>=0 && m+dc[i]<8)	
		if(a[n+dr[i]][m+dc[i]]==0) {
		a[n+dr[i]][m+dc[i]]=z+1;
		horse(n+dr[i],m+dc[i],z+1);		
	}	

}

	a[n][m]=0;

}

main(){
	
	a[0][0]=1;
	
	horse(0,0,1);

}		
