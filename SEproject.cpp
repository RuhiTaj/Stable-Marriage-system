#include<iostream>
#include<string.h>
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

class person
{
	public:
	int age,salary;
	char complexion,profession,place;
	//Preferences
	int minSalary,minAge,maxAge;
	char preferredComplexion,preferredProfession[5],preferredPlaces[5];
	char sex;
	person()
	{
		int i;
		for(i=0;i<5;i++)
		{
			preferredPlaces[i]=' ';
			preferredProfession[i]=' ';
		}
	}
	
		int addAge()
	{
		cout<<"\nEnter your age\n";
		cin>>age;
		return age;
	}

	int addSalary()
	{	
		cout<<"\nEnter your salary per annum (In lakhs)\n";
		cin>>salary;
		return salary;
	}

	char addComplexion()
	{
		cout<<"\nEnter your complexion (fair-'f',dark-'d',wheatish-'w'(Any other character will imply no input))\n";
		cin>>complexion;
		return complexion;
	}

	char addProfession()
	{
		cout<<"\nEnter your profession(engineer-'e',doctor-'d',scientist-'s',lawyer-'l',professor-'p'(Any other character will imply no input))";
		cin>>profession;
		return profession;
	}

	char addPlace()
	{
		cout<<"\nEnter your place(Bangalore-'b',Mumbai-'m',Chennai-'c',Kolkata-'k',New Delhi-d'(Any other character will imply no input))";
		cin>>place;
		return place;
	}

	int addMinAge()
	{
		cout<<"\nEnter minimum age\n";
		cin>>minAge;
		return minAge;
	}

	int addMaxAge()
	{
		cout<<"\nEnter maximum age\n";
		cin>>maxAge;
		return maxAge;
	}

	int addMinSalary()
	{
		cout<<"\nEnter minimum salary\n";
		cin>>minSalary;
		return minSalary;
	}

	char addPreferredComplexion()
	{
		cout<<"\nEnter complexion preferred(fair-'f',dark-'d',wheatish-'w'(Any other character will imply no preferences))\n";
		cin>>preferredComplexion;
		return preferredComplexion;
	}

	char* addPreferredProfession()
	{
		int i;
		cout<<"\nEnter the preferences of profession(engineer-'e',doctor-'d',scientist-'s',lawyer-'l',professor-'p'(Any other character will imply no preferences))";
		for(i=0;i<5;i++)
		{
			cin>>preferredProfession[i];
		}
		return preferredProfession;
	}

	char* addPreferredPlaces()
	{
		int i;
		cout<<"\nEnter the preferences of places(Bangalore-'b',Mumbai-'m',Chennai-'c',Kolkata-'k',New Delhi-d'(Any other character will imply no preferences))";
		for(i=0;i<5;i++)
		{
			cin>>preferredPlaces[i];
		}
		return preferredPlaces;
	}
};





class manager
{
char name[50];
int ID;
public:
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

void giveResult(int N, int prefer[][100])
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
    cout << "Woman   Man" << endl;
    for (int i = 0; i < N; i++)
        cout << " " << i + N + 1 << "\t" << wPartner[i] + 1<< endl;
}

int getAge(int v, int x)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
	}
	else if(v==0)
	{
		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");	
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"getAge"<<endl;
    }
    return a;
}

int getSalary(int v, int x)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
	}
	else if(v==0)
	{
		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");	
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
    }
    return b;
}

char getComplexion(int v, int x)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
	}
	else if(v==0)
	{
		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");	
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
    }
    return c;
}

char getProfession(int v, int x)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
	}
	else if(v==0)
	{
		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");	
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
    }
    return d;	
}

char getPlace(int v, int x)
{
    int a,b;
    char c,d,e;
    ifstream f;
    if(v==1)
    {
    	f.open("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
	}
	else if(v==0)
	{
		f.open("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");	
	}
    f.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f>>a>>b>>c>>d>>e;
    }
    return e;
}

int getMaxAge(int v, int x)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
	}
	else if(v==1)
	{
		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");	
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<*e<<*(e+1)<<*(e+2)<<*(e+3)<<*(e+4)<<*f<<*(f+1)<<*(f+2)<<*(f+3)<<*(f+4)<<endl;
    }
    return b;
}

int getMinAge(int v, int x)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
	}
	else if(v==1)
	{
		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");	
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<*e<<*(e+1)<<*(e+2)<<*(e+3)<<*(e+4)<<*f<<*(f+1)<<*(f+2)<<*(f+3)<<*(f+4)<<endl;
    }
    return a;
}

int getPreferredSalary(int v, int x)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
	}
	else if(v==1)
	{
		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");	
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
    }
    return c;
}

char getPreferredComplexion(int v, int x)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);    
    ifstream f1;
    if(v==0)
    {
    	f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
	}
	else if(v==1)
	{
		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");	
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
    }
    return d;
}

