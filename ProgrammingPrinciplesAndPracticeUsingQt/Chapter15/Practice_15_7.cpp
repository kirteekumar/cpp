#include <iostream>

using namespace std;

struct Link {
	Link(const string& v="", Link* p=nullptr, Link *s=nullptr)	:value{v},Prev{p},Next{s}{}
	string value;
	Link *Prev;
	Link *Next;
};

int main()
{
	Link * Br = new Link{"Br"};
	Link * Vs = new Link{"Vs"};
	Link * Mh = new Link{"Mh"};
		
	Br->Next=Vs;

	Vs->Prev=Br;
	Vs->Next=Mh;

	Mh->Prev=Vs;
		
	return 0;
}
