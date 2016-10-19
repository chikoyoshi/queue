//j1414 小林佳樹 

#include <stdio.h>
#include <stdlib.h>
#define Q_size 11
#define Q_type int
#include "j1414_queue_2.h"

int main()
{
	int c;
	int i,data_num;
	init_Q();

	//初期画面の出力
	fprintf(stdout, "Queue size: %d",Q_size-1);
	fprintf(stdout, "\nPlease enter text:");

	//入力された一文字を、改行が入力されるまで読み込み,キューに格納する
	while((c = getchar()) != '\n')
	{	
		enqueue(c); 
	}

	//キューの配列中のデータを出力する
	fprintf(stdout,"Front: %d 	Rear: %d",f,r);
	fprintf(stderr,"\nArray Q data: ");
	for(i=0;i<=Q_size-1;i++){ fprintf(stdout, "%c ",Q[i]);}

	//キューに格納されたデータを指定数取り出し、出力する
	fprintf(stdout,"\nPlease enter deque number:");
	scanf("%d",&data_num);
	fprintf(stdout,"Dequeue data:");
	for(i=0;i<data_num;i++){ fprintf(stdout, "%c ",dequeue());}

	//新しくデータをキューに格納する
	fprintf(stdout, "\nPlease enter nest text(MAX num:%d):",Q_size-stock_Q()-1);
	c = getchar();
	while((c = getchar()) != '\n'){ enqueue(c); }

	//先頭、末尾の位置を出力するプログラムを書く
	fprintf(stdout,"Front: %d 	Rear: %d",f,r);
	fprintf(stderr, "\nQueue all data:");

	//キューに格納したデータをすべて取り出し、出力する
	print_Q();

	//キューの配列内のデータを出力する
	fprintf(stderr, "\nArray Q data:");
	for(i=0;i<stock_Q();i++)
	{ 
		fprintf(stdout, "%c ",Q[i]);
	}
}
