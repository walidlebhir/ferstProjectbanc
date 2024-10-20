#include <stdio.h>
#include<string>
#include<stdlib.h>
#include<conio.h>

#include "function.h"






// fonction presenation aplications : 
void presentation_aplication(){
    system("color 1F") ; 
    printf("\n");
    printf("\n") ; 
    printf("\t\t\t------------------------------------------------\n") ; 
    
    printf("\t\t\t********** Aplication_gestion_bancaire ********\n") ; 
    printf("\t\t\t------------------------------------------------\n") ; 

    printf("\n\t\t\t") ; 
    getch() ; 
}


void fun_aplication(){
    
   int choix = 0 ; 
    do
    { system("cls") ; 
        // desiner le menur d'aplication : 
        system("color 5F") ; 
        printf("\n") ; 
        printf("\t******* MENUE *********\n") ; 
        printf("\t 1_cration d'une compt bancaire \n") ; 
        printf("\t 2_affichage des compt bancaire \n") ; 
        printf("\t 3_recherche du compt \n") ; 
        printf("\t 4_suprision du compt \n") ; 
        printf("\t 5_poser d'argent \n") ; 
        printf("\t 6_tirage d'argent  \n"); 
        printf("\n") ; 
        printf("\n") ; 
        printf("\t __entrer votre choix de service__ \t") ; scanf("%d",&choix) ; 

        switch (choix)
        {
        case 1:
            // ==> function de ceation du compt 
            creation_compt() ; 
            
            break;
        case 2 : 
            //==> fonction affichage du compt : 
            break;
        case 3 : 
            // ===>  : 
            break; 
        case 4 : 
            // ==> fonctio recherche des infromations : 
            break; 
        case 5 : 
            //==> fonction qui suprimer les produits :
            break; 
        case 6 : 
            //==> fonction qui ordonnes des produit selon leurs date :
            break;

        
        default:
            printf("EREUR SYSTEMME \n") ; 
            printf("se services n'existe pas \n") ; 
            break;
        }


        

    } while (choix != 8);
    

}









int main(){

    // ==> repele des fonction : 
    presentation_aplication() ; 
    printf("\n") ; 
    fun_aplication() ; 



    return 0 ; 

}

