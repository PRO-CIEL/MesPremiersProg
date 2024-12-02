#include "fct.h"

void menu()
{
	bool loop = true;
	int choix;

	do
	{
		cout << "pour commencer veuillez choisir un programme :" << endl
			<< "( 1 ) - premiers programmes" << endl
			<< "( 2 ) - quitter";
		cin >> choix;

		switch (choix)
		{
		case 1 :
		{
			premier_prog();
		}
		default:
			loop = false;
			break;
		}

	}
	while (loop == true);
}

void premier_prog()
{
	printf("premier programme\n");
	// printf nous permet d'afficher les caractères entre les ""

	printf("\nSection %s promotion %d\n", "CIEL", 2016);
	// \n nous permet de faire un retour à la ligne, %s nous permet de placer un string de caractères ici "CIEL", et %d nous permet de placer un decimal integer signé ici (2016)

	printf("\nLe point de fusion du mercure est de %g\xF8 C soit environ %.0f\xF8 C \n", -38.842, -38.842);

	printf("Total : %d \n ", printf("\nPremier programme\n"));

	int nbCara = printf("\nla phrase au dessus") - 1;
	printf("\nle total de caractères dans la phrase du dessus est de : %d", nbCara);

	int jour, mois, annee;
	scanf_s("%i %i %i", &jour, &mois, &annee);
	printf("date : %i / %i / %i \n", jour, mois, annee);


	_getch();
	// getch nous permet d'attendre une saisi du clavier avant de refermer la fenètre après execution de l'exe
}
