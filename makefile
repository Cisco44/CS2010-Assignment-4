DicProg: dictionary.o driver.o
	g++ dictionary.o driver.o -o DicProg

dictionary.o: dictionary.cpp dictionaryHead
	g++ dictionary.cpp -c

driver.o: driver.cpp dictionaryHead
	g++ driver.cpp -c

clean:
	rm *.o DicProg
