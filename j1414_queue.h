//j1414 小林佳樹

Q_type Q[Q_size];
int f, r, count;

//キューの初期化をする
void init_Q()
{
	f = count = 0;
	r = -1;
}

//キューにデータを格納する関数
void enqueue(Q_type d)
{
	if(count < Q_size)
	{
		r++;
		if(r == Q_size){ r=0; }
		Q[r] = d;
		count++;
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
	if(count > 0)
	{
		i = f;
		f++;
		if(f == Q_size){f = 0;}
		count--;
		return Q[i];
	}
	else
	{
		fprintf(stderr,"Error : queue is empty \n");
		exit(1);
	}
}