#include &lt;stdio.h&gt;
int calc(int b,int p){
if(p==0)
return 1;
return b*calc(b,(p-1));
}
int main()
{
int b,p;
printf(&quot;Enter the base value:&quot;);

scanf(&quot;%d&quot;,&amp;b);
printf(&quot;Enter the power value:&quot;);
scanf(&quot;%d&quot;,&amp;p);
printf(&quot;The value of %d the base %d is: %d&quot;,b,p,calc(b,p));
}
