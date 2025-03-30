/*****JOHN DEAKINS*****CS1B*****HW06*****T-Th 7:00pm - 9:20pm*****DUE: 3/27/25*****/
#ifndef HW06_H
#define HW06_H

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;

typedef struct BookList BookList;
typedef struct BookEntry BookEntry;
typedef struct BookData BookData;

struct BookList{
  int length;
  BookEntry *head;
  BookEntry *tail;
};

struct BookEntry{
  BookList *list;
  BookEntry *next;
  BookEntry *previous;
  BookData *book;
};

struct BookData{
  std::string isbn;
  std::string author;
  std::string title;
};

int menu();
void populateList(BookList*&);
void addRecord(BookList*&);
/*void deleteRecord();
void displayRecord();
void displayRecords();*/
bool saveExit(BookList*&);

#endif
