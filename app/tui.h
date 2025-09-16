#ifndef TUI_H_
#define TUI_H_

struct todo; //todo item
typedef todo[] table;
void tablePrint(table content); // prints tables
todo makeTodo(char args[][]); // make todo

#endif TUI_H_
