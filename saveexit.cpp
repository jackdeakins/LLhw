#include "hw06.h"

bool saveExit(BookList*& list){

  bool quit = true;
  BookEntry *tmp = nullptr;
  BookEntry *loop = nullptr;  
  
  tmp = list->head;

  while(tmp) {
    loop = tmp->next;
    delete tmp->book;
    delete tmp;
    tmp = loop;
  }

  delete list;
  return quit;
}