char* getPreferredProfession(int v, int x)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
	}
	else if(v==1)
	{
		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");	
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
    }
    return e;
}

char* getPreferredPlaces(int v, int x)
{
    int a,b,c;
    char d;
    char *e=(char*)malloc(sizeof(char)*5);
    char *f=(char*)malloc(sizeof(char)*5);
    ifstream f1;
    if(v==0)
    {
    	f1.open("/home/jeshventh/Desktop/Project_SE/mPProfile1.txt");
	}
	else if(v==1)
	{
		f1.open("/home/jeshventh/Desktop/Project_SE/wPProfile1.txt");	
	}
    f1.seekg(0);
    for(int i=0;i<=x;i++)
    {
        f1>>a>>b>>c>>d>>*e>>*(e+1)>>*(e+2)>>*(e+3)>>*(e+4)>>*f>>*(f+1)>>*(f+2)>>*(f+3)>>*(f+4);
    }
    return f;
}

int assignPriority(int a,int m,int n)
{
	int priority=0;
	if(getAge(a,n)<=getMaxAge(a,m) && getAge(a,n)>=getMinAge(a,m))
		priority++;
	if(getSalary(a,n)>=getPreferredSalary(a,m))
		priority++;
	if(getComplexion(a,n)==getPreferredComplexion(a,m))
		priority++;
	if(getProfession(a,n)==(getPreferredProfession(a,m))[0])
		priority+=4;
	else if(getProfession(a,n)==(getPreferredProfession(a,m))[1])
		priority+=3; 
	else if(getProfession(a,n)==getPreferredProfession(a,m)[2])
		priority+=2;
	else if(getProfession(a,n)==getPreferredProfession(a,m)[3])
		priority+=1;
	else if(getProfession(a,n)==getPreferredProfession(a,m)[4])
		priority+=0;
	if(getPlace(a,n)==getPreferredPlaces(a,m)[0])
		priority+=4;
	else if(getPlace(a,n)==getPreferredPlaces(a,m)[1])
		priority+=3; 
	else if(getPlace(a,n)==getPreferredPlaces(a,m)[2])
		priority+=2;
	else if(getPlace(a,n)==getPreferredPlaces(a,m)[3])
		priority+=1;
	else if(getPlace(a,n)==getPreferredPlaces(a,m)[4])
		priority+=0;

	//cout<<priority<<endl;
	return priority;
}

int getTotalm()
{
    ifstream f1("/home/jeshventh/Desktop/Project_SE/mProfile1.txt");
    int i=0;
    string name;
    while(!f1.eof())
    {
        getline(f1,name);
        i++;
    }
    return i-1;
}

int getTotalw()
{
    ifstream f1("/home/jeshventh/Desktop/Project_SE/wProfile1.txt");
    int i=0;
    string name;
    while(!f1.eof())
    {
        getline(f1,name);
        i++;
    }
    return i-1;
}

