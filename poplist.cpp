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
    while(getline(fin,isbn) && getline(fin,title) && getline(fin,author) && getline(fin, space)){
      tmp = new BookEntry;
      tmp->list = list;
      tmp->next = nullptr;
      tmp->previous = nullptr;
      tmp->book = new BookData;

      tmp->book->isbn = isbn;
      tmp->book->title = title;
      tmp->book->author = author;

      if(list->head == nullptr){
        list->head = tmp;
      }
      else{
       	loop->next = tmp; //possibly leaking here
        tmp->previous = loop;
      }

      list->tail = tmp;
      list->length++;
      loop = tmp;
    }
  }
  fin.close();
}
