  Ce projet a pour but de trier des athlètes en fonction de leurs performances (épreuves, temps, position...).

POUR COMPILER : 
  Il faut entrer tout d'abord : gcc main.c function.c -o program
  Puis : ./program

  Son utilisation est simple : il faut suivre les instructions données lors de l'execution. Les athlètes existent déjà. A chaque fois que nous invitons l'utilisateur à faire une action, nous lui communiquons leurs informations afin qu'il puisse avoir connaissances de celles-ci et adapter donc ses demandes.

  Principalement, les actions sont : faire afficher l'historique d'un athlète, ajouter un ou des entrainements à un athlète (grâce à la fonction add_training), choisir un top des athlètes à faire apparaître en fonction d'une épreuve (grâce à la fonction top_athletes, fonctionnant avec la fonction partition (qui fonctionne elle-même avec la fonction récursive quicksort)), afficher les meilleur, pire et moyen temps d'un athlète (grâce à la fonction athlete_summary) et afficher la progression d'un athlète pour une même épreuve entre deux dates (grâce à la fonction athlete_summary). Ces actions se faisant, le programme demande la date de l'épreuve lorsque cela est nécéssaire et la stocke (grâce à la fonction constr_date), le temps de l'athlète pour l'épreuve (grâce à la fonction constr_time), transforme ce temps en secondes (grâce à la fonction get_time_seconds) pour pouvoir faire la moyenne lorsque cela est demandé. Il fait également en sorte de vérifier que nous n'avons pas un relais le même jour et de demander, lorsque l'utilisateur veut rajouter un relais aux entrainements d'un athlète, la position du joueur lors du relais, avant de le rajouter à la suite de l'historique de l'athlète (tout cela est fait dans la fonction add_training).

  Concernant l'état du projet : celui-ci est fonctionnel et ne devrait en aucun cas crasher, peu importe l'entrée que fait l'utilisateur. Il est stable et se termine une fois que toutes les actions possibles ont été proposées à l'utilisateur.

  Vous pouvez trouver notre rapport écrit du projet avec les autres fichiers sous le nom de "Rapport, MEF-1 Groupe A.pdf". Vous y trouverez un peu plus de détails sur notre manière de travailler et l'avancée du projet dans sa globalité. 
