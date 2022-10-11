#include<stdio.h>
void mezcla(int a, int b, int C[], int D[]);

void main(){
	int n, m;
	//printf("ingrese dos numeros\n");
	scanf("%d %d", &n, &m);
	int n1[n];
	int m1[m];
	for(int i=1; i<=n; i++){
		scanf("%d", &n1[i]);
	}
	for(int i=1; i<=m;i++){
		scanf("%d", &m1[i]);
	}

		mezcla(n, m, n1, m1);
	
}
// n, m , n1, m1
void mezcla(int a, int b, int C[], int D[]){
		int total=a+b;
		int salida[total];
		int j=1;
		for (int i=1; i<=total; i++) 
        {
            if (i>a) 
            { 
                salida[i] = D[j];
                j++;
            }
            
            else 
            {
                
                salida[i] = C[i];
            }
            
        }
		int x=1;
		int aux;
        for(int i=1;i<=total;i++){
        	for(x=i+1;x<=total;x++){
        		if(salida[i]>=salida[x]){
        		aux=salida[i];
        		salida[i]=salida[x];
        		salida[x]=aux;
        		}
        	}
        }
        for (int i=1; i<=total; i++) 
        {
            printf("%d ", salida[i]);
        }
}