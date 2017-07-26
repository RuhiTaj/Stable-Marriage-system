// // whattotest.cpp
// #include <math.h>
 
// double squareRoot(const double a) {
//     double b = sqrt(a);
//     if(b != b) { // nan check
//         return -1.0;
//     }else{
//         return sqrt(a);
//     }
// }

#include<cstring>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;


int max(int a,int b)
{
	if(a>=b)
		return a;
	return b;
}

bool wPrefersM1OverM(int N,int prefer[][100], int w, int m, int m1)

{

    for (int i = 0; i < N; i++)

    {

        if (prefer[w][i] == m1)

            return true;

        if (prefer[w][i] == m)

           return false;

    }

}

int* giveResult(int N, int prefer[][100])
{
    int wPartner[N];
    bool mFree[N];
    memset(wPartner, -1, sizeof(wPartner));
    memset(mFree, false, sizeof(mFree));
    int freeCount = N;
    while (freeCount > 0)
    {
        int m;
        for ( m = 0; m < N; m++)
            if (mFree[m] == false)
                break;
        for (int i = 0; i < N && mFree[m] == false; i++)
        {
            int w = prefer[m][i];
            if (wPartner[w - N] == -1)
            {
                wPartner[w - N] = m;
                mFree[m] = true;
                freeCount--;
            }
 
            else
            {
                int m1 = wPartner[w-N];
                if (wPrefersM1OverM(N,prefer, w, m, m1) == false)
                {
                    wPartner[w-N] = m;
                    mFree[m] = true;
                    mFree[m1] = false;
                }
            }
        }
    }
    int *p=&wPartner[0];
    return p;
}	


int getAge(int v, int x,int y)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile2.txt");
	}
	else if(v==0)
	{
	    if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile2.txt");
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"getAge"<<endl;
    }
    return a;
}

int getSalary(int v, int x,int y)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile2.txt");
	}
	else if(v==0)
	{
	    if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile2.txt");
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
    }
    return b;
}

char getComplexion(int v, int x,int y)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile2.txt");
	}
	else if(v==0)
	{
	    if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile2.txt");
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
    }
    return c;
}

char getProfession(int v, int x,int y)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile2.txt");
	}
	else if(v==0)
	{
	    if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile2.txt");
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
    }
    return d;	
}

char getPlace(int v, int x,int y)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/mProfile2.txt");
	}
	else if(v==0)
	{
	    if(y==1)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile.txt");
    	else if(y==2)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");
    	else if(y==3)
    		f.open("/home/jeshventh/Desktop/Project_SE/wProfile2.txt");
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
    }
    return e;
}

int getMaxAge(int v, int x,int y)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile2.txt");
	}
	else if(v==1)
	{
	    if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile2.txt");
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<*e<<*(e+1)<<*(e+2)<<*(e+3)<<*(e+4)<<*f<<*(f+1)<<*(f+2)<<*(f+3)<<*(f+4)<<endl;
    }
    return b;
}

int getMinAge(int v, int x,int y)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile2.txt");
	}
	else if(v==1)
	{
	    if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile2.txt");
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<*e<<*(e+1)<<*(e+2)<<*(e+3)<<*(e+4)<<*f<<*(f+1)<<*(f+2)<<*(f+3)<<*(f+4)<<endl;
    }
    return a;
}

int getPreferredSalary(int v, int x,int y)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile2.txt");
	}
	else if(v==1)
	{
	    if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile2.txt");
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
    }
    return c;
}

char getPreferredComplexion(int v, int x,int y)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);    
    ifstream f1;
    if(v==0)
    {
    	if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile2.txt");
	}
	else if(v==1)
	{
	    if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile2.txt");
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
    }
    return d;
}

char* getPreferredProfession(int v, int x,int y)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile2.txt");
	}
	else if(v==1)
	{
	    if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile2.txt");
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
    }
    return e;
}

char* getPreferredPlaces(int v, int x,int y)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile2.txt");
	}
	else if(v==1)
	{
	    if(y==1)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile.txt");
    	else if(y==2)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");
    	else if(y==3)
    		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile2.txt");
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
    }
    return f;
}


