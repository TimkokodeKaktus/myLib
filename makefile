main : main.o library.o menu.o book.o exception.o item.o itemstore.o order.o orderstore.o person.o personstore.o readfile.o user.o
	g++ main.o library.o menu.o book.o exception.o item.o itemstore.o order.o orderstore.o person.o personstore.o readfile.o user.o -o myLibrary
main.o : main.cpp
	g++ -c main.cpp
library.o : library.cpp
	g++ -c library.cpp
menu.o : menu.cpp
	g++ -c menu.cpp
book.o : book.cpp
	g++ -c book.cpp
exception.o : exception.cpp
	g++ -c exception.cpp
item.o : item.cpp
	g++ -c item.cpp
itemstore.o : itemstore.cpp
	g++ -c itemstore.cpp
order.o : order.cpp
	g++ -c order.cpp
orderstore.o : orderstore.cpp
	g++ -c orderstore.cpp
person.o : person.cpp
	g++ -c person.cpp
personstore.o : personstore.cpp
	g++ -c personstore.cpp
readfile.o : readfile.cpp
	g++ -c readfile.cpp
user.o : user.cpp
	g++ -c user.cpp
