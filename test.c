#include <stdio.h>
#include <stdlib.h>
#include "bstrlib.h"


/**************************************************************************
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
************************************************************************/




int main(){

    unsigned int i=34;
    i|=i>>1;
    i|=i>>2;
    i|=i>>4;
    i|=i>>8;
    i++;
    bstring str=NULL;
    
    /*
    测试bstrlib的函数使用
    */
    str=bfromcstr("fasdf");

   
    /*
           struct {
               unsigned char *data;
               int mlen;//2的幂大小
               int slen；//其中slen是真正的大小
           }
    
    */

  
    /*bstrchr
     查找字符的位置
     返回具体的位置
    */

  
   /*忽略大小写的比较*/
   /*
   成功返回0
   失败返回非零
   @bstricmp()
   @bstrcmp(a,b)
   比较a,b的大小，但是不不略大小写
   */
   /*
    bstrcpy（）函数返回copy的bstring对象
   */
    // bstrcpy(a)
       
     /*返回c_b第一次出现的位置*/
    //bstr2cstr(a,c_b)

    bcatcstr(str,"r");
    
    //btoupper(str);
    // btolower(str);
   
    printf("%s %d %d\n",str->data,str->mlen,str->slen);
    printf("%d",i);
    
    bstring b=  NULL;
    b=bfromcstr("fa");
    /*
     binstr（a,pos,b）在a中查找b
     从起始位置pos处
     注意：binstrr()是从反向的位置查找
     返回查找到子串的位置pos
    */
    int pos;
    if((pos=binstr(str,0,b))==BSTR_ERR){
        printf("error");
        exit(EXIT_FAILURE);
    }
      
     
     int sz=blength(str);

     printf("size=%d\n",sz);
     printf("data=%s",bdata(str));
     printf("pos is %d",pos);



    bdestroy(str);

    return 0;
}