#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int flag = 1;
    char str;
    while(scanf("%c",&str) != EOF) {

        if(str == '"') {

            if(flag) {
                printf("``");
                flag = 0;
            }

            else {
                printf("''");
                flag = 1;
            }

        }

        else {
            printf("%c",str);
        }

    }
    return 0;
}