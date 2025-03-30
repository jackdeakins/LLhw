#include "hw06.h"

void displayRecords(BookList* list){
  
  int selection = 0;
  int counter = 0;
  BookEntry *tmp = nullptr;
  BookEntry *loop = list->head;

  while(loop){
    counter++;
    tmp = loop;
    loop = tmp->next;
    cout << counter << ". " << tmp->book->isbn << "\n";
    cout << "   " << tmp->book->author << "\n";
    cout << "   " << tmp->book->title << "\n\n";
  }
}
