// PassageArgumentFonction.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

// passage par ref dans une fonction

void fonctionRef(int &b) //variable local detruite apres le scope , il faut mettre int &c pour avoir la meme adresse
{
    // ca revient a dire que a = &c

    b++;
    std::cout << "adresse memoire de b " << &b << std::endl;
    std::cout << " b " << b << std::endl;
}

// avec les pointeurs

void fonctionPtr(int *c) //variable local detruite apres le scope , il faut mettre un pointeur
{
    // ca revient a dire que a = &c

    (*c)++;
    std::cout << "adresse memoire de c " << c << std::endl;
    std::cout << " c " << *c << std::endl;
}

// le tableau pointe vers son premier élément

int main()
{
    int a = 5;
    int d = 8;

    std::cout << "adresse memoire de a " << &a << std::endl;
    std::cout << " a " << a << std::endl;
    fonctionRef(a);
    std::cout << " a " << a << std::endl;
    fonctionPtr(&d);
    std::cout << " a " << a << std::endl;

    return 0;
}

