#include<iostream>
#include<cstdlib>
using namespace std;
void work();
void work2();
void easy();
void easy1();
int analyze_easy();
int user_play();
int analyze();
int analyze_second_step();
int Dysine();
int converion();
int modifications(int);
int computer_play();
int g[3][3]={0};

int main()
{
	int back,b,c=0;
	char a;
	for (;;)
	{
		b=c=0;
		cout<<"If You Want Hard Level Press 1"<<endl
			<<"If You Want Easy Level Press 2"<<endl;
		cin>>b;
		if (b==1)
		{
			cout<<"Enter The Number Of The Square ; The Square Is Numbered From 1 To 9"<<endl;
			back=modifications(b);
		    work();
		}
		else
		{
			cout<<"If You Want To Play First Press 1"<<endl
				<<"If You Want Computer To Play First Press 2"<<endl;
			cin>>c;
			cout<<"Enter The Number Of The Square ; The Square Is Numbered From 1 To 9"<<endl;
			back=modifications(b);
			if (c==1)
				easy();
			else
				easy1();
		}
		back=converion();
		cout<<"Do You Want To Play Again"<<endl
			<<"Press Y For Yes N For No"<<endl;
		cin>>a;
		if (a=='N'||a=='n')
			break;
	}
	return 0;
}

void work()
{
	int c,d,e,back;
	back=Dysine();
	c=user_play();
	if (c%3==0&&c%2!=0)
	{
		d=(c-4)/3;
	    e=(c-4)-d*3;
	    g[d][e]=1;
	}
	else if (c%2!=0)
	{
		d=(c+1)/3;
	    e=(c+1)-d*3;
	    g[d][e]=1;
	}
	else 
	{
		if (c!=6)
		{
			d=(c-2)/3;
	        e=(c-2)-d*3;
	        g[d][e]=1;
		}
		else
		    g[2][0]=1;
	}
	back=Dysine();
	back=user_play();
	back=analyze();
	if (back==0)
		converion();
	else
		work2();
}

void work2()
{
	int back;
	back=user_play();
	back=analyze();
	if (back==0)
		converion();
	else
	{
		back=user_play();
	    back=analyze();
	    if (back==0)
			converion();
	    else
	    {
		    back=Dysine();
	        cout<<"NO ONE IS WIN THE GAME"<<endl;
		    converion();
	    }
	}
}

void easy()
{
	int back;
	back=user_play();
	back=computer_play();
	back=Dysine();
	back=user_play();
	back=computer_play();
	back=Dysine();
	back=user_play();
	back=analyze_easy();
	if (back==0)
		converion();
	else
	{
		back=Dysine();
		back=computer_play();
	    back=analyze_easy();
	    if (back==0)
			converion();
		else
		{
			back=Dysine();
			back=user_play();
			back=analyze_easy();
			if (back==0)
				converion();
		    else
			{
				back=Dysine();
				back=computer_play();
	            back=analyze_easy();
	            if (back==0)
					converion();
	            else
                {
					back=Dysine();
					back=user_play();
					back=analyze_easy();
					if (back==0)
						converion();
					else
					{
	                    back=Dysine();
						cout<<"NO ONE IS WIN THE GAME"<<endl;
		                converion();
				    }
				}
			}
		}
	}
}
		
void easy1()
{
	int back;    
	back=computer_play();
	back=Dysine();
	back=user_play();
	back=computer_play();
	back=Dysine();
	back=user_play();
	back=computer_play();
	back=analyze_easy();
	if (back==0)
		converion();
	else
	{
	    back=Dysine();
		back=user_play();
		back=analyze_easy();
		if (back==0)
			converion();
		else
		{
			back=Dysine();
			back=computer_play();
	        back=analyze_easy();
	        if (back==0)
				converion();
	        else
            {
				back=Dysine();
				back=user_play();
			    back=analyze_easy();
				if (back==0)
					converion();
				else
				{
					back=Dysine();
					back=computer_play();
	                back=analyze_easy();
	                if (back==0)
						converion();
	                else
	                {
	                    back=Dysine();
						cout<<"NO ONE IS WIN THE GAME"<<endl;
		                converion();
					}
				}
			}
		}
	}
}

