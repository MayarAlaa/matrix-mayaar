 #include<iostream>
#include<string>
#include<cstdlib>
using namespace std ;

void mayar(string u,float O[][100],int & m,int &n )
{
	
	
	getline(cin,u) ;
	

	

 m = 1; //m number of rows of matrix 1
 n = 1; //n number of columns of matrix 1

int w = u.find(';',0);
if (w==-1)
	n=2;

	for(int i=0;i<w;i++)
	{
		if(u[i]==' ')
		n=n+1 ;	
		
	}

	for(int i=0;i<u.length();i++)
{
	
	if (u[i]==';')
	{
		m=m+1;
	u.erase(i,1) ;
	u.insert(i," ");
	
	
	
	}
	
	}
	u.erase(0,1);
	u.erase(u.length()-1,1);
	int starts=0;
	string J [100][100];
	for(int i=0;i<m;i++)
	{
		
		
		for(int j=0;j<n;j++)
		{
			
		int S1 =u.find(" ",starts);
			J[i][j]=u.substr(starts,S1-starts);

	
	starts=S1+1;
	}
	
	}
	
	
	
	 O[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
	
	O[i][j]=atof(J[i][j].c_str());

		
		}
		
	}
	
}
int main ()


{
	string XX ;
	float YY[100][100];
	int m;
	int n ;
	mayar(XX,YY,m,n);
	

	char v ;
	cin>>v;

	cin.ignore();
	 
	float C[100][100];
	switch(v)
	{
	
	case('+'):
		{
		string z ;
		float V [100][100] ;
		
		int p=1;
		int q=1 ;
	

	
	mayar ( z, V, p, q);
	

			if (m==p && n==q)
{
		 for (int i=0;i<m;i++)
		 {
			 for (int j=0;j<n;j++)
			 {
				 C[i][j]=YY[i][j]+V[i][j];
			 }
		 }
		 cout<<"[";
		 for (int i=0;i<m;i++)
		 {
			
			 for (int j=0;j<n;j++)
			 {
				 cout<<C[i][j];
				if(j<n-1)
					cout<<" " ;
				
				else if(j==n-1&&i!=m-1)
					cout<<";";
				
					 
	}
		if(i==m-1)
			cout<<"]";
			}
			}
	else 
	{
	cout<<"ERROR" ;
	exit(EXIT_FAILURE);
	}
			
break;

		}
			
	case('-'):
		{
			string z ;
	int p;
	int q;
	float V[100][100];
	mayar(z,V,p,q);
		if (m==p && n==q)
	{
		 for (int i=0;i<m;i++)
		 {
			 for (int j=0;j<n;j++)
			 {
				 C[i][j]=YY[i][j]-V[i][j];
			 }
		 }
		 cout<<"[";
		 
		 for (int i=0;i<m;i++)
		 {
			 
			 for (int j=0;j<n;j++)
			 {
				 cout<<C[i][j];
		  
				if(j<n-1)
					cout<<" " ;
				
				else if(j==n-1&&i!=m-1)
					cout<<";";
			
			 }

			 if(i==m-1)
				
					cout<<"]";
		 }
		
	}
		
	else 
	{
		cout<<"ERROR" ;
	exit(EXIT_FAILURE);
	}
		break;
		}
		
			case('*'):
		{
			string z ;
	
	

	
	
	
	int p;  //p no of rows of matrix 2

int  q; // q no of columns of matrix 2
 float V[100][100];
 
 mayar (z,V,p,q);



	
			if (n==p)
	{
		 for (int i=0;i<m;i++)
		 {
			 for (int j=0;j<q;j++)
			 {
				  C[i][j]=0;
				 for(int k =0;k<n;k++)
				 {
					 C[i][j]=C[i][j]+YY[i][k]*V[k][j] ;
				 }
			 }
		 }
		 cout<<"[";
		 
		 for (int i=0;i<m;i++)
		 {
			 
			 for (int j=0;j<q;j++)
			 {
				
				 cout<<C[i][j];
				 if(j<q-1)
					cout<<" " ;
				
				else if(j==q-1&&i!=m-1)
					cout<<";";
			
				  
			
			 }
			
			 if(i==m-1)
				 cout<<"]";
		 }
		
	}
	else 
	{
		cout<<"ERROR" ;
	exit(EXIT_FAILURE);
	}
break;
	 
	 }
			case ('T'):
		{
			
			for (int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					
					
					float term ;
					term =YY[i][j];
					YY[i][j]=YY[j][i];
					YY[j][i]=term;
					
					
				}
			}

			cout<<"[";
			for(int j=0;j<n;j++)
			{
				for (int i=0;i<m;i++)
				{
					cout<<YY[j][i];
					 if(i<m-1)
					cout<<" " ;
				
				else if(i==m-1&&j!=n-1)
					cout<<";";
			
		}
				if(j==n-1)
				 cout<<"]";
		}
		break;	 
		}
			case('^'):
				{
					
					int b;
					cin>>b;
					if(b<0)
					{
						cout<<"ERROR";
					exit(EXIT_FAILURE);

					}
					else if (m!=n)
					{
						cout<<"ERROR";
					exit(EXIT_FAILURE);
					}
					else
					{ 
						
						
							for (int i=0;i<m;i++)
		 {
			 for (int j=0;j<n;j++)
			 {
				  C[i][j]=0;
				 for(int k =0;k<n;k++)
				 {
					 C[i][j]=C[i][j]+YY[i][k]*YY[k][j] ;
					 	
				 }
			 }
		 }
							float F[100][100];
							for (int i=0;i<m;i++)
		 {
			 for (int j=0;j<n;j++)
			 {
				  
				 for(int k =0;k<n;k++)
				 {
					F[i][j] =C[i][j]+C[i][k]*YY[k][j] ;
					 	
				 }
			 }
		 }
						
						
		 cout<<"[";
		 
		 for (int i=0;i<m;i++)
		 {
			 
			 for (int j=0;j<n;j++)
			 {
				cout<<F[i][j];
				 
				 if(j<n-1)
					cout<<" " ;
				
				else if(j==n-1&&i!=m-1)
					cout<<";";
			
				  
			
			 }
			
			 if(i==m-1)
				 cout<<"]";
		 }
		
	}
						
			
				break;
				}
				}
	 
	 
	 return 0;
	 
 
}