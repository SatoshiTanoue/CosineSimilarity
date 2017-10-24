/********************
 * わだつみ号予約管理システム 
 *  yoyakususutemuwotukurukai.h 
 *  (ヘッダファイルのかっこいい名前募集中。。。)
 *  各種ヘッダ、プロトコルコマンド、構造体など
 * written by 予約システムを創る会
 * 更新日 7月10日 更新者 立山
 ********************/

#ifndef _INCLUDE_YOYAKUSISUTEMU_
#define _INCLUDE_YOYAKUSISUTEMU_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <time.h>
#include <sys/time.h>
#include <stdarg.h>

#define BUFSIZE 1024
#define PORT 10000 //ポート番号
#define DELIMCHAR '