#include<stdlib.h>
#include<stdio.h>
#define carre(x) (x)*(x)

int main() {

	int Nb = 5;
	printf("%d", carre(Nb+1));  //affiche 11 si on veut carre(Nb+1) => �a fait 5+1*5+1 avec les priorit�s de calcul
								// Il faut alors mettre x entre ()

}