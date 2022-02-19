---
layout: post
title: Rick Sanchez Magic Number
subtitle: Have you ever meet Rick as teacher ?
cover-img: /assets/img/repository/challenges/rick_teacher/morty_school.png
thumbnail-img: /assets/img/portfolio/rick_sunglasses.jpg
share-img: /assets/img/repository/challenges/rick_teacher/morty_school.png
tags: [nabbo, challenge, c, pwn]
comments: true
---

Rick C-137 joined in Morty's school and he was so drunk...

![Rick Drunk](/assets/img/repository/challenges/rick_teacher/rick_drunk.jpg)

He started to delirium about his "megic nambarr" and if Morty does not solve challenge then school will explode with so much neutrin bombs... DAMN I AM SO BORED TO DEFUSE OTHERS NEUTRIN BOMBS!

```c
#include <stdio.h>

void checkWin(int value1,int value2)
{
    unsigned int result = value1*value2;
    if(result==4294965959)
        printf("U FOUND MY MEGIC NAMBARR!\n");
        
    printf("My flag is : VSCREW{M41_m3g1c_n4mb4r_%d(%d*%d)}",result,value1,value2);
}
int main()
{
    int value1 = 0;
    int value2 = 0;
    printf("Choose 2-digit number: ");
    scanf("%2d",&value1);
    printf("Choose 3-digit number: ");
    scanf("%3d",&value2);
    checkWin(value1,value2);
}
```

Please do not use bruteforce:

![Rick Math](/assets/img/repository/challenges/rick_teacher/rick_math.jpg)