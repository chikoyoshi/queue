//j1414 小林佳樹

Q_type Q[Q_size];
int f, r;

//キューの初期化をする
void init_Q()
{
	f = 0;
	r = -1;
}

int stock_Q()
{
	//キューのデータ数をfとrを用いてカウントして返す
	if(r == -1)
		return 0;
	return (f <= r) ? r - f + 1 : Q_size - f + r + 1;
}

//キューにデータを格納する関数
void enqueue(Q_type d)
{
	if(stock_Q() < Q_size)
	{
		r++;
		if(r == Q_size-1){ r=0; }
		Q[r] = d;
	}
	else
	{
		fprintf(stderr,"Error : queue is full\n");
		exit(1);
	}
}

//キューのデータを取り出す関数
Q_type dequeue()
{
	int i = 0;
	if(stock_Q() > 0)
	{
		i = f;
		f++;
		if(f == Q_size-1){f = 0;}
		return Q[i];
	}
	else
	{
		fprintf(stderr,"Error : queue is empty \n");
		exit(1);
	}
}

//キューのデータを出力する関数
void print_Q()
{
	int i,num;
	num = stock_Q()-1;
	for(i=0;i<num;i++)	{ fprintf(stderr,"%c ",dequeue()); }
}