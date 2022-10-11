#include<stdio.h>
#include<string.h>
struct montains
{
	int medidas;
	char nombre[30];
};

int N;




int main(){
	//ingresa un enetero
	scanf("%d", &N);
	struct montains k[N];
	for(int i=0; i<N; i++){
		//printf("ingrese un entero con un nombre\n");
		scanf("%d", &k[i].medidas);
		//printf("\n");
		scanf("%s", &k[i].nombre);

	}
	// parte de seleccion 

	int j;
	for(int i=1; i<N; i++){
		j=i;
		while(k[j-1].medidas<k[j].medidas &&j>0){
			//parte del swap
			int aux=k[j].medidas;
			k[j].medidas=k[j-1].medidas;
			k[j-1].medidas=aux;

			char nuevo[30];
			strcpy(nuevo, k[j].nombre);
			
			strcpy(k[j].nombre, k[j-1].nombre);
			strcpy(k[j-1].nombre, nuevo);

			j--;
		}
	}

	for(int i=0; i<N; i++){
		//printf("%d %s\n", k[i].medidas, k[i].nombre);
		printf("%s", k[i].nombre);
		printf("\n");
	}




	
}