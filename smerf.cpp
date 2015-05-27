    #include <iostream>
    #include <cstdlib>
    using namespace std;
     
    class smerf
    {
    	public:
    		int x;
    		int y;
    };
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
    	smerf s1;
    	smerf s2;
    	smerf s3;
    	smerf s4;
    	smerf s5;
    	srand( time( NULL ) );
    	s1.x=(rand()%100);
    	s1.y=(rand()%100);
    	s2.x=(rand()%100);
    	s2.y=(rand()%100);
    	s3.x=(rand()%100);
    	s3.y=(rand()%100);
    	s4.x=(rand()%100);
    	s4.y=(rand()%100);
    	s5.x=(rand()%100);
    	s5.y=(rand()%100);
    }
