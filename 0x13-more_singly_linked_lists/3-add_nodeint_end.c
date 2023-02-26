#include "list.h"
#include <stdio.h>

/*
 * add_nodeint_end - entry point
 * @head: member
 * @n: member
 * Return: listint_t
*/

listint_t *add_nodeint_end(listint_t **head, const int n) {
    listint_t *ptr, *temp;
    int item ;
    ptr = (struct listint_s *)malloc(sizeof(struct listint_s));
    ptr->n = item;
    if (head = NULL)
    {    
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr->next = temp;
        head = ptr;
        while (temp -> next != NULL)  
        {  
                temp = temp -> next;  
        }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
          
    }  
        return(n);
}