int assignPriority(int a,int m,int n,int x)
{
	int priority=0;
	if(getAge(a,n,x)<=getMaxAge(a,m,x) && getAge(a,n,x)>=getMinAge(a,m,x))
		priority++;
	if(getSalary(a,n,x)>=getPreferredSalary(a,m,x))
		priority++;
	if(getComplexion(a,n,x)==getPreferredComplexion(a,m,x))
		priority++;
	if(getProfession(a,n,x)==(getPreferredProfession(a,m,x))[0])
		priority+=4;
	else if(getProfession(a,n,x)==(getPreferredProfession(a,m,x))[1])
		priority+=3; 
	else if(getProfession(a,n,x)==getPreferredProfession(a,m,x)[2])
		priority+=2;
	else if(getProfession(a,n,x)==getPreferredProfession(a,m,x)[3])
		priority+=1;
	else if(getProfession(a,n,x)==getPreferredProfession(a,m,x)[4])
		priority+=0;
	if(getPlace(a,n,x)==getPreferredPlaces(a,m,x)[0])
		priority+=4;
	else if(getPlace(a,n,x)==getPreferredPlaces(a,m,x)[1])
		priority+=3; 
	else if(getPlace(a,n,x)==getPreferredPlaces(a,m,x)[2])
		priority+=2;
	else if(getPlace(a,n,x)==getPreferredPlaces(a,m,x)[3])
		priority+=1;
	else if(getPlace(a,n,x)==getPreferredPlaces(a,m,x)[4])
		priority+=0;

	//cout<<priority<<endl;
	return priority;
}


int getTotalm(int x)
{
    ifstream f1;
    if(x==1)
    	f1.open("/home/jeshventh/Desktop/Project_SE/mProfile.txt");
    else if(x==2)
    	f1.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
    else if(x==3)
    	f1.open("/home/jeshventh/Desktop/Project_SE/mProfile2.txt");
    int i=0;
    string name;
    while(!f1.eof())
    {
        getline(f1,name);
        i++;
    }
    return i-1;
}

int getTotalw(int x)
{
    ifstream f1;
    if(x==1)
    	f1.open("/home/jeshventh/Desktop/Project_SE/wProfile.txt");
    else if(x==2)
    	f1.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");
    else if(x==3)
    	f1.open("/home/jeshventh/Desktop/Project_SE/wProfile2.txt");
    int i=0;
    string name;
    while(!f1.eof())
    {
        getline(f1,name);
        i++;
    }
    return i-1;
}


int** stableMarriage(int y)
{
	int i=2*max(getTotalm(y),getTotalw(y)),j=max(getTotalm(y),getTotalw(y)),matrix[i][100],k,l,temp[2][j],m,n,temp1,temp2,pos,min;
	for(k=0;k<i;k++)
		for(l=0;l<j;l++)
			matrix[k][l]=0;
	for(k=0;k<i/2;k++)
	{
		for(l=0;l<j;l++)
		{
			temp[0][l]=assignPriority(0,k,l,y);
			temp[1][l]=getTotalm(y)+l+1;
		}
		for(m=0;m<j;m++)
		{
			pos=m;
			int max=temp[0][m];
			for(n=m+1;n<j;n++)
			{
				if(temp[0][n]>max)
				{
					max=temp[0][n];
					pos=n;
				}
			}
			temp1=temp[0][pos];
			temp2=temp[1][pos];
			temp[0][pos]=temp[0][m];
			temp[1][pos]=temp[1][m];
			temp[0][m]=temp1;
			temp[1][m]=temp2;
		}
		for(l=0;l<j;l++)
		{
			matrix[k][l]=temp[1][l]-1;
		}
	}
	for(k=i/2;k<i;k++)
	{
		for(l=0;l<j;l++)
		{
			temp[0][l]=assignPriority(1,k-getTotalm(y),l,y);
			temp[1][l]=l+1;
		}
		for(m=0;m<j;m++)
		{
			pos=m;
			int max=temp[0][m];
			for(n=m+1;n<j;n++)
			{
				if(temp[0][n]>max)
				{
					max=temp[0][n];
					pos=n;
				}
			}
			temp1=temp[0][pos];
			temp2=temp[1][pos];
			temp[0][pos]=temp[0][m];
			temp[1][pos]=temp[1][m];
			temp[0][m]=temp1;
			temp[1][m]=temp2;
		}
		for(l=0;l<j;l++)
		{
			matrix[k][l]=temp[1][l]-1;
		}
	}
	int** p = new int*[i];
	for(l=0;l<i;l++)
	{
		p[l] = &matrix[l][0];
	}
	return p;
}
