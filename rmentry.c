#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void removeEntry (struct entry *previousElement, struct entry *removedElement)
{
    
    previousElement->next = removedElement->next;
    
    
};

int main (void)
{
    
    struct entry n1, n2, n3, n4;
    void removeEntry (struct entry *previousElement, struct entry *removedElement);
    struct entry *list_pointer = &n1;
    //struct entry *n2 = &n2;
    //struct entry *n3 = &n3;

    
    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;
    
    n3.value = 300;
    n3.next = &n4;   
    
    n4.value = 400;
    n4.next= (struct entry *) 0;  //mark end of list w/ null pointer
 
    //print out list
    
    printf("Here's the list before the function is called:\n");
    
    while ( list_pointer != (struct entry *) 0) {
        printf ("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }
    
    //send list pointer back up to start of list
    list_pointer = &n1;
    
    
    //call removeEntry function 
    removeEntry (&n2, &n3);
    
    printf("And here it is after the function is called:\n");
    
    //print out new list
    while ( list_pointer != (struct entry *) 0) {
        printf ("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }
    

    
    
    return 0;
    
    
    
    
}