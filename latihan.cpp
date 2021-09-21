#include <stdio.h>

int iterasi(int a, int b){
	int hasil = 1;
	for (int i = 1; i <=b; i++){
		hasil = hasil*a;
	}
	return hasil;
}

int rekursif(int a, int b){
	if (b == 0){
		return 1;
	}
	else{
		return a*rekursif(a,(b-1));
	}
}

int main(){
	int a, b;
	printf("masukkan bilangan yang akan dipangkatkan : ");
	scanf("%d", &a);
	printf("masukkan pangkat bilangan : ");
	scanf("%d", &b);
	printf("pangkat iterasi : %d\n", iterasi(a,b));
	printf("pangkat rekursi : %d", rekursif(a,b));
	
	return 0;
}
