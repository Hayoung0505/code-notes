#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
//sudo apt install libcurl4-gnutls-dev
//gcc -Wall -o c52curl c52curl.c -lcurl
CURL *curl;
char url_get[] = "http://192.168.222.1:8090/board/json_c52curl_get.do?pw=aaaa&id=bbbb";
char url_post[] = "http://192.168.222.1:8090/board/json_c52curl_post.do";
char params_post[] = "id=admin&pw=hi123456";

static size_t read_head_fun(
                 void *ptr, size_t size, size_t nmemb, void *stream){

 char head[2048] = {0};//복사받을 대상
 memcpy(head,ptr,size*nmemb + 1);//ptr: 복사할 데이터, size*nmemb 데이터의 길이, +1:'\0'
 printf("%s\n",head);//HTTP/1.1 200
                     //Content-Type: application/json;charset=UTF-8

 return size*nmemb;
}     


int main(int argc, char **argv)
{
	printf("curl...\n");
	curl =curl_easy_init();
	printf("curl:%p\n",curl);
	
	
	//응답텍스트를 파일로 저장하고 싶다면,,
	char* file_name = "c59json.txt";
	FILE* save_file = fopen(file_name,"w");//create file
	
	
	if(curl) {
    //curl_easy_setopt(curl,CURLOPT_URL,url_get)
	curl_easy_setopt(curl,CURLOPT_URL,url_post);
	curl_easy_setopt(curl,CURLOPT_POSTFIELDS,params_post);
	curl_easy_setopt(curl,CURLOPT_WRITEDATA,save_file);//응답텍스
	curl_easy_setopt(curl,CURLOPT_HEADERFUNCTION,read_head_fun);//응답텍스
	curl_easy_perform(curl);
	//[{"num":1,"title":"title1","content":"content","writer":"writer1"}]
	curl_easy_cleanup(curl);
	
	//printf("end...curl\n");
	fclose(save_file);
	
	return 0;
   }
  return 0;
}

