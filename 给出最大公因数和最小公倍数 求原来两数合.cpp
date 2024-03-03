#include <stdio.h>
#include<math.h>
int f(int g,int l){
	int x,y,t,min=100000;
	if(g<l) {
		t=l/g;
	for(int x=1;x<=t;x++){
		for(int y=1;y<=t;y++){
			if(x*y==t&&x+y<min)
			min=x+y;
		}
	}
	return min*g;//14 280 t=20
}
    if(l<g){
    	t=g/l;
    	for(int x=1;x<=t;x++){
		for(int y=1;y<=t;y++){
			if(x*y==t&&x+y<min)
			min=x+y;
		}
	}
	return min*l;
	}
}
int main(){
	int G,L;
	scanf("%d %d",&G,&L);
	printf("%d",f(G,L));
	return 0;	
}

