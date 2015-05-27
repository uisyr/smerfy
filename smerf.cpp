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
class klakier
{
public:
 int x;
int y;
int range;
};
class Gargamel 
 {
public:
int x;
 int y;
 int range;
};
     
int main()
{
 	smerf tab[10];
 	int i;
  	for(i=0;i<10;i++)
{
   		tab[i].create((rand()%100),(rand()%100));
}
	for(i=0;i<10;i++)
	{
		cout<<tab[i].x<<"\t"<<tab[i].y<<"\n";
	}
}
