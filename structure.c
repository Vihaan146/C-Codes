#include <stdio.h>

struct message{
    int msg_id;
    char msg[20];
};

int main()
{
    struct message msg1;
    struct message msg2;
    msg1.msg_id=1;
    strcpy(msg1.msg,"hi");
    printf("%d\n",msg1.msg_id);
    printf("%s",msg1.msg);
}
