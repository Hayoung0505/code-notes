#include <stdio.h>
#include <curl/curl.h>
//sudo apt install libcurl14-gnutls-dev
//gcc -Wall -o c52curl c52curl.c -lcurl
CURL *curl;
char url_get[] = "http://192.168.222.1:8090/board/json_c52curl_get.do?pw=aaaa&id=bbbb";
char url_post[] = "http://192.168.222.1:8090/board/json_c52curl_post.do";
char params_post[] = "id=admin&pw=hi123456";


int main(int argc, char **argv)
{
	printf("curl...\n");
	curl =curl_easy_init();
	printf("curl:%p\n",curl);
	
	
	if(curl) {
    //curl_easy_setopt(curl,CURLOPT_URL,url_get)
	curl_easy_setopt(curl,CURLOPT_URL,url_post);
	curl_easy_setopt(curl,CURLOPT_POSTFIELDS,params_post);
	curl_easy_perform(curl);
	//[{"num":1,"title":"title1","content":"content","writer":"writer1"}]
	curl_easy_cleanup(curl);
	
	//printf("end...curl\n");
	
	return 0;
   }
  return 0;
}

