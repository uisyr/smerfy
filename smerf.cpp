 #include <iostream>
 #include <cstdlib>
using namespace std;

 class smerf
 {
 public:
	int x;
	int y;
	void create(int xp, int yp);
     
  };
void smerf::create(int xp, int yp)
 {
 	x = xp;
   	y = yp;
 }

class evil
 {
public:
int x;
 int y;
 int range;
 void create(int xp, int yp, int rangep);
};
void evil::create(int xp, int yp, int rangep)
{
	x = xp;
	y = yp;
	range = rangep;
}
     
int main()
{
 	smerf tab[10];
 	int i;
  	for(i=0;i<10;i++)
{
   		tab[i].create((rand()%100),(rand()%100));
}
	evil Gargamel;
	evil Klakier;
	Gargamel.create(rand()%100,rand()%100,5);
	Klakier.create(rand()%100,rand()%100,3);
}
