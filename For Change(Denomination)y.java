#include &lt;stdio.h&gt;

void findchange(int denominations[],int size, int amount){
printf(&quot;Change for Rs.%d/- using minimum coins or notes\n-----------------------
-------------------\n&quot;,amount);
for (int i=0;i&lt;size;i++){
if(amount&gt;= denominations[i]){
int count=amount / denominations[i];
amount-=count*denominations[i];
printf(&quot;Rs.%d x %d\n&quot;,denominations[i],count);
}

}
if(amount &gt;0)
printf(&quot;Remaining amount: Rs.%d (Can&#39;t be given using available
denominations)\n&quot;,amount);
}
int main(){
int denominations[]={500,200,100,50,20,10,5,2,1};
int size= (sizeof(denominations)/sizeof(denominations[0]));
int amount;
printf(&quot;Enter the amount: &quot;);
scanf(&quot;%d&quot;, &amp;amount);
findchange(denominations,size,amount);
return 0;
}
