#include "hw06.h"

void displayRecord(BookList* list){

  int selection = 0;
  int counter = 0;
  BookEntry *tmp = nullptr;
  BookEntry *loop = list->head;

  cout << "Please select the record your would like to display: ";
  cin >> selection;

  for (int i = 0; i < selection; i++)
  {
    counter = i+1;
    tmp = loop;
    loop = tmp->next;
  }

  cout << counter << ". " << tmp->book->isbn << "\n";
  cout << "   " << tmp->book->author << "\n";
  cout << "   " << tmp->book->title << "\n";
}
