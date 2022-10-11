#include<stdio.h>
//Q cantidad de veces de pregunta
//N cantidad de carros
//i cuanta gasolina ocupan

int main(){
	//ingresa dos numeros
	int Q, N;
	scanf("%d %d", &Q, &N);
	int carros[N]; //la gasolina que quiere cada carro
	int G[Q];//gasolina maxina en cada iteracion Q
	for(int i=0; i<N; i++){
		scanf("%d", &carros[i]);
	}
	for (int i = 0; i < Q; i++)
	{
		scanf("%d", &G[i]);

	}
int z=0;
int suma;
int total;
	while(z<Q){
		 
		 total=0;
		int restante=0;
		int contit=0;
		int j=0;
		suma=carros[j];
		for(int i=0; i<N;i++){
			suma=carros[i+1]+suma;
				if(suma<=G[z]){
					total=suma;
					
					}
				else{
					restante=G[z]-total;
						contit=i+1;
					break;

					}
			}//fin for
		
		printf("%d", contit);
		printf(" %d ", restante);
		printf("\n");
		z=z+1;
	}

	return 0;
}