int computer_play()
{
	int c,d,e;
	for (;;)
	{
		c=1+rand()%9;
		d=(c-1)/3;
	    e=(c-1)-d*3;
	    if (g[d][e]==0)
			break;
	}
	g[d][e]=1;
	return 0;
}

int analyze_easy()
{
	int b,c,d,e,f,h,row=0,col=0,back;
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
			}
		}
	}
	if (d==3)
	{
		back=Dysine();
		cout<<"I Win Gongratulations To Me"<<endl;
		return 0;
	}
	else if (e==3)
	{
		back=Dysine();
		cout<<"You Win Gongratulations "<<endl;
		return 0;
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
				}
			}
		}
		if (d==3)
	    {
		    back=Dysine();
		    cout<<"I Win Gongratulations To Me"<<endl;
		    return 0;
	    }
	    else if (e==3)
	    {
		    back=Dysine();
		    cout<<"You Win Gongratulations "<<endl;
		    return 0;
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
				}
				if (e==3||d==3)
					h=1;
				if (h==1)
					break;
			}
			if (d==3)
	        {
		        back=Dysine();
		        cout<<"I Win Gongratulations To Me"<<endl;
		        return 0;
	        }
	        else if (e==3)
	        {
		        back=Dysine();
		        cout<<"You Win Gongratulations "<<endl;
		        return 0;
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
					}
					if (e==3||d==3)
						h=1;
					if (h==1)
						break;
				}
				if (d==3)
	            {
		            back=Dysine();
		            cout<<"I Win Gongratulations To Me"<<endl;
		            return 0;
	            }
	            else if (e==3)
	            {
		            back=Dysine();
		            cout<<"You Win Gongratulations "<<endl;
		            return 0;
	            }
				else
					return 1;
			}
		}
	}
}

int analyze()
{
	int b,c,d,e,f,h,row,col,back;
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
		back=Dysine();
		cout<<"I Win Gongratulations To Me"<<endl;
		return 0;
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
		    back=Dysine();
		    cout<<"I Win Gongratulations To Me"<<endl;
			return 0;
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
				if (e==0&&d==2)
					h=1;
				if (h==1)
					break;
			}
			if (h==1)
			{
				g[row][col]=1;
		        back=Dysine();
		        cout<<"I Win Gongratulations To Me"<<endl;
				return 0;
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
					if (e==0&&d==2)
						h=1;
					if (h==1)
						break;
				}
				if (h==1)
				{
					g[row][col]=1;
					back=Dysine();
		            cout<<"I Win Gongratulations To Me"<<endl;
					return 0;
				}
				else
				{
					back=analyze_second_step();
					return 1;
				}
			}
		}
	}
}

int analyze_second_step()
{
	int b,c,d,e,f,h,row,col,back;
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

	back=Dysine();
	return 1;
}

int Dysine()
{
	cout<<"..................."<<endl
		<<". ";if (g[0][0]==2)cout<<" X ";else if (g[0][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][1]==2)cout<<" X ";else if (g[0][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[0][2]==2)cout<<" X ";else if (g[0][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[1][0]==2)cout<<" X ";else if (g[1][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[1][1]==2)cout<<" X ";else if (g[1][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[1][2]==2)cout<<" X ";else if (g[1][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl
		<<". ";if (g[2][0]==2)cout<<" X ";else if (g[2][0]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][1]==2)cout<<" X ";else if (g[2][1]==1)cout<<" O ";else cout<<"   ";cout<<" | ";
	if (g[2][2]==2)cout<<" X ";else if (g[2][2]==1)cout<<" O ";else cout<<"   ";cout<<" | "<<endl
		<<"..................."<<endl;
	return 1;
}

int converion()
{
	return 1;
}

int modifications(int b)
{
	g[0][0]=g[0][1]=g[0][2]=g[1][0]=g[1][1]=g[1][2]=g[2][0]=g[2][1]=g[2][2]=0;
	if (b==1)
		g[1][1]=1;
	return 1;
}

int user_play()
{
	int c,d,e;
	for (;;)
	{
		cin>>c;
	    d=(c-1)/3;
	    e=(c-1)-d*3;
		if (g[d][e]!=0)
			cout<<"This Square Is Not Free"<<endl;
		if (g[d][e]==0)
			break;
	}
	g[d][e]=2;
	return c;
}

