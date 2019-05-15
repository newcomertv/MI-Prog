#include <stdio.h>

typedef struct contact{
    char name[100];
    int age;
    char adresse[1000];
    int tel;
    char mail[100];
}contact;

void add(char name,int age,char adresse,int tel,char mail){
    struct contact name {
        .name=name,
        .age=age,
        .adresse=adresse,
        .tel=tel,
        .mail=mail
    };
}

void add_one(){
    
    char name,adresse,mail;
    int age,tel;

    printf("Comment s'appelle-t-il ? ");
    scanf(" %c\n",&name);
    printf("Quel age a-t-il ? ");
    scanf(" %d\n",&age);
    printf("Ou habite-t-il ? ");
    scanf(" %c\n",&adresse);
    printf("Quel est son numéro ? ");
    scanf(" %d\n",&tel);
    printf("Quel son adresse mail ? ");
    scanf(" %c\n",&mail);
    add(name,age,adresse,tel,mail);
}

void del(char name){

}

void del_one (){
    char name;
    
    printf("Tu veux suppr quel contact ? ");
    scanf(" %c\n",&name);
    del(name)

}
//programme pas terminé ! Ca m'énerve ! manque main et savoir comment delete un struct
