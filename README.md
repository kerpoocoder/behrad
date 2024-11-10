<div dir="rtl">
<details>
<summary><strong>سری اول تمرینات</strong></summary>

<code style="color:red">تمرین اول</code>
برنامه‌ای بنویسید که عدد x را به عنوان ورودی دریافت کند و ۵ عدد متوالی که از x شروع می‌شوند را با هم جمع نموده و حاصل جمع را چاپ کند.

برای مثال اگر ورودی ۳ باشد، خروجی باید به این صورت باشد:

۳ + ۴ + ۵ + ۶ + ۷ = ۲۵

<code style="color:red">تمرین دوم</code>
برنامه ای بنویسید که خروجی آن عبارت زیر باشد:

\#  
\##  
\###  
\####  
\#####  

<code style="color:red">تمرین سوم</code>
برنامه ای بنویسید که محتوی دو متغیر را با هم تعویض کنید برای مثال اگر 
x=3,y=5;
کاری کند که 
y=3,x=5;
شود. 

<details>
<summary style="color:green">راهنمایی</summary> 
فرض کنید یک لیوان حاوی شیر دارید و یک لیوان حاوی نوشابه اگر بخواهید محتوای این دو لیوان را با هم تعویض کنید چه می کنید؟ یعنی کاری کنید که لیوانی که حاوی نوشابه بود حاوی شیر شود و بالعکس
</details>
<br>

<code style="color:red">تمرین چهارم</code>
برنامه ای بنویسید که سه عدد متمایز را دریافت کند و آن ها را به ترتیب از کوچک به بزرگ نمایش دهد. 

<details>
<summary style="color:green">راهنمایی</summary> 
یکی از راه ها این است که از تمرین سوم کمک بگیرید.
</details>
<br>

</details>

<details>
<summary><strong>سری دوم تمرینات</strong></summary>

<code style="color:red">تمرین اول</code>
برنامه ای بنویسید که سه عدد دریافت کند و اگر این سه عدد می توانند اضلاع یک مثلث قائم الزاویه باشند YES در غیر این صورت NO چاپ کند.

مثال: ورودی 3 4 5 را YES چاپ کنید و ورودی 1,2,1 را NO چاپ کند.

 دقت کنید ورودی ممکن از مرتب شده نباشد مثلا برای هر دوی ورودی های زیر جواب YES می باشد:

<div dir='ltr'>
3 4 5
<br>
4 5 3
</div>

<code style="color:red">تمرین دوم</code>
9 عدد ورودی بگیرید آن ها را در یک آرایه 3×3 به ترتیب ذخیره کنید سپس حاصل ضرب اعداد روی قطر اصلی و فرعی این آرایه را چاپ نمایید.

مثال:

<div dir='lrt'>

1 2 3<br>
4 5 6<br>
7 8 9

</div>

قطر اصلی برابر است با
9\*5\*1
 و قطر فرعی برابر است با
  3\*5\*7
.

<code style="color:red">تمرین سوم</code>
برنامه ای بنویسید که یک عدد مثبت n ورودی بگیرد و n تا علامت + پشت سر هم به عنوان خروجی در یک خط چاپ کند.

مثال:

3<br>
+++

1<br>
+

4<br>
++++

11<br>
+++++++++++

در مثال فوق عدد 11 ورودی است و خط زیر آن خروجی مدنظر برای این ورودی است.

</details>

<details>
<summary><strong>سری سوم تمرینات</strong></summary>

<code style="color:red">تمرین اول</code>
برنامه ای بنویسید که یک عدد صحیح مثبت از کاربر دریافت کند و مقسوم علیه(شمارنده) های آن عدد را چاپ کند.

مثال:

ورودی:

12

خروجی:

1 2 3 4 12

<code style="color:red">تمرین دوم</code>
برنامه ای بنویسید که عددی مانند n را از کاربر دریافت نموده و سپس n عدد صحیح دریافت کند و بزرگترین آن ها را در خروجی چاپ نماید.

مثال:<br>
ورودی:

5<br>
4 8 -1 5 4

خروجی:

8

<code style="color:red">تمرین سوم</code>
برنامه ای بنویسید که عدد n را دریافت کند و سپس یک آرایه به طول n از کاربر دریافت کند. سپس مشخص کند که آرایه آینه ای (پالیندروم یا متقارن) است یا نه.

