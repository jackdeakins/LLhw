#include "hw06.h"

void addRecord(BookList*& list){
  
  std::string isbn;
  std::string author;
  std::string title;
  std::string space;
  BookEntry *loop = new BookEntry;
  BookEntry *tmp = nullptr;
  BookEntry *first = list->head;
  
  std::ofstream fout("booksdb.txt", std::ios::app);

  cout << "Please enter book isbn: ";
  std::getline(cin, isbn);
  cout << "Please enter book author: ";
  std::getline(cin, author);
  cout << "Please enter book title: ";
  std::getline(cin, title);
  
  if(list->head == nullptr){
    list->head = loop;
    loop->previous = nullptr;
    first = loop;
  }
  else{
    tmp = list->tail;
    loop->previous = tmp;
    tmp->next = loop;
  }
    list->tail = loop;
    loop->list = list;
    loop->next = nullptr;
    loop->book = new BookData;
    loop->book->isbn = isbn;
    loop->book->author = author;
    loop->book->title = title;
    list->length++;
    tmp = loop; 

  fout << loop->book->isbn << "\n";
  fout << loop->book->author << "\n";
  fout << loop->book->title << "\n\n";

  fout.close();
}
