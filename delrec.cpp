#include "hw06.h"

void deleteRecord(BookList*& list){

  BookEntry *tmp = nullptr;
  BookEntry *loop = list->head;
  int selection = 0;
  cout << "Please enter the number of the entry you would like to delete: ";
  cin >> selection;

  for (int i = 0; i < selection ; i++)
  {
    tmp = loop;
    loop = tmp->next;	  
  }
  
  if(list->head == tmp){
    list->head = loop;
    loop->previous = nullptr;
  }
  else if(list->tail == tmp){
    loop = tmp->previous;
    list->tail = loop;
    loop->next = nullptr;
  } 
  else {
    loop = tmp->previous;
    loop->next = tmp->next;
    loop = tmp->next;
    loop->previous = tmp->previous;
  }

  delete tmp->book;
  delete tmp;

  tmp = list->head;
  loop = list->head;
  std::ofstream fout("booksdb.txt");
  
  while(tmp){
  loop = tmp->next;
  fout << tmp->book->isbn << "\n";
  fout << tmp->book->author << "\n";
  fout << tmp->book->title << "\n\n";
  tmp = loop;  
  }

  fout.close();
}
