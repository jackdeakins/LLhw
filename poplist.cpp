#include "hw06.h"

void populateList(BookList*& list){
  list = new BookList;
  list->length = 0;
  list->head = nullptr;
  list->tail = nullptr;

  std::string isbn, title, author, space;

  BookEntry *first = nullptr;
  BookEntry *loop = nullptr;
  BookEntry *tmp = nullptr;
  
  std::ifstream fin("booksdb.txt");
  
  if(!fin){
    std::ofstream fout("booksdb.txt");
    fout.close();
  }
  
  else
  {
    while(getline(fin,isbn) && getline(fin,author) && getline(fin,title) && getline(fin, space)){
      tmp = new BookEntry;
      tmp->list = list;
      tmp->next = nullptr;
      tmp->previous = nullptr;
      tmp->book = new BookData;

      tmp->book->isbn = isbn;
      tmp->book->author = author;
      tmp->book->title = title;

      if(list->head == nullptr){
        list->head = tmp;
      }
      else{      
       	loop->next = tmp;
        tmp->previous = loop;
      }

      list->tail = tmp;
      list->length++;
      loop = tmp;
    }
  }
  fin.close();
}
