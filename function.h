#ifndef FUNCTION_H
#define FUNCTION_H

#include "structures.h"

double get_time_seconds(const char* time) ; // récupère le temps du joueur dans le format demandé et convertit en secondes

//gestion des entrées de l'utilisateur 
int is_valid_integer(const char *str) ; // vérifie que ce qui est entrer par l'utilisateur est bien un chiffre (elle le fait chiffre par chiffre)
int get_int_input() ; // récupère le choix de l'utilisateur et vérifie que c'est un chiffre entier avant de convertir en entier si c'est bon
float get_float_input() ; // récupère le choix de l'utilisateur et vérifie que c'est un chiffre réel avant de continuer  

//Gère les erreurs d'entrées pour le temps
Time Constr_time() ; // fonction fonctionnant avec la structure Time : sert à récupérer le temps d'un joueur lorsque c'est nécessaire
   

//Gère les erreurs d'entrées pour la date 
Date constr_Date() ; //pour récupérer la date demandée à l'utilisateur

//écrire dans le fichier d'un athlète
//void write_training_data(const char* filename, Training* trainings, int num_trainings) ; // permet d'écrire les informations de chaque athlète dans un fichier créé à leur nom
    
//l'afficher
void get_trainings(const char *filename) ;  // permet d'afficher l'historique des entraînements de l'athlète demandé

//ajout d'un entraînement
void add_training(const char *filename) ; // fonction pour ajouter des entrainements à l'athlete choisi 

//résumé des performances d'un athlète (pire et meilleur temps)
void athlete_summary(const char* filename, const char* type) ;  // résumé des performances avec pire et meilleur temps d’un athlète pour un type d’entraînement, tel qu'enregistrer dans un fichier    

//POUR LE TOP ON A BESOIN : 
int partition(double arr[], char names[][100], int low, int high) ;
// tri rapide, fait un tableau en deux parties autour d'un pivot tel que les éléments à gauche du pivot soient plus petits ou égaux au pivot, et ceux à droite soient plus grands
void quicksort(double arr[], char names[][100], int low, int high) ; // sert à faire du tri rapide (utilisation d’un pivot (pi) + trie de manière récursive) 
void top_athletes(Athlete *athletes, int num_ath, const char* type, int num_top) ; // fonction pour classer les athlètes du meilleur au moins bon

//POUR CALCULER LES PERFORMANCES, ON A BESOIN :
int compare_dates(Date date1, Date date2) ; // fonction permettant de vérifier quelle date est avant l'autre et que la progression du joueur soit logique
void athlete_progression(const char* filename, const char* type, Date date1, Date date2) ; // calcule la différence entre 2 temps à 2 dates et pour un type donné 
        
#endif 
