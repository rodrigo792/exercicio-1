// 2- Algoritmo que l� o raio de uma circunfer�ncia e calcule sua area
#include <stdio.h>
main()
{
	float area;
	float raio;
	float pi = 3.14;
	printf("Digite o raio");
	scanf("%f",&raio);
	area = (pi * (raio *raio));
	printf("Sua area e igual ao %0.2ff",area);
	return 0;
	
}
