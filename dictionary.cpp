#include "dictionaryHead"

DICT::DICT(int size)
// This is the constructor for
// the dictionary class.
{
	if(size > 0)
		d.resize(size);
}

itr DICT::locateWord(WORD w)
// Returns an iterator. This member
// function is used to detect if a word
// entry exists in the dictionary. 
{
	int i = 0;
	while(i != d.size())
	{
		ENTRY tmp = d.at(i);
		if(tmp.w == w)
			return i;
		i++;
	}
	return -1;
}

void DICT::insert(WORD w)
// Inserts a word into the provided dictionary.
// This is done by changing pointers as
// it's implimentation is via linked lists.
// It returns a boolean to indicate sucess.
{
	ENTRY tmp;
	for(int i = 0; i < d.size(); i++)
	{
		tmp = d[i];
		if(tmp.w == "")
		{
			tmp.w = w;
			tmp.freq = 0;
			d[i] = tmp;
		} else if (i == (d.size - 1))
		{
			cout << "Unable to insert \"" << w
			<< "\" in the dictionary." << endl;
		}
	}
}

DICT operator+ (WORD w)
// This function overloads the '+' operator
// with the insert function, for the purposes
// of adding words to the dictionary.
{
	(*this).insert(w);
	return *this;
}

void DICT::dump (ostream &o, int i)
// Prints the ditionary out a sorted order.
{
	ENTRY tmp;
	if(i == -1)
		i = d.size();
	for(int j = 0; j < i; j++)
	{
		tmp = d[j];
		o << tmp.w << "	" << tmp.freq << endl;
	}
}


ostream &operator<< (ostream & o, DICT & d)
// This function overloads the '<<' operator
// with the dump funtion, for the purposes
// of dumping the dictionary.
{
		ENTRY tmp;
		for(int j = 0; j < d.d.size(); j++)
		{
			tmp = d[j];
			o << tmp.w << "	" << tmp.freq << endl;
		}
		return o;
}
