#include <printf.h>
#include <string.h>
#include "sds.h"
#include "sdsalloc.h"
#include "adlist.h"
#include "server.h"
#include <limits.h>

typedef struct redisDbP {
    int id;                     /* Database ID */
} redisDbP;

int main1() {

    redisDbP p1;
    p1.id = 1;
    redisDbP p2;
    p2.id = 2;
    redisDbP p[2] = {p1, p2};
    redisDbP *pp = p;
    printf("%d", (pp+1)->id);



    //printf("%lu \n", sizeof(robj));

//    printf("%p \n", sh);
//re
//    printf("%p", sh+1);


    return 0;

}

//robj *createEmbeddedStringObject(const char *ptr, size_t len) {
//    robj *o = zmalloc(sizeof(robj)+sizeof(struct sdshdr8)+len+1);
//    struct sdshdr8 *sh = (void*)(o+1);
//
//    o->type = OBJ_STRING;
//    o->encoding = OBJ_ENCODING_EMBSTR;
//    o->ptr = sh+1;
//    o->refcount = 1;
//    if (server.maxmemory_policy & MAXMEMORY_FLAG_LFU) {
//        o->lru = (LFUGetTimeInMinutes()<<8) | LFU_INIT_VAL;
//    } else {
//        o->lru = LRU_CLOCK();
//    }
//
//    sh->len = len;
//    sh->alloc = len;
//    sh->flags = SDS_TYPE_8;
//    if (ptr == SDS_NOINIT)
//        sh->buf[len] = '\0';
//    else if (ptr) {
//        memcpy(sh->buf,ptr,len);
//        sh->buf[len] = '\0';
//    } else {
//        memset(sh->buf,0,len+1);
//    }
//    return o;
//}