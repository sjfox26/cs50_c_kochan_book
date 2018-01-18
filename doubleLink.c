#include <stdio.h>

struct entry
{
    int value;
    struct entry *previous;
    struct entry *next;
};


/*
struct entry *insertEntry (struct entry *newEntry, struct entry *pointHereInsertAfter )
{
    
    int newNumber;
    
    printf("Enter number to be inserted in list: ");
    scanf("%i", &newNumber);
    
    // inserted new entry's next takes the place of pointHereInsertAfter's next
    // point the PointHereInsertAfter to address of newEntry ... point replaced .next to to newEntry
    newEntry->next = pointHereInsertAfter->next;
    pointHereInsertAfter->next = newEntry;
    
    
    //newEntry->value = 250;
    newEntry->value = newNumber;
   
    //EXAMPLE OF INSERTED ENTRY FROM BOOK, p. 247
    //n2_3.next = n2.next;
    //n2.next = &n2_3;
    
    //FIRST TRY AT DUPLICATING
    //newEntry->next = pointHereInsertAfter->next;
    //pointHereInsertAfter->next = &newEntry;
    
    
return newEntry;
    
    
};
*/

int main (void)
{
    
    struct entry n1, n2, n3, n4;  
    //struct entry *insertEntry (struct entry *newEntry, struct entry *pointHereInsertAfter );   //int user_given_value
    struct entry *list_pointer = &n1;
    
    

    
    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.previous = &n1;
    n2.next = &n3;
    
    n3.value = 300;
    n3.previous = &n2;
    n3.next = &n4;
    
    n4.value = 400;
    n4.previous = &n3;
    n4.next = (struct entry *) 0;   //mark end of list w/ null pointer
    
    
    printf("%i\n\n", n3.previous->value);  //testing double link
    
    while ( list_pointer != (struct entry *) 0) {
        printf ("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }
    
    
    return 0;
    
}