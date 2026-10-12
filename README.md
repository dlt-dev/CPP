# CPP

Ce dépôt regroupe les modules **CPP00 à CPP09** du cursus C++ de 42. Chaque module contient plusieurs exercices permettant de découvrir progressivement la programmation orientée objet, les fonctionnalités modernes du langage et la STL.

## Objectifs

- Passer de la programmation en C à la programmation orientée objet en C++.
- Comprendre la gestion de la mémoire et la durée de vie des objets.
- Utiliser l'encapsulation, l'héritage et le polymorphisme.
- Manipuler les exceptions, les conversions et les classes abstraites.
- Découvrir les templates et les conteneurs de la STL.
- Résoudre des problèmes algorithmiques à l'aide de structures de données adaptées.

## Modules abordés

### CPP00 — Introduction au C++ et aux classes

- Syntaxe de base du C++.
- Compilation avec `c++` et organisation avec un `Makefile`.
- Entrées/sorties avec `std::cout`, `std::cin` et `std::string`.
- Classes, attributs et méthodes.
- Encapsulation et fonctions membres.
- Constructeurs et premiers objets.
- Manipulation de chaînes de caractères.
- Projet de répertoire téléphonique avec les classes `PhoneBook` et `Contact`.

### CPP01 — Allocation mémoire, références et fichiers

- Allocation dynamique avec `new` et libération avec `delete`.
- Différence entre la mémoire automatique et la mémoire dynamique.
- Création et destruction d'objets.
- Tableaux d'objets et gestion de leur durée de vie.
- Références et pointeurs.
- Association entre classes, notamment avec une arme et des personnages.
- Lecture et écriture de fichiers avec `std::ifstream` et `std::ofstream`.
- Recherche et remplacement de chaînes.
- Pointeurs vers fonctions membres et sélection d'actions selon un niveau de message.

### CPP02 — Orthodox Canonical Form et surcharge d'opérateurs

- Forme canonique orthodoxe :
  - constructeur par défaut ;
  - constructeur de copie ;
  - opérateur d'affectation ;
  - destructeur.
- Encapsulation de données numériques.
- Nombres à virgule fixe (*fixed-point numbers*).
- Conversion entre entiers, flottants et nombres à virgule fixe.
- Surcharge des opérateurs arithmétiques, de comparaison et d'incrémentation.
- Surcharge des opérateurs d'insertion et d'extraction pour les flux.
- Fonctions membres `min` et `max`.

### CPP03 — Héritage

- Héritage simple.
- Classes dérivées et classe de base.
- Appel des constructeurs et destructeurs dans une hiérarchie.
- Réutilisation et spécialisation du comportement d'une classe.
- Redéfinition de méthodes.
- Héritage multiple et problème du diamant avec `DiamondTrap`.
- Gestion des attributs hérités et des spécificités de chaque type de robot.

### CPP04 — Polymorphisme, classes abstraites et interfaces

- Polymorphisme dynamique.
- Fonctions virtuelles et liaison dynamique.
- Destructeurs virtuels.
- Classes abstraites et fonctions virtuelles pures.
- Différence entre polymorphisme et masquage de méthodes.
- Création d'une hiérarchie `Animal`, `Dog` et `Cat`.
- Composition avec la classe `Brain`.
- Copie profonde (*deep copy*) et prévention des fuites mémoire.
- Interfaces et classes entièrement abstraites.

### CPP05 — Exceptions et classes abstraites

- Exceptions en C++ avec `try`, `catch` et `throw`.
- Création de classes d'exception personnalisées.
- Validation des invariants d'un objet.
- Gestion des limites et des erreurs métier.
- Classes abstraites et méthodes virtuelles pures.
- Hiérarchie de formulaires administratifs.
- Autorisation de signature et d'exécution selon le grade d'un bureaucrate.
- Héritage spécialisé avec plusieurs types de formulaires.
- Création de formulaires par une classe `Intern`.

### CPP06 — Casts et conversions

- Conversion de types scalaires.
- Conversion explicite avec `static_cast`.
- Identification et conversion d'objets polymorphes avec `dynamic_cast`.
- Compréhension des limites et des risques des conversions de types.
- Sérialisation d'un pointeur en entier et désérialisation.
- Utilisation de `reinterpret_cast` dans un cas contrôlé.
- Identification dynamique de types dérivés.
- Classes polymorphes et RTTI.

### CPP07 — Templates

- Fonctions templates.
- Classes templates.
- Déduction des types par le compilateur.
- Fonctions génériques comme `swap`, `min` et `max`.
- Application d'une fonction à chaque élément d'un tableau avec `iter`.
- Implémentation d'un tableau générique avec la classe `Array`.
- Gestion de la copie, de l'affectation et des accès hors limites.
- Exceptions liées aux indices invalides.

### CPP08 — Conteneurs et algorithmes STL

- Utilisation des conteneurs de la bibliothèque standard.
- Itérateurs et parcours de collections.
- Recherche d'un élément avec `std::find`.
- Gestion des exceptions lorsqu'un élément n'est pas trouvé.
- Implémentation d'une classe `Span` capable de stocker des nombres et de calculer :
  - le plus petit écart ;
  - le plus grand écart.
- Insertion d'une grande quantité de valeurs dans un conteneur.
- Adaptateurs de conteneurs avec `std::stack`.
- Création d'un itérateur pour parcourir une structure de type pile.

### CPP09 — Algorithmes et structures de données

- Lecture et validation de fichiers et d'entrées utilisateur.
- Utilisation de conteneurs associatifs pour rechercher des valeurs par date.
- Parsing et validation de dates et de nombres.
- Calcul de taux de change à partir de données historiques.
- Évaluation d'expressions en notation polonaise inversée avec une pile.
- Tri *merge-insert* (*Ford–Johnson*).
- Comparaison des performances de tri avec différents conteneurs.
- Mesure du temps d'exécution et analyse de la complexité algorithmique.

## Organisation du dépôt

Chaque module est organisé de la manière suivante :

```text
CPPXX/
└── exYY/
    ├── include/   # Fichiers d'en-tête
    ├── src/       # Fichiers sources
    └── Makefile   # Compilation de l'exercice
```

Les exercices sont indépendants et disposent généralement de leur propre `Makefile`.

## Compilation et exécution

Pour compiler un exercice :

```bash
cd CPP00/ex00
make
```

Pour exécuter le programme, utilisez le nom du binaire défini dans le `Makefile`, puis nettoyez les fichiers générés si nécessaire :

```bash
./megaphone
make clean
make fclean
make re
```

Les commandes et le nom du binaire peuvent varier d'un exercice à l'autre. Consultez le `Makefile` du dossier concerné.

## Prérequis

- Un compilateur compatible C++98 ou la norme demandée par l'exercice.
- `make`.
- Un environnement Unix/Linux ou macOS.

Les modules historiques du cursus utilisent principalement la norme **C++98**. Il est donc recommandé de compiler avec les options `-Wall -Wextra -Werror -std=c++98`, sauf indication contraire.

## Progression pédagogique

La progression suit une montée en difficulté :

1. bases du langage et classes ;
2. mémoire, références et fichiers ;
3. surcharge d'opérateurs ;
4. héritage et polymorphisme ;
5. exceptions et abstraction ;
6. conversions et RTTI ;
7. programmation générique ;
8. STL et itérateurs ;
9. algorithmes et complexité.

Ce dépôt constitue ainsi une introduction complète aux principaux concepts de la programmation orientée objet et de la programmation générique en C++98.