public:

	void login()
	{

	}

	void signup()
	{

	}

	void stableMarriage()
	{
		int i=2*max(getTotalm(),getTotalw()),j=max(getTotalm(),getTotalw()),matrix[i][100],k,l,temp[2][j],m,n,temp1,temp2,pos,min;
		for(k=0;k<i;k++)
			for(l=0;l<j;l++)
				matrix[k][l]=0;
		for(k=0;k<i/2;k++)
		{
			for(l=0;l<j;l++)
			{
				temp[0][l]=assignPriority(0,k,l);
				temp[1][l]=getTotalm()+l+1;
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
				temp[0][l]=assignPriority(1,k-getTotalm(),l);
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
		cout<<"\n\n";
		for(m=0;m<i;m++)
		{
			for(n=0;n<j;n++)
			{
				cout<<matrix[m][n]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n\n";
		giveResult(j,matrix);
	}

}m;

class bride:public person
{
public:
	bride()
	{
		sex='F';
	}

	void enterDetails(int x)
	{
		int a,b;
		char c,d,e;
		a=addAge();
		b=addSalary();
		c=addComplexion();
		d=addProfession();
		e=addPlace();
    	string name;
    	ifstream f1("/home/jeshventh/Desktop/Project_SE/wProfile2.txt");
    	fstream f("/home/jeshventh/Desktop/Project_SE/wProfile2.txt", std::ios::in | std::ios::out | std::ios::ate);
    	if((x-1)==m.getTotalw())
    	{
    		f<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";
    	}
    	else
    	{
    		for(int j=0;j<x-1;j++)
    		{
    		    getline(f1,name);
    		}
    		int temp=f1.tellg();
    		f.seekp(temp);
    		f<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";
    	}

	}

	void addPreferences(int x)
	{
		int a,b,c;
		char d,*e,*f;
		a=addMinAge();
		b=addMaxAge();
		c=addMinSalary();
		d=addPreferredComplexion();
		e=addPreferredProfession();
		f=addPreferredPlaces();
		string name;
    	ifstream f1("/home/jeshventh/Desktop/Project_SE/wPProfile2.txt");
    	fstream f2("/home/jeshventh/Desktop/Project_SE/wPProfile2.txt", std::ios::in | std::ios::out | std::ios::ate);
    	if((x-1)==m.getTotalw())
    	{
    		f2<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<*e<<" "<<*(e+1)<<" "<<*(e+2)<<" "<<*(e+3)<<" "<<*(e+4)<<" "<<*f<<" "<<*(f+1)<<" "<<*(f+2)<<" "<<*(f+3)<<" "<<*(f+4)<<"\n";
    	}
    	else
    	{
    		for(int j=0;j<x-1;j++)
    		{
    		    getline(f1,name);
    		}
    		int temp=f1.tellg();
    		f2.seekp(temp);
    		f2<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<*e<<" "<<*(e+1)<<" "<<*(e+2)<<" "<<*(e+3)<<" "<<*(e+4)<<" "<<*f<<" "<<*(f+1)<<" "<<*(f+2)<<" "<<*(f+3)<<" "<<*(f+4)<<"\n";
    	}
	}
};






class bridegroom:public person
{
public:
	bridegroom()
	{
		sex='M';
	}

	void enterDetails(int x)
	{
		int a,b;
		char c,d,e;
		a=addAge();
		b=addSalary();
		c=addComplexion();
		d=addProfession();
		e=addPlace();
    	string name;
    	ifstream f1("/home/jeshventh/Desktop/Project_SE/mProfile2.txt");
    	fstream f("/home/jeshventh/Desktop/Project_SE/mProfile2.txt", std::ios::in | std::ios::out | std::ios::ate);
    	if((x-1)==m.getTotalm())
    	{
    		f<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";
    	}
    	else
    	{
    		for(int j=0;j<x-1;j++)
    		{
    		    getline(f1,name);
    		}
    		int temp=f1.tellg();
    		f.seekp(temp);
    		f<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";
    	}

	}

	void addPreferences(int x)
	{
		int a,b,c;
		char d,*e,*f;
		a=addMinAge();
		b=addMaxAge();
		c=addMinSalary();
		d=addPreferredComplexion();
		e=addPreferredProfession();
		f=addPreferredPlaces();
		string name;
    	ifstream f1("/home/jeshventh/Desktop/Project_SE/mPProfile2.txt");
    	fstream f2("/home/jeshventh/Desktop/Project_SE/mPProfile2.txt", std::ios::in | std::ios::out | std::ios::ate);
    	if((x-1)==m.getTotalm())
    	{
    		f2<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<*e<<" "<<*(e+1)<<" "<<*(e+2)<<" "<<*(e+3)<<" "<<*(e+4)<<" "<<*f<<" "<<*(f+1)<<" "<<*(f+2)<<" "<<*(f+3)<<" "<<*(f+4)<<"\n";
    	}
    	else
    	{
    		for(int j=0;j<x-1;j++)
    		{
    		    getline(f1,name);
    		}
    		int temp=f1.tellg();
    		f2.seekp(temp);
    		f2<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<*e<<" "<<*(e+1)<<" "<<*(e+2)<<" "<<*(e+3)<<" "<<*(e+4)<<" "<<*f<<" "<<*(f+1)<<" "<<*(f+2)<<" "<<*(f+3)<<" "<<*(f+4)<<"\n";
    	}
	}
};

int main()
{
	int n;
	char g;
	while(1)
	{
		cout<<"\nEnter your option\n1)Add User\n2)Give Result\n3)Exit\n";
		cin>>n;
		switch(n)
		{
			case 1:
					cout<<"\nEnter your gender('m' or 'f')\n";
					cin>>g;
					if(g=='m')
					{
						bridegroom a;
						a.enterDetails(m.getTotalm()+1);
						a.addPreferences(m.getTotalm()+1);
					}
					else if(g=='f')
					{
						bride a;
						a.enterDetails(m.getTotalw()+1);
						a.addPreferences(m.getTotalw()+1);
					}

					break;
			case 2:
					if(m.getTotalw()==m.getTotalm())
					{
						m.stableMarriage();
					}
					else
					{
						cout<<"\nThe number of brides and bridegroom should be equal\n";
						if(m.getTotalm()<m.getTotalw())
						{
							cout<<"Add "<<m.getTotalw()-m.getTotalm()<<" bridegroom(s)\n";
						}
						else
						{
							cout<<"Add "<<m.getTotalm()-m.getTotalw()<<" bride(s)\n";	
						}
					}
					break;
			case 3:
					exit(0);
		}
	}
	return 0;
}
