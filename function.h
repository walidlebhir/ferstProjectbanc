// exemple.h

#ifndef EXEMPLE_H // Include guard pour éviter l'inclusion multiple
#define EXEMPLE_H



#include <stdio.h>
#include<stdlib.h>
#include <string>


// travill sur tout les fonction utiliser dans traitement d'aplication : 

// structure dat 
typedef struct 
{
    int jour , ans , heur , mois ; 
}date;

//structure compt_bancaire : 
typedef struct 
{
    int id_compt ; 
    char nom_clinet[20] ; 
    float sold_totale ; 
    date date_creation ; 
}compt_bancair ; 

FILE *fichie_compt ; 
compt_bancair data_compt ; 



// ==> fonction qui permet de creé compt bancaire : 

void creation_compt(){
    int cnt = 0 ; 
    int id_recherche ; 
    // ouverture du fichié : 
    fichie_compt = fopen("data_compt.text" , "at+") ; // mode_lecture et ecriture 
    if(fichie_compt == NULL){
        printf("problemme ERUEUR systeme \n") ; 
        exit(1) ; 
    }
    
    printf("entrer id du compt \t") ; scanf("%d",&id_recherche) ; 
    while (!feof(fichie_compt))
    {
        fscanf(fichie_compt , "%d\n%s\n%f\n%d%d%d%d",&data_compt.id_compt , &data_compt.nom_clinet,&data_compt.sold_totale,&data_compt.date_creation.jour , &data_compt.date_creation.heur ,&data_compt.date_creation.mois , &data_compt.date_creation.ans) ; 
        if(data_compt.id_compt==id_recherche){
            cnt=1 ; 
            break; 
        }
    }
    
    if(cnt==1){
        printf("l'id est deja existe \t veuller esayer de cree une autre id \n") ; 
    }
    else{
        // ==> creé une compt avec noveaux dones (id) : 
        data_compt.id_compt = id_recherche ; 
        printf("entrer le nom du client \t") ; scanf("%s",&data_compt.nom_clinet) ; 
        printf("entrer le sold totale du compt \t") ; scanf("%f",&data_compt.sold_totale) ; 
        printf("entrer la date de création du compt \n") ; 
        printf("jour \t") ; scanf("%d",&data_compt.date_creation.jour) ;
        printf("heur \t") ; scanf("%d",&data_compt.date_creation.heur) ; 
        printf("mois \t") ; scanf("%d",&data_compt.date_creation.mois) ; 
        printf("ans \t"); scanf("%d",&data_compt.date_creation.ans) ; 
        fprintf(fichie_compt , "%d\n%s\n%f\n%d%d%d%d",data_compt.id_compt , data_compt.nom_clinet , data_compt.sold_totale , data_compt.date_creation.jour, data_compt.date_creation.heur , data_compt.date_creation.mois, data_compt.date_creation.ans) ; 
        printf("creation du compt d'efictue avec secre\n") ; 
        
    }
    





}



















#endif // EXEMPLE_H
