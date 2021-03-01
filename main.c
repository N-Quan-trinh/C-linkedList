#include <stdio.h>
#include <stdlib.h>
#include "dirent.h"
#include "string.h"
// Define the linked list

struct Node{
    char *name;
    struct Node *next;
};

void printList(struct Node *node)
{   printf("[");
    while (node !=NULL){
        printf("%s,", node->name);
        node = node->next;
    }
    printf("]\n");
}
struct Node *current = NULL;

void insertAfter(struct Node* prev_node, char* new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    /* 2. allocate new node */
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

    /* 3. put in the data */
    new_node->name = new_data;

    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}
// End of linked list definition

void alp(struct Node* x[26]);




int main(){
    printf("please enter a directory: ");
    char *direct = NULL;
    direct = (char *) malloc(sizeof(char*));
    scanf("%[ -/0-9a-z:-@A-Z[-`]", direct);
    printf("%s\n", direct);
    // create an Array of 26 elements, with each having the head's value of an alphabet

    struct Node *list[26];
    for(int x=0; x<26; x++){
        struct Node* first = (struct Node*) malloc(sizeof(struct Node));
        first->name = ".";
        first->next= NULL;
        list[x] = first;
    }
    alp(list);


    //Getting the entry of given directory/ sorting
    int file_count = 0;
    FILE *fp;
    DIR           *d;
    struct dirent *dir;
    char *filenames[225];
    int i = 0;
    d = opendir(direct);
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {

            filenames[i] = malloc(strlen(dir->d_name)+1);
            strcpy(filenames[i],dir->d_name);
            i++;
            file_count++;

        }
        closedir(d);
    }
    printf("%i", file_count);
    for(int x=0; x<file_count; x++) {
        if(filenames[x][0] > 64 && filenames[x][0] <92) {

            insertAfter(list[filenames[x][0] - 65], filenames[x]);
        } else if(filenames[x][0] > 96 && filenames[x][0] <123){

            insertAfter(list[filenames[x][0] - 97], filenames[x]);
        }
    }




    //end of Sort




    return 0;
}







void alp(struct Node *x[26]){
    x[0]->name = "A";
    x[1]->name = "B";
    x[2]->name = "C";
    x[3]->name = "D";
    x[4]->name = "E";
    x[5]->name = "F";
    x[6]->name = "G";
    x[7]->name = "H";
    x[8]->name = "I";
    x[9]->name = "J";
    x[10]->name = "K";
    x[11]->name = "L";
    x[12]->name = "M";
    x[13]->name = "N";
    x[14]->name = "O";
    x[15]->name = "P";
    x[16]->name = "Q";
    x[17]->name = "R";
    x[18]->name = "S";
    x[19]->name = "T";
    x[20]->name = "U";
    x[21]->name = "V";
    x[22]->name = "W";
    x[23]->name = "X";
    x[24]->name = "Y";
    x[25]->name = "Z";
}