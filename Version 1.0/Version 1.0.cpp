#include<iostream>
using namespace std;
void first();
void second();
void third();
void four();
void five();
void six();
void seven();
void eight();
void nine();
int a[9]={0},g[3][3]={0};

int main()
{
	first();
	return 0;
}

void first()
{
	a[4]=1;
	cout<<"..................."<<endl
	    <<". "<<"   "<<" | "<<"   "<<" | "<<"   "<<" | "<<endl
		<<"..................."<<endl
		<<". "<<"   "<<" | "<<" O "<<" | "<<"   "<<" | "<<endl
		<<"..................."<<endl
		<<". "<<"   ";cout<<" | "<<"   "<<" | "<<"   "<<" | "<<endl
		<<"..................."<<endl;
		second();
}

void second()
{
	int c,d;
	cin>>c;
	if (c==1)
		a[c-1]=2;
	else if (c==2)
		a[c-1]=2;
	else if (c==3)
		a[c-1]=2;
	else if (c==4)
		a[c-1]=2;
	else if (c==5)
		a[c-1]=2;
	else if (c==6)
		a[c-1]=2;
	else if (c==7)
		a[c-1]=2;
	else if (c==8)
		a[c-1]=2;
	else
		a[c-1]=2;
	cout<<"..................."<<endl
		<<". ";if (a[0]==2)cout<<" X ";else if (a[0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[1]==2)cout<<" X ";else if (a[1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[2]==2)cout<<" X ";else if (a[2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (a[3]==2)cout<<" X ";else if (a[3]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	cout<<" O "<<" | ";
	if (a[5]==2)cout<<" X ";else if (a[5]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (a[6]==2)cout<<" X ";else if (a[6]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[7]==2)cout<<" X ";else if (a[7]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[8]==2)cout<<" X ";else if (a[8]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	if (c%3==0&&c%2!=0)
	{
		d=c-2;
	    a[d-1]=1;
	}
	else if (c%2!=0)
	{
		d=c+2;
		a[d-1]=1;
	}
	else 
	{
		if (c!=6)
		    a[c-2]=1;
		else
		    a[c]=1;
	}
	cout<<"..................."<<endl
		<<". ";if (a[0]==2)cout<<" X ";else if (a[0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[1]==2)cout<<" X ";else if (a[1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[2]==2)cout<<" X ";else if (a[2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (a[3]==2)cout<<" X ";else if (a[3]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	cout<<" O "<<" | ";
	if (a[5]==2)cout<<" X ";else if (a[5]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (a[6]==2)cout<<" X ";else if (a[6]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[7]==2)cout<<" X ";else if (a[7]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[8]==2)cout<<" X ";else if (a[8]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	third();
}

void third()
{
	int c,d,b,e,f;
	cin>>c;
	if (c==1)
		a[c-1]=2;
	else if (c==2)
		a[c-1]=2;
	else if (c==3)
		a[c-1]=2;
	else if (c==4)
		a[c-1]=2;
	else if (c==5)
		a[c-1]=2;
	else if (c==6)
		a[c-1]=2;
	else if (c==7)
		a[c-1]=2;
	else if (c==8)
		a[c-1]=2;
	else
		a[c-1]=2;
	cout<<"..................."<<endl
		<<". ";if (a[0]==2)cout<<" X ";else if (a[0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[1]==2)cout<<" X ";else if (a[1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[2]==2)cout<<" X ";else if (a[2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (a[3]==2)cout<<" X ";else if (a[3]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	cout<<" O "<<" | ";
	if (a[5]==2)cout<<" X ";else if (a[5]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (a[6]==2)cout<<" X ";else if (a[6]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[7]==2)cout<<" X ";else if (a[7]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (a[8]==2)cout<<" X ";else if (a[8]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	f=0;
	for (b=0;b<3;b++)
	{
		for (d=0;d<3;d++)
		{
			e=a[f];
			g[b][d]=e;
			f=f+1;
		}
	}
	four();
}

void four()
{
	int b,c,d,e,f,h,row,col;
	d=e=f=0;
	for (b=0;b<3;b++)
	{
		for (c=0;c<3;c++)
		{
			if (b==c)
			{
				if (g[b][c]==1)
					d=d+1;
				else if (g[b][c]==2)
					e=e+1;
				else
				{
					f=f+1;
					row=b;
					col=c;
				}
			}
		}
	}
	if (e==0&&d==2)
	{
		g[row][col]=1;
		cout<<"..................."<<endl
			<<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
		if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl
		    <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    cout<<" O "<<" | ";
	    if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl
		    <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl;
		cout<<"I Win Gongratulations To Me"<<endl;
	}
	else
	{
		d=e=f=0;
		for (b=0;b<3;b++)
		{
			for (c=0;c<3;c++)
			{
				if (c+b==2)
				{
					if (g[b][c]==1)
						d=d+1;
					else if (g[b][c]==2)
					    e=e+1;
				    else
				    {
					    f=f+1;
					    row=b;
					    col=c;
					}
				}
			}
		}
		if (e==0&&d==2)
		{
			g[row][col]=1;
		    cout<<"..................."<<endl
			    <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
		    if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl
		        <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        cout<<" O "<<" | ";
	        if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl
		        <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl;
		    cout<<"I Win Gongratulations To Me"<<endl;
		}
		else
		{
			for (b=0;b<3;b++)
			{
				d=e=f=h=0;
				for (c=0;c<3;c++)
				{
					if (g[c][b]==1)
						d=d+1;
					else if (g[c][b]==2)
						e=e+1;
					else
					{
						f=f+1;
						row=b;
						col=c;
					}
				}
				if (e==0&&d==2)
					h=1;
				if (h==1)
					break;
			}
			if (h==1)
			{
				g[row][col]=1;
		        cout<<"..................."<<endl
			        <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
		        if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl
		            <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            cout<<" O "<<" | ";
	            if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl
		            <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl;
		        cout<<"I Win Gongratulations To Me"<<endl;
			}
			else
			{
				for (b=0;b<3;b++)
				{
					d=e=f=h=0;
					for (c=0;c<3;c++)
					{
						if (g[c][b]==1)
							d=d+1;
						else if (g[c][b]==2)
							e=e+1;
						else
							f=f+1;
					}
					if (e==0&&d==2)
						h=1;
					if (h==1)
						break;
				}
				if (h==1)
				{
					g[row][col]=1;
					cout<<"..................."<<endl
			            <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
		            if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl
		                <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                cout<<" O "<<" | ";
	                if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl
		                <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl;
		            cout<<"I Win Gongratulations To Me"<<endl;
				}
				else
					five();
			}
		}
	}
}

void five()
{
	int b,c,d,e,f,h,row,col;
	for (b=0;b<3;b++)
	{
		d=e=f=h=0;
		for (c=0;c<3;c++)
		{
			if (g[b][c]==2)
				d=d+1;
			else if (g[b][c]==1)
				e=e+1;
			else
			{
				f=f+1;
				row=b;
				col=c;
			}
		}
		if (d==2&&f==1)
			h=1;
		if (h==1)
			break;
	}
	if (h==1)
		g[row][col]=1;
	else
	{
		for (b=0;b<3;b++)
		{
			d=e=f=h=0;
			for (c=0;c<3;c++)
			{
				if (g[c][b]==2)
					d=d+1;
			    else if (g[c][b]==1)
				    e=e+1;
			    else
			    {
				    f=f+1;
				    row=c;
				    col=b;
			    }
			}
			if (d==2&&f==1)
				h=1;
			if (h==1)
				break;
		}
		if (h==1)
			g[row][col]=1;
		else
		{
			d=e=f=h=0;
			for (b=0;b<3;b++)
			{
				for (c=0;c<3;c++)
				{
					if (c==b)
					{
						if (g[b][c]==2)
							d=d+1;
					    else if (g[b][c]==1)
						    e=e+1;
					    else
					    {
						    f=f+1;
						    row=b;
						    col=c;
					    }
				    }
			     }
			}
			if (d==0)
				g[row][col]=1;
			else
			{
				d=e=f=h=0;
				for (b=0;b<3;b++)
				{
					for (c=0;c<3;c++)
					{
						if (c+b==2)
						{
							if (g[b][c]==1)
								d=d+1;
							else if (g[b][c]==2)
								e=e+1;
							else
							{
								f=f+1;
								row=b;
								col=c;
							}
						}
					}
				}
				if (e==0)
					g[row][col]=1;
				else
				{
					for (b=0;b<3;b++)
					{
						d=e=f=h=0;
						for (c=0;c<3;c++)
						{
							if (g[b][c]==1)
								d=d+1;
							else if (g[b][c]==2)
								e=e+1;
							else
							{
								f=f+1;
								row=b;
								col=c;
							}
						}
						if (e==0)
							h=1;
						if (h==1)
							break;
					}
					if (h==1)
						g[row][col]=1;
					else
					{
						for (b=0;b<3;b++)
						{
							d=e=f=h=0;
							for (c=0;c<3;c++)
							{
								if (g[c][b]==1)
									d=d+1;
								else if (g[c][b]==2)
									e=e+1;
								else
								{
									f=f+1;
									row=c;
									col=b;
								}
							}
							if (e==0)
								h=1;
							if (h==1)
								break;
						}
						g[row][col]=1;
					}
				}
			}
		}
	}

	cout<<"..................."<<endl
		<<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	cout<<" O "<<" | ";
	if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	six();
}

void six()
{
	int b,c,d,e,f,h,row,col;
	cin>>c;
	if (c==1)
		g[0][0]=2;
	else if (c==2)
		g[0][1]=2;
	else if (c==3)
		g[0][2]=2;
	else if (c==4)
		g[1][0]=2;
	else if (c==6)
		g[1][2]=2;
	else if (c==7)
		g[2][0]=2;
	else if (c==8)
		g[2][1]=2;
	else
		g[2][2]=2;
	cout<<"..................."<<endl
		<<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	cout<<" O "<<" | ";
	if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	d=e=f=0;
	for (b=0;b<3;b++)
	{
		for (c=0;c<3;c++)
		{
			if (b==c)
			{
				if (g[b][c]==1)
					d=d+1;
				else if (g[b][c]==2)
					e=e+1;
				else
				{
					f=f+1;
					row=b;
					col=c;
				}
			}
		}
	}
	if (d==2&&f==1)
	{
		g[row][col]=1;
		cout<<"..................."<<endl
		    <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl
		    <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    cout<<" O "<<" | ";
	    if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl
		    <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl;
		cout<<"I Win Gongratulations To Me"<<endl;
	}
	else
	{
		d=e=f=h=0;
		for (b=0;b<3;b++)
		{
			for (c=0;c<3;c++)
			{
				if (b+c==2)
				{
					if (g[b][c]==1)
						d=d+1;
					else if (g[b][c]==2)
						e=e+1;
					else
					{
						f=f+1;
						row=b;
						col=c;
					}
				}
			}
		}
		if (d==2&&f==1)
		{
			g[row][col]=1;
			cout<<"..................."<<endl
		        <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl
		        <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        cout<<" O "<<" | ";
	        if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl
		        <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl;
			cout<<"I Win Gongratulations To Me"<<endl;
		}
		else
		{
			for (b=0;b<3;b++)
			{
				d=e=f=h=0;
				for (c=0;c<3;c++)
				{
					if (g[b][c]==1)
						d=d+1;
					else if (g[b][c]==2)
						e=e+1;
					else
					{
						f=f+1;
						row=b;
						col=c;
					}
				}
				if (d==2&&f==1)
					h=1;
				if (h==1)
					break;
			}
			if (h==1)
			{
				g[row][col]=1;
				cout<<"..................."<<endl
		            <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl
		            <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            cout<<" O "<<" | ";
	            if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl
		            <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl;
				cout<<"I Win Gongratulations To Me"<<endl;
			}
			else
			{
				for (b=0;b<3;b++)
				{
					d=e=f=h=0;
					for (c=0;c<3;c++)
					{
						if (g[c][b]==1)
							d=d+1;
						else if (g[c][b]==2)
							e=e+1;
						else
						{
							f=f+1;
							row=c;
							col=b;
						}
					}
					if (d==2&&f==1)
						h=1;
					if (h==1)
						break;
				}
				if (h==1)
				{
					g[row][col]=1;
					cout<<"..................."<<endl
		                <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl
		                <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                cout<<" O "<<" | ";
	                if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl
		                <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl;
					cout<<"I Win Gongratulations To Me"<<endl;
				}
				else
					seven();
			}
		}
	}
}

void seven()
{
	int b,c,d,e,f,h,row,col;
	for (b=0;b<3;b++)
	{
		d=e=f=h=0;
		for (c=0;c<3;c++)
		{
			if (g[b][c]==2)
				d=d+1;
			else if (g[b][c]==1)
				e=e+1;
			else
			{
				f=f+1;
				row=b;
				col=c;
			}
		}
		if (d==2&&f==1)
			h=1;
		if (h==1)
			break;
	}
	if (h==1)
		g[row][col]=1;
	else
	{
		for (b=0;b<3;b++)
		{
			d=e=f=h=0;
			for (c=0;c<3;c++)
			{
				if (g[c][b]==2)
					d=d+1;
			    else if (g[c][b]==1)
				    e=e+1;
			    else
			    {
				    f=f+1;
				    row=c;
				    col=b;
			    }
			}
			if (d==2&&f==1)
				h=1;
			if (h==1)
				break;
		}
		if (h==1)
			g[row][col]=1;
		else
		{
			d=e=f=h=0;
			for (b=0;b<3;b++)
			{
				for (c=0;c<3;c++)
				{
					if (c==b)
					{
						if (g[b][c]==2)
							d=d+1;
					    else if (g[b][c]==1)
						    e=e+1;
					    else
					    {
						    f=f+1;
						    row=b;
						    col=c;
					    }
				    }
			     }
			}
			if (d==0)
				g[row][col]=1;
			else
			{
				d=e=f=h=0;
				for (b=0;b<3;b++)
				{
					for (c=0;c<3;c++)
					{
						if (c+b==2)
						{
							if (g[b][c]==1)
								d=d+1;
							else if (g[b][c]==2)
								e=e+1;
							else
							{
								f=f+1;
								row=b;
								col=c;
							}
						}
					}
				}
				if (e==0)
					g[row][col]=1;
				else
				{
					for (b=0;b<3;b++)
					{
						d=e=f=h=0;
						for (c=0;c<3;c++)
						{
							if (g[b][c]==1)
								d=d+1;
							else if (g[b][c]==2)
								e=e+1;
							else
							{
								f=f+1;
								row=b;
								col=c;
							}
						}
						if (e==0)
							h=1;
						if (h==1)
							break;
					}
					if (h==1)
						g[row][col]=1;
					else
					{
						for (b=0;b<3;b++)
						{
							d=e=f=h=0;
							for (c=0;c<3;c++)
							{
								if (g[c][b]==1)
									d=d+1;
								else if (g[c][b]==2)
									e=e+1;
								else
								{
									f=f+1;
									row=c;
									col=b;
								}
							}
							if (e==0)
								h=1;
							if (h==1)
								break;
						}
						g[row][col]=1;
					}
				}
			}
		}
	}

	cout<<"..................."<<endl
		<<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	cout<<" O "<<" | ";
	if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	eight();
}

void eight()
{
	int b,c,d,e,f,h,row,col;
	cin>>c;
	if (c==1)
		g[0][0]=2;
	else if (c==2)
		g[0][1]=2;
	else if (c==3)
		g[0][2]=2;
	else if (c==4)
		g[1][0]=2;
	else if (c==6)
		g[1][2]=2;
	else if (c==7)
		g[2][0]=2;
	else if (c==8)
		g[2][1]=2;
	else
		g[2][2]=2;
	cout<<"..................."<<endl
		<<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	cout<<" O "<<" | ";
	if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	d=e=f=0;
	for (b=0;b<3;b++)
	{
		for (c=0;c<3;c++)
		{
			if (b==c)
			{
				if (g[b][c]==1)
					d=d+1;
				else if (g[b][c]==2)
					e=e+1;
				else
				{
					f=f+1;
					row=b;
					col=c;
				}
			}
		}
	}
	if (d==2&&f==1)
	{
		g[row][col]=1;
		cout<<"..................."<<endl
		    <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl
		    <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    cout<<" O "<<" | ";
	    if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl
		    <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	    if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		    <<"..................."<<endl;
		cout<<"I Win Gongratulations To Me"<<endl;
	}
	else
	{
		d=e=f=h=0;
		for (b=0;b<3;b++)
		{
			for (c=0;c<3;c++)
			{
				if (b+c==2)
				{
					if (g[b][c]==1)
						d=d+1;
					else if (g[b][c]==2)
						e=e+1;
					else
					{
						f=f+1;
						row=b;
						col=c;
					}
				}
			}
		}
		if (d==2&&f==1)
		{
			g[row][col]=1;
			cout<<"..................."<<endl
		        <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl
		        <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        cout<<" O "<<" | ";
	        if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl
		        <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	        if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		        <<"..................."<<endl;
			cout<<"I Win Gongratulations To Me"<<endl;
		}
		else
		{
			for (b=0;b<3;b++)
			{
				d=e=f=h=0;
				for (c=0;c<3;c++)
				{
					if (g[b][c]==1)
						d=d+1;
					else if (g[b][c]==2)
						e=e+1;
					else
					{
						f=f+1;
						row=b;
						col=c;
					}
				}
				if (d==2&&f==1)
					h=1;
				if (h==1)
					break;
			}
			if (h==1)
			{
				g[row][col]=1;
				cout<<"..................."<<endl
		            <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl
		            <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            cout<<" O "<<" | ";
	            if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl
		            <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	            if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		            <<"..................."<<endl;
				cout<<"I Win Gongratulations To Me"<<endl;
			}
			else
			{
				for (b=0;b<3;b++)
				{
					d=e=f=h=0;
					for (c=0;c<3;c++)
					{
						if (g[c][b]==1)
							d=d+1;
						else if (g[c][b]==2)
							e=e+1;
						else
						{
							f=f+1;
							row=c;
							col=b;
						}
					}
					if (d==2&&f==1)
						h=1;
					if (h==1)
						break;
				}
				if (h==1)
				{
					g[row][col]=1;
					cout<<"..................."<<endl
		                <<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl
		                <<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                cout<<" O "<<" | ";
	                if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl
		                <<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	                if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		                <<"..................."<<endl;
					cout<<"I Win Gongratulations To Me"<<endl;
				}
				else
					nine();
			}
		}
	}
}

void nine()
{
	int b,c,d,e,f,h,row,col;
	for (b=0;b<3;b++)
	{
		d=e=f=h=0;
		for (c=0;c<3;c++)
		{
			if (g[b][c]==2)
				d=d+1;
			else if (g[b][c]==1)
				e=e+1;
			else
			{
				f=f+1;
				row=b;
				col=c;
			}
		}
		if (d==2&&f==1)
			h=1;
		if (h==1)
			break;
	}
	if (h==1)
		g[row][col]=1;
	else
	{
		for (b=0;b<3;b++)
		{
			d=e=f=h=0;
			for (c=0;c<3;c++)
			{
				if (g[c][b]==2)
					d=d+1;
			    else if (g[c][b]==1)
				    e=e+1;
			    else
			    {
				    f=f+1;
				    row=c;
				    col=b;
			    }
			}
			if (d==2&&f==1)
				h=1;
			if (h==1)
				break;
		}
		if (h==1)
			g[row][col]=1;
		else
		{
			d=e=f=h=0;
			for (b=0;b<3;b++)
			{
				for (c=0;c<3;c++)
				{
					if (c==b)
					{
						if (g[b][c]==2)
							d=d+1;
					    else if (g[b][c]==1)
						    e=e+1;
					    else
					    {
						    f=f+1;
						    row=b;
						    col=c;
					    }
				    }
			     }
			}
			if (d==0)
				g[row][col]=1;
			else
			{
				d=e=f=h=0;
				for (b=0;b<3;b++)
				{
					for (c=0;c<3;c++)
					{
						if (c+b==2)
						{
							if (g[b][c]==1)
								d=d+1;
							else if (g[b][c]==2)
								e=e+1;
							else
							{
								f=f+1;
								row=b;
								col=c;
							}
						}
					}
				}
				if (e==0)
					g[row][col]=1;
				else
				{
					for (b=0;b<3;b++)
					{
						d=e=f=h=0;
						for (c=0;c<3;c++)
						{
							if (g[b][c]==1)
								d=d+1;
							else if (g[b][c]==2)
								e=e+1;
							else
							{
								f=f+1;
								row=b;
								col=c;
							}
						}
						if (e==0)
							h=1;
						if (h==1)
							break;
					}
					if (h==1)
						g[row][col]=1;
					else
					{
						for (b=0;b<3;b++)
						{
							d=e=f=h=0;
							for (c=0;c<3;c++)
							{
								if (g[c][b]==1)
									d=d+1;
								else if (g[c][b]==2)
									e=e+1;
								else
								{
									f=f+1;
									row=c;
									col=b;
								}
							}
							if (e==0)
								h=1;
							if (h==1)
								break;
						}
						g[row][col]=1;
					}
				}
			}
		}
	}

	cout<<"..................."<<endl
		<<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	cout<<" O "<<" | ";
	if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	cout<<"NO ONE WIN THE GAME"<<endl;
}
