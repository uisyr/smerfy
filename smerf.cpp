 #include <iostream>
 #include <cstdlib>
 #include<math.h>
using namespace std;
int sprawdzam(int sx, int sy, int gx, int gy, int kx, int ky, int gr, int kr);

 class smerf
 {
 public:
	int x;
	int y;
	int state = 1;
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
 	int i,j,k;
	k=0;
  	for(i=0;i<10;i++)
{
   		tab[i].create((rand()%100),(rand()%100));
}
	evil Gargamel;
	evil Klakier;
	Gargamel.create(rand()%100,rand()%100,5);
	Klakier.create(rand()%100,rand()%100,3);
	for(i=0;i<30;i++)
	{
		for(j=0;j<10;j++)
		{
			if(tab[j].state==1)
			{
				if(sprawdzam(tab[i].x,tab[i].y,Gargamel.x,Gargamel.y,Klakier.x,Klakier.y,Gargamel.range,Klakier.range)==0)
				{
					tab[j].state=0;
					k++;
					tab[j].x=rand()%100;
					tab[j].y=rand()%100;
				}
			}
		}		
	}
	cout<<"Gargamel i Klakier złapali"<<k<<" smerfów"<<"\n";
}

int sprawdzam(int sx, int sy, int gx, int gy, int kx, int ky, int gr, int kr)
{
	if(sqrt((sx-gx)*(sx-gx)+(sy-gy)*(sy-gy))>gr&&sqrt((sx-kx)*(sx-kx)+(sy-ky)*(sy-ky))>kr)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