یک آرایه را آینه ای گویند اگر از چپ به راست خوانده شود یا از راست به چپ خوانده شود فرقی نکند برای مثال آرایه های زیر آینه ای هستند:

[1,2,3,2,1]<br>
[1,2,1,2,1]<br>
[1,1]<br>
[4]<br>
[5,6,6,5]<br>
[4,4,7,7,4,4]

و آرایه های زیر آینه ای نیستند:

[1,2,2,2]<br>
[1,1,2,1]<br>
[1,2,1,3,1]

مثال:<br>
ورودی:

5<br>
1 6 2 6 1

خروجی:

YES

<details>
<summary style="color:green">راهنمایی</summary> 
خانه هایی که نسبت به هم متقارن هستند را با هم مقایسه کنید، می توانید بین اندیس هایشان رابطه خاصی پیدا کنید.
</details>
<br>

<code style="color:red">تمرین چهارم</code>
برنامه ای بنویسید که عدد n را ورودی گرفته و n سطر چاپ نماید که سطر i ام i تا علامت + پشت سر هم داشته باشد .

مثال:

n=5<br>
+<br>
++<br>
+++<br>
++++<br>
+++++

n=2<br>
+<br>
++<br>

n=7<br>
+<br>
++<br>
+++<br>
++++<br>
+++++<br>
++++++<br>
+++++++

<code style="color:red">تمرین پنجم</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=1" target="_blank">1: [Multiples of 3 or 5]</a><br>
<a href="http://projecteuler.net/problem=2" target="_blank">2: [Even Fibonacci numbers]</a><br>
<a href="http://projecteuler.net/problem=6" target="_blank">6: [Sum Square Difference]</a>

<code style="color:red">تمرین ششم</code>
برنامه ای بنویسید که عدد فردی مانند n دریافت کند و یک جدول n*n چاپ کند که در آن یک لوزی بزرگ از 'x' ها باشد و بقیه مقادیر '.' باشند برای درک بهتر به مثال های زیر دقت کنید:

<span style="font-family: 'Courier New', Courier, monospace;">

n=5:<br>
..x..<br>
.xxx.<br>
xxxxx<br>
.xxx.<br>
..x..<br><br>

n=9:<br>
....x....<br>
...xxx...<br>
..xxxxx..<br>
.xxxxxxx.<br>
xxxxxxxxx<br>
.xxxxxxx.<br>
..xxxxx..<br>
...xxx...<br>
....x....<br><br>

n=1:<br>
x<br><br>

n=3:<br>
.x.<br>
xxx<br>
.x.<br>
</span>

<details>
<summary style="color:green">راهنمایی</summary> 
سعی کنید برای هر خط الگوی رفتاری پیدا کنید برای مثال اگر در یک خط در نیمه بالایی شکل الگوی زیر را داشته باشیم:

3 ta '.' 3 ta 'x' 3 ta '.'

در خط بعد الگوی زیر را داریم:

2 ta '.' 5 ta 'x' 2 ta '.'

و در خط بعدی الگوی زیر را داریم:

yek '.' 7 ta 'x' yek '.'
</details>
<br>

</details>

<details>
<summary><strong>سری چهارم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=5" target="_blank">5: [Smallest Multiple]</a><br>
<a href="http://projecteuler.net/problem=11" target="_blank">11: [Largest Product in a Grid]</a><br>

</details>

<details>
<summary><strong>سری پنجم تمرینات</strong></summary>
<code style="color:red">تمرین اول</code>
برنامه ای بنویسید که یک عدد صحیح مثبت از کاربر دریافت کند و مقسوم علیه(شمارنده) های آن عدد را با 

<div dir="ltr">

$$
O({\sqrt{n}})
$$

</div>

چاپ کند.

<details>
<summary style="color:green">راهنمایی</summary> 
از ایده ای که در الگوریتم بررسی اول بودن یک عدد استفاده کردیم، کمک بگیرید.
</details><br>
<code style="color:red">تمرین دوم</code>
سوالات زیر از سایت 
<a href="http://projecteuler.net/" target="_blank">Projecteuler</a>
 را حل نمایید:

<a href="http://projecteuler.net/problem=7" target="_blank">7</a> ,
<a href="http://projecteuler.net/problem=9" target="_blank">9</a> ,
<a href="http://projecteuler.net/problem=10" target="_blank">10</a> ,
<a href="http://projecteuler.net/problem=12" target="_blank">12</a>

</details>

</div>