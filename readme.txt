Readme

Version QT Creator: 1.3.1
Version QT: 4.6.3

Allan FERREIROS
Jonatan DAHL
Mauricio TAKECITA UEHARA

Description d’application:
Cette application vous permet de trouver des films en lui fournissant des paramètres comme genre, année et titre.  Le résultat de recherche et visualisé à la fois par une zone des “étoiles”, à droite, qui sont groupé par leur genre et année, et une liste standard, à gauche. La zone des “étoiles” se compose de nombreuses petits boulettes dont chacun représente un densité des films dans la même catégorie. En cliquant sur une étoile, tous les films dedans s’affichent dans la liste à gauche. En cliquant sur un film dans la liste, un popup s’affiche avec toute l’information sur ce film là.

Description de Projet
Pour les films, nous les avons importé de la base de données de IMDB. Comme genre de base de données nous avons utilisé SQLite avec la librairie ODB (http://www.codesynthesis.com/products/odb/) pour la liéer avec QT.

Instructions pour compiler
qmake 
make

Les fichiers binaires sont dans le dossier "bin"