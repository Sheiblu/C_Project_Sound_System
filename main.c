#include<stdio.h>
#include<string.h>
#include<windows.h>

char username[30];


void load();
void main1part();


void Engmain();  //English main  115 numb line
void englishstart();
void englishAtoZ();
void learnAtoM();
void learnNtoZ();
void VowelConsnent();
void EngQGap();
void EngQMcq();
void EngQquestion();
void Engmain();

void mathStart();   // Math main is 601 numb line
void learnPrint1to20();
void learn1to20();
void EvenAndOdd();
void Multiplication();
void MathMcq();
void MathMath();
void mathsound();

void GKmain();  //General knowledge start in 917 numb line
void learnBD();
void learnInt();
void learnOth();
void GKMcq();


void voiceZmain();
void voiceZQue();


void Aboutmain();  // start 1391 numb line
void  AboutUsstart();

void result();
void Exit();

//........................................... Main() start hear .......................................

int main()
{

        char a;
        char name[20];
        char prname[60] = "Learn With Fun";
        int r,q;
        system("cls");
        system("color 07");

            printf("\n\n\n\n\n\t\t\t\tDISCLAIMER.");
            printf("\n\n\n\n\n\tGenerally this software is made for 4 to 10 years old children.");
            printf("\n\n\tActually children likes to learn by listening and hearing something.");
            printf("\n\n\tBy using this software they'll enjoy the learning through listening \n\n\tand hearing.\n\n\n");
            a=getch();
            system("cls");


            printf("\n\n\n\n\n\n\n\n\t\t\t\tWELCOME\n");
            Sleep(1200);
            system("cls");

            printf("\n\n\n\n\n\n\n\n\n\t\t\tPlease entry your name \n\n\n\t\t\t\t ");
            gets(name);
            system("cls");

//Name convert code
            for(r=0;r<strlen(name);r++){
                username[r]=name[r];
            }


            printf("\n\n\n\n\n\n\n\n\t\t\t");
            system ("color F0");
            for(r=0;r<=13;r++){
                for(q=0;q<=80000000;q++);//to display the character slowly
                    printf("%c",prname[r]);
                      if(prname[r]>='a'&& prname[r]<='z' || prname[r]=='L') {
                      printf("\a"); }
                    }

            printf("\n\n\n");

            Sleep(2000);
            main1part(name);
            return 0;
}

void main1part(name){
            char a;
            int chose,i;
            system("cls");
            system("color 07");
            printf("\n\n\t TOPIC: \n\n");
            printf("\n\n\n\t\t\t1. English \n\n");
            printf("\n\n\t\t\t2. Mathematics\n\n");
            printf("\n\n\t\t\t3. General Knowledge \n\n");
            printf("\n\n\t\t\t4. Listening Test  \n\n");
            printf("\n\n\t\t\t5. About Us \n\n");
            scanf("%d",&chose);

                if (chose==1){
                        system("cls");
                        load(name);
                        Engmain();}

                else if (chose==2){
                        system("cls");
                        load(name);
                        mathStart(); }

                else if (chose==3){
                        system("cls");
                        load(name);
                        GKmain(); }

                 else if (chose==4){
                        system("cls");
                        voiceZmain();
                                }

                 else if (chose==5){
                        system("cls");
                        load(name);
                        Aboutmain(); }

                else     {
                        system("cls");
                        printf("\a");
                        main1part(name);
                        }



}

void load(name){
                    int r,q;
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\t\t\t\tWelcome %s ",name);
                    printf("\n\n\t\t");
                        for(r=1;r<=42;r++){
                            for(q=0;q<=20000000;q++);//to display the character slowly
                            printf("%c",177);}
                    Sleep(700);

}

//........................................... English is start hear .......................................

void Engmain()
   {
         system ("color b0");
         system ("cls");
         printf("\n\n\n\n\n\t\t English is an International language \n\n");
         printf("\n\n\n\n\n\n\n\n plz type any word\n\n");
         int a;
         a=getch();
         englishstart();

   }


void englishstart()
                 {
           system("cls");
           printf("\nChose any option\n");
           printf("\n\n\t\t1. Learn \n\n");
           printf("\n\n\t\t2. Quiz\n\n");
           printf("\n\n\n\n\nExit = 0 \nPrevious menu = 4 \n\n");


           int a;
           scanf("%d",&a);
           char name[]="Again";

        system("cls");
        //system ("color 0b");
        system ("color b0");
                if (a==0) {
                        Exit(); }
                else if (a==4){
                       main1part(name); }

// learn or quiz chose code
                else if(a==1){
                printf("\n\nChose any option\n");
                printf("\n\n\t\t1. Learn A-Z \n\n");
                printf("\n\n\t\t2. Vowel & Consonant \n\n");
                printf("\n\n\n\n\nPrevious menu= 3, Exit = 0 & type for back \n\n");
                char name[]="Again";

                scanf("%d",&a);
//goto learn  chose
                       if(a==1){
                            englishAtoZ();
                          }
                       else if(a==2){
                           VowelConsnent();}

                       else if (a==0) {
                       Exit(); }

                else if (a==3) {

                        englishstart(name); }
                else
                            {
                    system("cls");
                    printf("\a");
                    main();
                    }
                          }

           else if (a==2){
             printf("\n\nChose any option\n");
             printf("\n\n\t\t 1.MCQ \n\n");
             printf("\n\n\t\t 2.Fill in the gape \n\n");
             printf("\n\n\t\t 3.Question \n\n");
             printf("\n\n\n\n\nPrevious menu= 4, Exit = 0 \n\n");
             char name[]="Again";
             scanf("%d",&a);
                      if(a==1){
                           EngQMcq();
                              }
                      else if (a==2)
                           EngQGap();

                      else if(a==3){
                           EngQquestion();}
                       else if (a==0) {
                        Exit(); }
                else if (a==4) {

                        englishstart(name); }
                        else
                            {
                    system("cls");
                    printf("\a");
                    main();
                    }
                         }

    }


void englishAtoZ(){
// print A-Z
               system("cls");
               printf("\n\nChose any option\n");
               printf("\n\n\t\t\tEnglish Alphabet\n");
               printf("\n\n\n\t\tA \tB \tC \tD \tE \n");
               printf("\n\n\t\tF \tG \tH \tI \tJ \n");
               printf("\n\n\t\tK \tL \tM \tN \tO \n");
               printf("\n\n\t\tP \tQ \tR \tS \tT \n");
               printf("\n\n\t\tU \tV \tW \tX \tY \n");
               printf("\n\n\t\t \t \tZ \t \t \n");
               char c=0;
               printf("\n\nType any word\n");
               c=getch();
//go A to Z spelling

                     if((c>='A'&&c<='M')||(c>='a'&&c<='m'))
                              {    learnAtoM(c);  }
                     else  if((c>='N'&&c<='Z')||(c>='n'&&c<='z'))
                              {    learnNtoZ(c);  }
                     else
                              {    englishAtoZ();}
}

void learnAtoM(s){
//go A to M with sentence

                 char a=1;
                 int b=0;
                 while(1) {

                        system("cls");

                    switch(s){

                    case 'a':   printf("\n\n\tA = Apple");
                                system("D:\\eng\\a.wma");
                                break;
                    case 'b':   printf("\n\n\tB = Ball");
                                system("D:\\eng\\b.wma");
                                break;
                    case 'c':   printf("\n\n\tC = Cat");
                                system("D:\\eng\\c.wma");
                                break;
                    case 'd':   printf("\n\n\tD = Dog");
                                system("D:\\eng\\d.wma");
                                break;
                    case 'e':   printf("\n\n\tE = Egg");
                                system("D:\\eng\\e.wma");
                                break;
                    case 'f':   printf("\n\n\tF = Frog");
                                system("D:\\eng\\f.wma");
                                break;
                    case 'g':   printf("\n\n\tG = Goat");
                                system("D:\\eng\\g.wma");
                                break;
                    case 'h':   printf("\n\n\tH = Horse");
                                system("D:\\eng\\h.wma");
                                break;
                    case 'i':   printf("\n\n\tI = Ice");
                                system("D:\\eng\\i.wma");
                                break;
                    case 'j':   printf("\n\n\tJ = Jug");
                                system("D:\\eng\\j.wma");
                                break;
                    case 'k':   printf("\n\n\tK = Kite");
                                system("D:\\eng\\k.wma");
                                break;
                    case 'l':   printf("\n\n\tL = Lion");
                                system("D:\\eng\\l.wma");
                                break;
                    case 'm':   printf("\n\n\tM = Monkey");
                                system("D:\\eng\\m.wma");
                                break;
                    case 'A':   printf("\n\n\tA = Apple");
                                system("D:\\eng\\a.wma");
                                break;
                    case 'B':   printf("\n\n\tB = Ball");
                                system("D:\\eng\\b.wma");
                                break;
                    case 'C':   printf("\n\n\tC = Cat");
                                system("D:\\eng\\c.wma");
                                break;
                    case 'D':   printf("\n\n\tD = Dog");
                                system("D:\\eng\\d.wma");
                                break;
                    case 'E':   printf("\n\n\tE = Egg");
                                system("D:\\eng\\e.wma");
                                break;
                    case 'F':   printf("\n\n\tF = Frog");
                                system("D:\\eng\\f.wma");
                                break;
                    case 'G':   printf("\n\n\tG = Goat");
                                system("D:\\eng\\g.wma");
                                break;
                    case 'H':   printf("\n\n\tH = Horse");
                                system("D:\\eng\\h.wma");
                                break;
                    case 'I':   printf("\n\n\tI = Ice");
                                system("D:\\eng\\i.wma");
                                break;
                    case 'J':   printf("\n\n\tJ = Jug");
                                system("D:\\eng\\j.wma");
                                break;
                    case 'K':   printf("\n\n\tK = Kite");
                                system("D:\\eng\\k.wma");
                                break;
                    case 'L':   printf("\n\n\tL = Lion");
                                system("D:\\eng\\l.wma");
                                break;
                    case 'M':   printf("\n\n\tM = Monkey");
                                system("D:\\eng\\m.wma");
                                break;
}
                     printf("\n\n\n\n1:Main Menu  \n2:Exit  \n3:A-Z  \n4.Again = Press any button\n");
                     char name[]="Again";
                     a=getch();//IN HEAR we can use if else condition . in FEATURE WE DO IT ....

                     system("cls");

                            if (a=='2') {
                                    Exit();
                                    }
                            else if (a=='3') {
                                englishAtoZ();
                                }

                            else if (a=='1'){
                            main1part(name);
                            }




                }

}

void learnNtoZ(s){
//Go N to Z with sentence
                 char a=1;
                 char name[]="again";
                 while(1)  {
                        system("cls");
                    switch(s)
               {
                    case 'n':   printf("\n\n\tN = Net");
                                system("D:\\eng\\n.wma");
                                break;
                    case 'o':   printf("\n\n\tO = Ox");
                                system("D:\\eng\\o.wma");
                                break;
                    case 'p':   printf("\n\n\tP = Pen");
                                system("D:\\eng\\p.wma");
                                break;
                    case 'q':   printf("\n\n\tQ = Queen");
                                system("D:\\eng\\q.wma");
                                break;
                    case 'r':   printf("\n\n\tR = Ring");
                                system("D:\\eng\\r.wma");
                                break;
                    case 's':   printf("\n\n\tS = Sea");
                                system("D:\\eng\\s.wma");
                                break;
                    case 't':   printf("\n\n\tT = Toy");
                                system("D:\\eng\\t.wma");
                                break;
                    case 'u':   printf("\n\n\tU = Umbrella");
                                system("D:\\eng\\u.wma");
                                break;
                    case 'v':   printf("\n\n\tV = Vegetable");
                                system("D:\\eng\\v.wma");
                                break;
                    case 'w':   printf("\n\n\tW = Window");
                                system("D:\\eng\\w.wma");
                                break;
                    case 'x':   printf("\n\n\tX = X-ray");
                                system("D:\\eng\\x.wma");
                                break;
                    case 'y':   printf("\n\n\tY = Yarn");
                                system("D:\\eng\\y.wma");
                                break;
                    case 'z':   printf("\n\n\tZ = Zoo");
                                system("D:\\eng\\z.wma");
                                break;
                    case 'N':   printf("\n\n\tN = Net");
                                system("D:\\eng\\n.wma");
                                break;
                    case 'O':   printf("\n\n\tO = Ox");
                                system("D:\\eng\\o.wma");
                                break;
                    case 'P':   printf("\n\n\tP = Pen");
                                system("D:\\eng\\p.wma");
                                break;
                    case 'Q':   printf("\n\n\tQ = Queen");
                                system("D:\\eng\\q.wma");
                                break;
                    case 'R':   printf("\n\n\tR = Ring");
                                system("D:\\eng\\r.wma");
                                break;
                    case 'S':   printf("\n\n\tS = Sea");
                                system("D:\\eng\\s.wma");
                                break;
                    case 'T':   printf("\n\n\tT = Toy");
                                system("D:\\eng\\t.wma");
                                break;
                    case 'U':   printf("\n\n\tU = Umbrella");
                                system("D:\\eng\\u.wma");
                                break;
                    case 'V':   printf("\n\n\tV = Vegetable");
                                system("D:\\eng\\v.wma");
                                break;
                    case 'W':   printf("\n\n\tW = Window");
                                system("D:\\eng\\w.wma");
                                break;
                    case 'X':   printf("\n\n\tX = X-ray");
                                system("D:\\eng\\x.wma");
                                break;
                    case 'Y':   printf("\n\n\tY = Yarn");
                                system("D:\\eng\\y.wma");
                                break;
                    case 'Z':  printf("\n\n\tZ = Zoo");
                                system("D:\\eng\\z.wma");
                                break;

                    }
                     printf("\n\n\n\n\n1:Main Menu: press any button  \n2:Exit  \n3:A-Z  \n4.Again = Press any button\n");
                     char name[]="Again";
                     a=getch();//IN HEAR we can use if else condition . in FEATURE WE DO IT ....

                     system("cls");

                            if(a=='2') {
                                    Exit();
                                    }
                            else if (a=='3') {
                                englishAtoZ();
                                }

                            else if (a=='1'){
                            main1part(name);
                            }

            }
}

void VowelConsnent(){
//enter vowel-consonant
            char n;
            system("cls");
            printf("\n\nChose any option\n");
            printf("\n\n\n\n\t\t\t1.Vowel\n\n\n");
            printf("\t\t\t2.Consonant\n");
            printf("\n\n\n\n\n English menu= 3, Exit = 0 \n\n");
            int a;
           scanf("%c",&n);
           char name[]="Again";

        system("cls");
        //system ("color 0b");
                if (n=='0') {
                        Exit(); }

                else if (n=='3') {
                        englishstart(name);
                        }

                else if(n=='1'){
                system("cls");
                printf("\n\t\t\t   Vowel Letter \n\n\n");
                printf("\n\t\tA \tE \tI \tO \tU\n\n\n\n\n\n");
                printf("\n\n\n\n\nPrevious menu= press any word, Exit = 0 ,English menu =3\n\n");

                                int a;
                                scanf("%d",&a);
                                char name[]="Again";

                                system("cls");


                                    if (a==0) {
                                        Exit();
                                            }

                                    else if (a==3) {
                                        englishstart(name);
                                            }
                                    else
                                            {
                                        VowelConsnent(name);
                                            }

                                }

                else if(n=='2')
                    {
                system("cls");
                printf("\n\t\t\t\t  Consonant Letter\n\n\n");
                printf("\t\tB \tC \tD \tF \tG \tH \tJ\n\n ");
                printf("\t\tK \tL \tM \tN \tP \tQ \tR\n\n ");
                printf("\t\tS \tT \tV \tW \tX \tY \tZ\n ");
                printf("\n\n\n\n\nPrevious menu = press any word, \nExit = 0,\nEnglish Menu =3\n\n");

                                int a;
                                scanf("%d",&a);
                                char name[]="Again";

                                system("cls");

                                        if (a==0) {
                                                Exit(); }
                                        else if (a==3) {

                                                englishstart(name);}
                                        else
                                                {
                                                VowelConsnent(name);
                                                }
                                                    }
                else {
                    system("cls");

                    VowelConsnent();
                 }
}

void EngQGap(){
            char s[20];
            char r;
            char t;
            int countr=0;
            system("cls");
              {
                printf("\n\n\n\n\n\t\t\tComplete the word a 'C__t'\n");
                gets(s); //it use as c char has some problem
                gets(s);
                    if ((s[0]=='C'&&s[1]=='A'&&s[2]=='T')||(s[0]=='c'&&s[1]=='a'&&s[2]=='t'))
                       {
                            printf("\n\n\t\t\tCorrect!!!");
                            countr++;
                       }
                    else
                       {
                            printf("\n\n\t\t\tWrong!!!");
                       }
              }
            system("cls");
              {
                printf("\n\n\n\n\n\t\tWrite the missing vowel in sequence 'A__I__U'\n");
                gets(s);
                    if ((s[0]=='E'&&s[1]=='O')||(s[0]=='e'&&s[1]=='o'))
                        {
                            printf("\n\n\t\t\tCorrect!!!");
                            countr++;
                        }
                    else
                        {
                            printf("\n\n\t\t\tWrong!!!");
                        }
              }
            system("cls");
              {
                printf("\n\n\n\n\n\n\t\t\tThe word 'Consonant' has __ vowels\n");
                r=getch();
                    if (r=='3')
                        {
                            printf("\n\n\t\t\tCorrect!!!");
                            countr++;
                        }
                    else
                        {
                            printf("\n\n\t\t\tWrong!!!");
                        }
              }
            system("cls");
              {
                printf("\n\n\n\n\n\n\t\t\t Alphabet'X' comes after alphabet '__'\n");
                r=getch();
                    if (r=='w'||r=='W'){
                            printf("\n\n\t\t\tCorrect!!!");
                            countr++;
                        }
                    else
                        {
                            printf("\n\n\t\t\tWrong!!!");
                        }
              }
            system("cls");
              {
                printf("\n\n\n\n\n\n\n\t\t\t Fill the alphabet sequence 'N O __ Q R'\n");
                r=getch();
                    if (r=='p'||r=='P'){
                            printf("\n\n\n\n\n\t\t\tCorrect!!!");
                            countr++;
                            }
                    else
                            {
                            printf("\n\n\n\n\n\t\t\tWrong!!!");
                            }
            }

//for Print result ...
            result(countr);
            printf("\n\n\n\n\nprevious menu= 1, Exit = 0,main menu=any button press \n\n");


        int a;
        char name[]="Again";
        a=getch();
        system("cls");
                if (a=='0') {
                        Exit(); }
                else if (a=='1') {

                        englishstart(name); }
                else
                      main1part();
}

void EngQMcq(){
      char s;
      int countr=0;
      system("cls");
         {
            printf("\n\n\t\t\tWhich one is vowel?");
            printf("\n\n\t\t\tA.E\tB.M\n\n\t\t\tC.N\tD.Z\n\n");
            s=getch();
                if (s=='A'||s=='a')
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tCorrect!!!");
                        countr++;
                    }
                else
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tWrong!!!");
                    }

                    }
      s=getch();
      system("cls");
                    {
                        printf("\n\n\t\t\tHow Many Vowel exist in 'Umbrella'?");
                        printf("\n\n\t\t\tA.8\tB.5\n\n\t\t\tC.4\tD.3\n\n");
                        s=getch();
                if (s=='D'||s=='d')
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tCorrect!!!");
                        countr++;
                    }
                else
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tWrong!!!");
                    }
                    }
      s=getch();
      system("cls");

                        printf("\n\n\t\t\tWhich one is correctly spelled?");
                        printf("\n\n\t\t\tA.Monkie\tB.Monky\n\n\t\t\tC.Monkey\tD.Mankey\n\n");
                        s=getch();
                if (s=='C'||s=='c')
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tCorrect!!!");
                        countr++;
                    }
                else
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tWrong!!!");
                    }

      s=getch();
      system("cls");


                        printf("\n\n\t\t\tWhich word has no vowels?");
                        printf("\n\n\t\t\tA.Bell\tB.Walk\n\n\t\t\tC.Cry\tD.Consonant\n\n");
                        s=getch();

                if (s=='C'||s=='c')
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tCorrect!!!");
                        countr++;
                    }
                else
                    {
                        system("cls");
                        s=getch();
            printf("\n\n\n\n\t\t\tWrong!!!");
                    }

      s=getch();
      system("cls");


                        printf("\n\n\t\t\tThe correct sequence of vowel is...?");
                        printf("\n\n\t\t\tA.AEIUO\tB.AEIOU\n\n\t\t\tC.EAIOU\tD.UAIOE\n\n");
                        s=getch();
                if (s=='B'||s=='b')
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tCorrect!!!");
                        countr++;
                    }
                else
                    {
                        system("cls");
                        printf("\n\n\n\n\t\t\tWrong!!!");
                    }


//for Print result ...
            result(countr);
            printf("\n\n\n\n\nprevious menu= 1, Exit = 0,main menu=any button press \n\n");


        int a;
        char name[]="Again";
        a=getch();
        system("cls");
                if (a=='0') {
                        Exit(); }
                else if (a=='1') {

                        englishstart(name); }
                else
                      main1part();
}

void EngQquestion()
{
        system("cls");
        int counter=0;
        char x,a,n[20];

            printf("\n\n\t\t1.How many letter are there in the English alphabet?\n\n");
            scanf(" %s",&n);
            system("cls");

                if((n[0]=='2') && (n[1]=='6')){
                        printf("\n\n\t\tcorrect");
                        counter++;
                        }
                else
                    {
                        printf("\n\n\t\tWrong");
    }

            a=getch();
            system("cls");

            printf("\n\n\t\t2.How many letter are there in the vowel letter?\n\n");
            scanf(" %s",&n);
            system("cls");

                    if(n[0]=='5'){
                            printf("\n\n\t\tcorrect");
                            counter++;
                        }
                    else
                    {
                            printf("\n\n\t\tWrong");
                    }

            a=getch();
            system("cls");

            printf("\n\n\t\t3. How many letter are there in the consonant?\n\n");
            scanf(" %s",&n);
            system("cls");

                    if((n[0]=='2') && (n[1]=='1')){
                            printf("\n\n\t\tcorrect");
                            counter++;
                }
                    else
                        {
                            printf("\n\n\t\tWrong");
                        }
            a=getch();
            system("cls");

            printf("\n\n\t\t4. X-Ray,-Write down the vowel letter?\n\n");
            scanf(" %c",&x);
            system("cls");

                    if(x=='a' || x=='A'){
                            printf("\n\n\t\tcorrect");
                            counter++;
                        }
                    else
                    {
                            printf("\n\n\t\tWrong");
                        }
            a=getch();
            system("cls");
            printf("\n\n\t\t5. Cat,- Write down the 2nd consonant letter?\n\n");
            x=getch();
            system("cls");

                    if(x=='t' || x=='T'){
                            printf("\n\n\t\tcorrect");
                            counter++;
                    }
                    else
                    {
                            printf("\n\n\t\tWrong");
                }
            x=getch();


            system("cls");

//for Print result ...
            result(counter);


printf("\n\n\n\n\nPrevious menu= 1, Exit = 0, Main menu=any button press \n\n");
        int b;
        char name[]="Again";
        b=getch();
        system("cls");
                if (b=='0') {
                        Exit(); }
                else if (b=='1') {

                        englishstart(name); }
                else
                      main1part();
}


//........................................... Math is start hear .......................................


//math is start hear


void math(){
    system ("color F0");
        system("cls");
        printf("\n\n\n\n\t\t\t\tWelcome");
        printf("\n\n\n\n\n\n\n Please type any word\n\n");
        int a;
        a=getch();
        mathStart();
}

void mathStart()
{
        char name[]="Again";
Mmain1:
        system("cls");
        system ("color F0");
        char chose1,chose2,chose3;
        printf("\n\nChoose any option\n");
        printf("\n\n\n\n\t\t\t\t1.Learn\n\n");
        printf("\n\n\t\t\t\t2.Quiz\n\n");
        printf("\n\n\n\n\nPrevious menu= 3, Exit = 0\n\n");
           chose1=getch();
            system("cls");

            if(chose1=='1'){
Mmain1_1:           printf("\n\nChoose any option\n");
                    printf("\n\n\n\n\t\t\t\t1.Learn 1-20\n");
                    printf("\n\t\t\t\t2.Even-Odd\n");
                    printf("\n\t\t\t\t3.Multiplication\n\n");
                    printf("\n\n\n\n\nPrevious menu= 4, Exit = 0\n\n");

                        chose2=getch();
                        system("cls");

                                if(chose2=='1'){
                                        learnPrint1to20();}

                                else if(chose2=='2'){
                                        EvenAndOdd();}

                                else if(chose2=='3') {
                                        Multiplication(); }
                                else if(chose2=='4')
                                                   {
                                         goto Mmain1;
                                                   }
                                else if(chose2=='0')
                                                   {
                                              Exit();
                                                   }

                                else {
                                       printf("\a");
                                       system("cls");
                                       goto Mmain1_1;
                                       }
                                 }
            else if(chose1=='2'){
Mmain1_2:           printf("\n\nChoose any option\n");
                    printf("\n\n\n\n\t\t\t\t1.Math MCQ\n");
                    printf("\n\t\t\t\t2.Math question\n");
                    printf("\n\n\n\n\nPrevious menu= 3, Exit = 0\n\n");

                        chose3=getch();
                        char name[20]="Again";
                        system("cls");

                                if (chose3=='1'){
                                        MathMcq();}

                                else if (chose3=='2'){
                                        MathMath();
                                        }
                                else if (chose3=='3'){
                                        goto Mmain1;
                                        }
                                else if (chose3=='0')
                                                   {
                                              Exit();
                                                   }

                                else{
                                        printf("\a");
                                        system("cls");
                                        goto Mmain1_2;
                                    }
                                }
            else if(chose1=='3')
                                {
                                 main1part();
                                 }
            else if(chose1=='0')
                                {
                                 Exit();
                                 }

            else   {
                    printf("\a");
                    system("cls");
                    goto Mmain1;
                    }

}
void learnPrint1to20(){
            system("cls");
            int i=1,j=-1,k;
            printf("\n\n\t     Here is the Number   \n\n\n\n");

                    for (i=1,j=11;i<11;i++,j++){
                            printf(" \t\t %d\t  %d\n",i,j);
                            }
            printf("\n\n\n\n\tChose one Number \n\n");
            scanf("%d", &k);

            learn1to20(k);
}

void learn1to20(i){

     char *name[]={"zero","one","two","three","four","five","six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen","eighteen","nineteen", "twenty"};
     int select;
     while(i){
  //   system ("color 02");
     system("cls");
     mathsound(i);
     printf("\n\n\n\n\n\t\t%d = %s\n",i, name[i]);
     printf("\n\n\n\n1:Main Menu  \n2:List 1-20 \n3:Math Menu \n4:Exit=Press Any Button \n");
     char name[]="Again";
     scanf("%d",&select);

            if (select==2)
                learnPrint1to20();
            //else if (select==3)
              // Exit();
            else if (select==1)
                main1part(name);
                else if(select==3){
                    mathStart();}
                else
                    {
               Exit();}

     }
 }

void EvenAndOdd(){
            system("cls");
            int i=1,j=-1,k;
            char name[]="Again";
//code for print  even and odd
            printf("\n\n\tHear is the Even & Odd Number\n\n\n\t\tOdd\t Even\n\n");
            for (i=1,j=2;i<21;i=i+2,j=j+2){
            printf("\t\t %d\t  %d\n",i,j);
            }
            printf("\n\n\n\n1:Main Menu  \n2:Math Menu  3:Exit=Any Button Press\n");
            scanf("%d",&k);
            if(k==1){
                main1part(name);
                    }
                    else if(k==2){
                        mathStart();
                    }
            else {
                Exit();
                         }
}


void Multiplication(){
//code for Multiplication
           system("cls");
           printf("\n\n\n\t\t\tChose Multiplication Number \n\n");
           int i,j,number,k=1,l;
           char name[]="Again";

                for(i=1,j=2;i<=19,j<=20;i=i+2,j=j+2){
                printf("\n\t\t\t\t%d\t%d\n",i,j);
                    }

                scanf("%d",&number);
                if (number>20){
                    system("cls");
                    printf("\n\n\n\n\n\t\t\tChoose Wrong\n");
                    Sleep(1000);
                    Multiplication();

                }
                system("cls");
                printf("\n\n\n\t\tThe multiplication of %d is :........\n\n\n",number);

                    while (k <= 10) {
                        printf(" \t \t \t%d * %d = %d\n\n", number, k, number*k);
                        k++;  }
                printf("\n\n\n\n1:Main Menu  \n2:Math Menu \n3:Exit=Any Button press\n");
                scanf("%d",&k);
                if(k==1){
                   main1part(name);
                        }
                 else if(k==2)
                 {
                     mathStart();
                 }
                else {
                   Exit();
                             }

}

void MathMcq()
{

    char s;
    int countr=0,a;

        printf("\n\n\t\t\tWhich one is even number?");
        printf("\n\n\t\t\tA.7\tB.5\n\n\t\t\tC.9\tD.10\n\n");
        s=getch();
        system("cls");
                if (s=='D'||s=='d')
                        {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
                        }
                else
                        {
                        printf("\n\n\n\t\t\tWrong!!!");
                        }
        a=getch();
        system("cls");

        printf("\n\n\t\t\tWhich one is Odd number?");
        printf("\n\n\t\t\tA.8\tB.15\n\n\t\t\tC.4\tD.18\n\n");
        s=getch();
        system("cls");
                if (s=='B'||s=='b')
                    {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
                        }
                else
                    {
                        printf("\n\n\n\t\t\tWrong!!!");
                    }
        a=getch();
        system("cls");

        printf("\n\n\t\t\tChoose correct option to fill the blank");
        printf("\n\n\t\t\t5 + __ = 18");
        printf("\n\n\t\t\tA.14\tB.15\n\n\t\t\tC.13\tD.12\n\n");
        s=getch();
        system("cls");

                if (s=='C'||s=='c')
                            {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
                            }
                else
                                {
                        printf("\n\n\n\t\t\tWrong!!!"); }
        a=getch();
        system("cls");

        printf("\n\n\t\t\tWhat is the Correct spelling of 12?");
        printf("\n\n\t\t\tA.Twoelv \tB.Twoelb\n\n\t\t\tC.Twelve\tD.Twelbe\n\n");
        s=getch();
        system("cls");
                if (s=='C'||s=='c')
                    {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
                    }
                else
                        {
                        printf("\n\n\n\t\t\tWrong!!!"); }
        a=getch();
        system("cls");

        printf("\n\n\n\t\t\t15 - 20 = ?");
        printf("\n\n\t\t\tA.0\tB.-5\n\n\t\t\tC.-2\tD.No Answer\n\n");
        s=getch();
        system("cls");
              if (s=='B'||s=='b')
        {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
        }
                else
        {
                        printf("\n\n\n\t\t\tWrong!!!");
                }
        a=getch();
        system("cls");
//for Print result ...
            result(countr);

        printf("\n\n\n\n\nExit = 0, Main Menu= Press any button  Math Menu=2 \n\n");
        int d;
        char name[]="Again";
        d=getch();
        system("cls");
                if (d=='0') {
                        Exit(); }
                        else if(d=='2'){
                            mathStart();
                        }
                else {
                      main1part(name);}

}

void MathMath()
{
    int p,a;
    int countr=0;

        printf("\n\n\n\n\n\t\t\tFill the gap with correct number\n");
        printf("\n\n\t\t\t7 + __ = 13 \n");

        scanf("%d",&p);
        system("cls");

                if (p==6)
        {
                            printf("\n\n\n\t\t\tCorrect!!!");
                            countr++;
        }
                else
        {
                            printf("\n\n\n\t\t\tWrong!!!");
        }
        Sleep(1500);
        //a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\t\t\t2 x 0 = ?\n");

        scanf("%d",&p);
        system("cls");
                if (p==0)
        {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
        }
                    else
        {
                        printf("\n\n\n\t\t\tWrong!!!");
        }

        Sleep(1500);//a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\t\t\t19 - 15 = ?\n");

        scanf("%d",&p);
        system("cls");
                if (p==4)
        {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
        }
                else
        {
                        printf("\n\n\n\t\t\tWrong!!!");
        }

        Sleep(1500);//a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\t\t\tFIll the gap with correct number\n");
        printf("\n\n\t\t\t__ - 6 = 13 \n");

        scanf("%d",&p);
        system("cls");
                if (p==19)
                {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
        }
                else
        {
                        printf("\n\n\n\t\t\tWrong!!!");
        }

        Sleep(1500);//a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\t\t\t7 x 8 = ?\n");

        scanf("%d",&p);
        system("cls");
                if (p==56)
        {
                        printf("\n\n\n\t\t\tCorrect!!!");
                        countr++;
        }
                else
        {
                        printf("\n\n\n\t\t\tWrong!!!");
        }
        Sleep(1500);

 //for Print result ...
            result(countr);

            printf("\n\n\n\n\nExit = 0, Main Menu= Press any button  Math Menu=2\n\n");
            int d;
            char name[]="Again";
            d=getch();
            system("cls");
                if (d=='0') {
                        Exit(); }
                        else if(d=='2'){
                            mathStart();
                        }
                else
                      main1part(name);
}



void mathsound(i) {

    switch(i){

                    case 1:   system("D:\\math\\1.wma");
                                break;
                    case 2:   system("D:\\math\\2.wma");
                                break;
                    case 3:   system("D:\\math\\3.wma");
                                break;
                    case 4:   system("D:\\math\\4.wma");
                                break;
                    case 5:   system("D:\\math\\5.wma");
                                break;
                    case 6:   system("D:\\math\\6.wma");
                                break;
                    case 7:   system("D:\\math\\7.wma");
                                break;
                    case 8:   system("D:\\math\\8.wma");
                                break;
                    case 9:   system("D:\\math\\9.wma");
                                break;
                    case 10:   system("D:\\math\\10.wma");
                                break;
                    case 11:   system("D:\\math\\11.wma");
                                break;
                    case 12:   system("D:\\math\\12.wma");
                                break;
                    case 13:   system("D:\\math\\13.wma");
                                break;
                    case 14:   system("D:\\math\\14.wma");
                                break;
                    case 15:   system("D:\\math\\15.wma");
                                break;
                    case 16:   system("D:\\math\\16.wma");
                                break;
                    case 17:   system("D:\\math\\17.wma");
                                break;
                    case 18:   system("D:\\math\\18.wma");
                                break;
                    case 19:   system("D:\\math\\19.wma");
                                break;
                    case 20:   system("D:\\math\\20.wma");
                                break;

    }

    }
//........................................... General knowledge is start hear .......................................

void GKmain(){


    system("cls");
    system("color 81");
    printf("\nChose any option\n");
    printf("\n\n\n\n\t\t1. Learn \n\n");
    printf("\n\n\t\t2. Quiz\n\n");
    printf("\n\n\n\n\nMain menu= 3, Exit = 0 \n\n");



          char a;

          scanf("%c",&a);

        char name[]="Again";

        system("cls");
                if (a=='0') {
                        Exit(); }
                else if (a=='3') {

                        main1part(name); }


        else if(a=='1'){
            int Chooselearn;
            printf("\nChose any option\n");
            printf("\n\n\n\n\n\n\t\t1. Bangladesh \n\n");
            printf("\n\n\t\t2. International \n\n");
            printf("\n\n\t\t3. Others \n\n");
            printf("\n\n\n\n\nprevious menu= 4, Exit = 0 & type for Main menu \n\n");
            char name[]="Again";

            scanf("%d",&Chooselearn);
                if (Chooselearn==1)
                    {
                    system("cls");
                    learnBD();
                        }
                else if (Chooselearn==2)
                    {
                    system("cls");
                    learnInt();
                    }
                else if (Chooselearn==3)
                {
                    system("cls");
                    learnOth();
                        }


                else if (Chooselearn==0) {
                        Exit(); }
                else if (Chooselearn==4) {

                        GKmain(name); }
                        else
                            {
                    system("cls");
                    printf("\a");
                    main1part(name);
                    }

                }

        else if (a=='2') {

                system("cls");
                GKMcq();

        }

        else {
                GKmain();
        }

}



void learnBD()
{
        char a;
        printf("\n\n\n\n\n\n\n\t\tQ:When did Bangladesh become an independent country?\n\n\n");
        printf("\t\tA:1971\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:How was Bangladesh known when it was part of Pakistan?\n\n\n");
        printf("\t\tA:East Pakistan\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:What does Bangladesh's flag look like?\n\n\n");
        printf("\t\tA:Green background with red circle in center\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:What is the national flower of Bangladesh?\n\n\n");
        printf("\t\tA:Water lily\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:What is the main religion practiced in Bangladesh?\n\n\n");
        printf("\t\tA:Islam\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:On which continent is Bangladesh located?\n\n\n");
        printf("\t\tA:Asia\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:What is the name of national parliament of Bangladesh ?\n\n\n");
        printf("\t\tA:Jatiyo Shangshad\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which area of sea lies to the south of Bangladesh ?\n\n\n");
        printf("\t\tA:Bay of Bengal\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Bangladesh is completely surrounded by which country ?\n\n\n");
        printf("\t\tA:India\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:The population of Bangladesh is around ?\n\n\n");
        printf("\t\tA:160 million\n\n\n\n");
        system("cls");
        printf("\n\n\n\n\nprevious menu= 1, Exit = 0,main menu=any button press \n\n");

        char name[]="Again";
        a=getch();
        system("cls");
                if (a=='0') {
                        Exit(); }
                else if (a=='1') {

                        GKmain(name); }
                else
                      main1part();
}


void learnInt()
{
        char a;
        printf("\n\n\n\n\n\n\n\t\tQ:What is the largest rainforest in the world?\n\n\n");
        printf("\t\tA:The Amazon\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Sydney is the largest city of which country?\n\n\n");
        printf("\t\tA:Australia\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which planet is known as the Red Planet?\n\n\n");
        printf("\t\tA:Mars\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:In which country is Mount Everest located?\n\n\n");
        printf("\t\tA:Nepal\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which continent is the Sahara Desert located on?\n\n\n");
        printf("\t\tA:Africa\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which continent is the coldest continent in the world?\n\n\n");
        printf("\t\tA:Antarctica\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which is the largest ocean in the world?\n\n\n");
        printf("\t\tA:The Pacific Ocean\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which is the largest Country in the world?\n\n\n");
        printf("\t\tA:Russia\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which is the largest City in the world?\n\n\n");
        printf("\t\tA:Tokyo\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which is the smallest Country in the world?\n\n\n");
        printf("\t\tA:Vatican City\n\n\n\n");
        system("cls");
        printf("\n\n\n\n\nprevious menu= 1, Exit = 0,main menu=any button press \n\n");

        char name[]="Again";
        a=getch();
        system("cls");
                if (a=='0') {
                        Exit(); }
                else if (a=='1') {

                        GKmain(name); }
                else
                      main1part();
}


void learnOth()
{
        char a;
        printf("\n\n\n\n\n\n\n\t\tQ:Which sports does not involve a ball?\n\n\n");
        printf("\t\tA:Badminton\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:What type of sport is played on horseback?\n\n\n");
        printf("\t\tA:Polo\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:What are the colors of the five Olympic rings?\n\n\n");
        printf("\t\tA:Red, yellow, green, blue and black\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which country invented the game baseball?\n\n\n");
        printf("\t\tA:England\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:What is the name of the longest snake in the world?\n\n\n");
        printf("\t\tA:The python\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which animal can sleep whilst standing up\n\n\n");
        printf("\t\tA:Horse\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which bird can't fly?\n\n\n");
        printf("\t\tA:Ostrich\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Which is planet the closest planet to Earth?\n\n\n");
        printf("\t\tA:Venus\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:Where does solar energy come from?\n\n\n");
        printf("\t\tA:The sun\n\n\n\n");
        printf("Press any key for next");

        a=getch();
        system("cls");

        printf("\n\n\n\n\n\n\n\t\tQ:How many ribs are there in the human body?\n\n\n");
        printf("\t\tA:Twenty-four (24)\n\n\n\n");
        system("cls");
        printf("\n\n\n\n\nprevious menu= 1, Exit = 0,main menu=any button press \n\n");

        char name[]="Again";
        a=getch();
        system("cls");
                if (a=='0') {
                        Exit(); }
                else if (a=='1') {

                        GKmain(name); }
                else
                      main1part();

}



void GKMcq()
{

    char s;
    char w;
    int countr=0;
    {
        printf("\n\n\n\n\n\n\t\tWhat is the national flower of Bangladesh?");
        printf("\n\n\n\t\t\tA.Rose\t\tB.Water lily\n\n\t\t\tC.Tulip\t\tD.Sunflower\n\n");
        s=getch();
        system("cls");
        if (s=='B'||s=='b')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }


    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\tIn which country is Mount Everest located?");
        printf("\n\n\n\t\t\tA.India\t\tB.Myanmar\n\n\t\t\tC.China\t\tD.Nepal\n\n");
        s=getch();
        system("cls");
        if (s=='D'||s=='d')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }

    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\tWhich bird can't fly?");
        printf("\n\n\n\t\t\tA.Ostrich\t\tB.Cuckoo\n\n\t\t\tC.Humming Bird\t\tD.Magpie Robin\n\n");
        s=getch();
        system("cls");
        if (s=='A'||s=='a')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }

    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\tWhen did Bangladesh become an independent country?");
        printf("\n\n\n\t\t\tA.1952\t\tB.1969\n\n\t\t\tC.1971\t\tD.1970\n\n");
        s=getch();
        system("cls");
        if (s=='C'||s=='c')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }

    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\tWhich ocean is the largest ocean in the world?");
        printf("\n\n\n\t\tA.The Pacific Ocean\tB.The Atlantic Ocean\n\n\t\tC.The Indian Ocean\tD.The Southern Ocean\n\n");
        s=getch();
        system("cls");
        if (s=='A'||s=='a')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }

    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\tHow many ribs are there in the human body?");
        printf("\n\n\n\t\t\tA.26\t\tB.24\n\n\t\t\tC.22\t\tD.12\n\n");
        s=getch();
        system("cls");
        if (s=='B'||s=='b')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }

    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\tOn which continent is Bangladesh located?");
        printf("\n\n\n\t\t\tA.Africa\tB.Antarctica\n\n\t\t\tC.Asia\t\tD.Europe\n\n");
        s=getch();
        system("cls");
        if (s=='C'||s=='c')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }
    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\tWhich city is the smallest country in the world?");
        printf("\n\n\t\t\tA.Maldives\tB.Vatican City\n\n\t\t\tC.Burma\t\tD.Zimbabwe\n\n");
        s=getch();
        system("cls");
        if (s=='B'||s=='b')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }
    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\tWhat type of sport is played on horseback?");
        printf("\n\n\n\t\t\tA.Polo\t\tB.Rugby\n\n\t\t\tC.Chess\t\tD.Baseball\n\n");
        s=getch();
        system("cls");
        if (s=='A'||s=='a')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }
    }
    {
        w=getch();
        system("cls");
        printf("\n\n\n\n\n\n\t\tBangladesh is completely surrounded by which country ?");
        printf("\n\n\n\t\t\tA.Pakistan\tB.Myanmar\n\n\t\t\tC.Nepal\t\tD.India\n\n");
        s=getch();
        system("cls");
        if (s=='D'||s=='d')
        {
             printf("\n\n\n\n\n\n\n\n\t\t\t\tCorrect!!!");
             countr++;
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n\t\t\t\tWrong!!!");
        }
    }
    w=getch();
    system("cls");
    countr=countr/2;
//for Print result ...
            result(countr);
    printf("\n\n\n\n\nprevious menu= 1, Exit = 0,main menu=any button press \n\n");
        int a;
        char name[]="Again";
        a=getch();
        system("cls");
                if (a=='0') {
                        Exit(); }
                else if (a=='1') {

                        GKmain(name); }
                else
                      main1part();

}
//.................................................... listening Test.....................................................


void voiceZmain(){

    char c;


    system("cls");
    printf("\n\n\n\n\n\t\t\t_______________________________________\n");
    printf("\t\t\t|                                     |\n");
    printf("\t\t\t|                                     |\n");
    printf("\t\t\t| R u sure u participate Voice Exem ? |\n");
    printf("\t\t\t|                                     |\n");
    printf("\t\t\t|                                     |\n");
    printf("\t\t\t|_____________________________________|\n");
    printf("\t\t\t|      |                |             |\n");
    printf("\t\t\t| Type |    Y  = Yes    |  N  = No    |\n");
    printf("\t\t\t|      |                |             |\n");
    printf("\t\t\t|_____________________________________|\n");

    scanf(" %c",&c);

    system("cls");
    printf("\n\n\n\n\n\t\t\t_______________________________________\n");
    printf("\t\t\t|                                     |\n");
    printf("\t\t\t|                                     |\n");
    printf("\t\t\t| R u sure u participate Voice Exem ? |\n");
    printf("\t\t\t|                                     |\n");
    printf("\t\t\t|                                     |\n");
    printf("\t\t\t|_____________________________________|\n");
    printf("\t\t\t|      |                |             |\n");
    printf("\t\t\t| Type |    Y  = Yes    |  N  = No    |\n");
    printf("\t\t\t|      |                |             |\n");
    printf("\t\t\t|_____________________________________|\n");
    printf("\t\t\t|                   |                 |\n");

            if(c=='Y'  || c== 'y'){
    printf("\t\t\t|  YOUR  ANSWER     |     YES         |\n"); }

    else if (c=='N'  || c== 'n') {
    printf("\t\t\t|  YOUR  ANSWER     |     NO          |\n"); }

    else {
    printf("\t\t\t|  YOUR  ANSWER     |     WRONG CHOSE         |\n"); }



    printf("\t\t\t|                   |                 |\n");
    printf("\t\t\t|_____________________________________|\n");


        Sleep(2000);
        if (c=='Y'|| c=='y'){
            system("cls");
            voiceZQue(); }
        else if(c=='N' || c=='n') {
            printf("WE think , you r afraid ,%s \n",username);
            Sleep(2000);
            char name[]="Again";
            main1part(name);

        }
        else {
            printf("\a");
            printf("\n\n\n\n\t\t\tPlease Chose Correct Option\n");
            Sleep(750);
            voiceZmain();
        }

}

void voiceZQue(){


    system("cls");


    char ans2[10],ans, welc[30]="Welcome  To  Listening  Test";
    int result= 0,ans3 , iq=5, age=8,r,q;
    int p1=1,p2=1,p3=1,p4=1,p5=1;
    char *an[]={"RIGHT","WRONG"};



    printf("\n\n\n\n\n\t\t\t\t");
            system ("color F0");
            for(r=0;r<=28;r++){
                for(q=0;q<=80000000;q++);//to display the character slowly
                    printf("%c",welc[r]);
                    printf("\n\n\t\t\t\t");
                      if(welc[r]>='a' && welc[r]<='z' || welc[r]>='A'&& welc[r]<='Z') {
                            printf("\a"); }
                    }

            Sleep(2000);
            system("cls");

            for(r=6;r>=0;r--){
                            printf("\n\n\n\n\t\t\t %d",r);
                            for(q=0;q<=200000000;q++);//to display the character slowly
                            system("cls");
                            }

//fast question

       printf("Your Fast Paten \n");
       printf("\n\n\n\t\tHear the Voice CareFully\n");
       system("D:\\voice\\bangladesh.wma");  // (right code hind for short time)

       Sleep(18000); // (right code hind for short time)
       system("cls");
       printf("Your fast Question\n");  //(right code hind for short time)


      printf("\n\n\n\n\t\t\tWhat is Bangladesh Independence Day ??\n");
       printf("\n\n\n\n\n\t\t\t\tANS: ");
       scanf(" %s",&ans2);

       if((ans2[0]=='2') && (ans2[1]=='6')) {
         p1=0;
         iq=iq+22;
         result++; }


//2nd question
     system("cls");
     printf("Your 2nd Paten \n");
     printf("\n\n\t\t\tRemember The Animal Name From Display\n");
     printf("\n\n\n\n\n\t\t\tCat \tDog \tLion \tZebra \n");
     printf("\n\t\t\tFrog \tMonkey \tGoat \tHorse \n");

        Sleep(8000);  // 8000 second correct
        system("cls");
        printf("Your 2nd Question\n");
        printf("\n\n\t\t\tWhich Word U see last time??\n");
        printf("\n\n\t\t\t   1 = COW\t 2 = RAT \n\n");
        printf("\t\t\t   3 = SNAKE\t 4 = FROG \n");

        printf("\n\n\n\t\t\tANS: ");
        scanf(" %s",&ans);

       if(ans=='4') {
            printf("correct\n");
            p2=0;
            iq=iq+18;
            result++; }


//3rd question

        system("cls");
        printf("Your 3nd Paten \n");
        printf("\n\n\n\n\t\t Look AT the Display carefully \n");
        Sleep(5000);  // 5000 second correct
        system("cls");
        printf("Your 3nd Paten \n");
        printf("\n\n\n\n\n\n\n\t\t\t9\n");
        Sleep(1500);
        system("cls");
        printf("Your 3nd Paten \n");
        printf("\n\n\n\n\n\n\n\n\t\t\tRing\n");
        Sleep(1500);
        system("cls");
        printf("Your 3nd Paten \n");
        printf("\n\n\n\n\n\t\t\t12\n");
        Sleep(1500);
        system("cls");
        printf("Your 3nd Paten \n");
        printf("\n\n\n\n\n\n\n\t\t\t\tBangladesh\n");
        Sleep(1500);
        system("cls");
        printf("Your 3nd Paten \n");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t3\n");
        Sleep(1500);

voice1:
        system("cls");
        printf("\n\n\n\n\n\n\t\t\tHear your Second Question\n");
       system("D:\\voice\\typeeven.wma");  //correct code
        Sleep(6000);   // 8000 second correct
        system("cls");
        printf("You 4rd  Question\n");

        printf("\n\n\n\n\n\n\t\t\t Type ans or 2 = Hear Question again\n\n\t\t\t\tANS: ");

        scanf(" %s",&ans2);

       if(ans2[0]=='1'  && ans2[1]=='2') {
            p3=0;
            result++;
            iq=iq+18; }

        else if (ans2[0]=='2') {
                iq=iq-5;
            goto voice1 ;
        }

//4rd Question
        system("cls");

        system("cls");
        printf("You 4rd  Patent\n");
        printf("\n\n\n\n\t\tHear the Voice CareFully\n");
        system("D:\\voice\\ocean.wma");
        Sleep(16000);
        system("cls");
        printf("You 4rd  Question\n");
        printf("\n\n\n\n\t\t\tWhich is The biggest Ocean??\n");
        printf("\n\n\t\t\t\t Answer: ");
        scanf(" %s",&ans2);
        system("cls");

       if(ans2[0]=='p') {
         p4=0;
         iq=iq+15;
         result++; }

//5rd Question
        system("cls");
        printf("\n\n\n\n\n\t\tHear the Voice CareFully, Its u Last Question\n\n\t\t Be careful Its a Math Problem , u Must calculate it");
        Sleep(1500);
        system("cls");
        printf("You 5rd  Parent\n");
        printf("\n\n\n\t\n\t\tHear the Voice CareFully\n");
        system("D:\\voice\\two.wma");
        Sleep(9000);

        system("cls");
        printf("You 5rd  Question\n");
        printf("\n\n\n\n\nGive Me the Correct Answer : ");
        scanf(" %s",&ans);

       if(ans=='5') {
         p5=0;
         iq=iq+17;
         result++; }

        system("cls");


//...............................Voice result code ...........................




Mainas:

   system("color F0");
   printf("\n\n\n\n");
   printf("\t\t\t___________________________________\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|      IQ RESULT CHERTIFICAT      |\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|_________________________________|\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t| ID NO   : %dP                  |\n",age*40-2);
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t| SUBMIT  : 5                     |\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|     Question    Your-Ans        |\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|        1          %s         |\n",an[p1]);
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|        2          %s         |\n",an[p2]);
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|        3          %s         |\n",an[p3]);
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|        4          %s         |\n",an[p4]);
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|        5          %s         |\n",an[p5]);
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t| YOUR MARK :  %d                 |\n",result*10);
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t| IQ MARK   :  %d                 |\n",iq);
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t|_________________________________|\n");
   printf("\t\t\t|                                 |\n");
   printf("\t\t\t| Result made by  SIM TEAM %c 2016 |\n",64);
   printf("\t\t\t|_________________________________|\n");

   printf("\n\n\n\n");
   printf("\n\n\n\n Main Menu : 1 \n Exit : Any letter \n");
   char kk;
   scanf("%d",&kk);
                if(kk==1){
                   main1part(username);
                        }
                else {
                   Exit();
                             }
}







//About us start hear

void Aboutmain()
{
        system("cls");
        system ("color bb");
        printf("\n\n\n\n\n\n\t\t\t About us\n\n");
        Sleep(1500);
        AboutUsstart();
    //  return 0;

    }

//........................................... About U start is start hear .......................................
 void  AboutUsstart(){

        system("cls");
        printf("\n\n\n\n\n\n\t\tMentors   :   MD. Rayhan Hosan Mukul\n");
        printf("\n\n\t\tDeveloper :   Ashraful Islam Sheiblu");
        printf("\n\n\t\t              Ishak Ahammed");
        printf("\n\n\t\t              Mazed Mourshed\n");
        printf("\n\n\t\tVocal     :   Redoy Zahan Godhuly");
        printf("\n\n\t\t          :   Zarrin Tasnim\n\n");
        printf("\n\n\t\tUser      :   %s\n\n",username);


        printf("\n\n\nMain menu= 1, Exit = 0 & type for back \n\n");
        int a;
        char name[]="Again";
        a=getch();
        system("cls");
                if (a=='0') {
                        Exit(); }
                else if (a=='1') {
                        main1part(name);
                }
                else
                      Aboutmain();

}

//........................................... Result  .......................................
void result(a){


        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\tW A I T\n");
        Sleep(1500);

        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\tW\t A\t I\t T\t\n");
        Sleep(1500);

        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\tW\t\t A\t\t I\t\t T\t\t\n");
        Sleep(1500);

        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\tW\t A\t I\t T\t\n");
        Sleep(1500);

        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\tW A I T\n");
        Sleep(1500);


        system("cls");
        system("color 47");


        if (a<1)
            {
            printf("\n\n\n\n\n\t\t\t O o o No %s You got Zero \n\n\n\n",username);
            printf("\n\n\t\t Don't Worry Next Time U done Good \n\n\n\n");
        }

       else if(a<3){
            printf("\n\n\n\n\n\t\t Congratulation %s, U got %d number\n\n\n\n",username,a*10);
        }

       else if(a<5){
            printf("\n\n\n\n\n\t\t Well Done %s, U got %d number\n\n\n\n",username,a*10);
        }

       else {

       printf("\n\n\n\n\n\t\t Excellent %s, U got %d number\n\n\n\n",username,a*10);
       printf("\n\n\t\t  \n\n\n\n");

       }

}

//........................................... Exit system .......................................

void Exit(){

    int r,q,i,n;
    system("cls");
    printf("\n\n\n\n\n\t\t Thx you %s for use our System\n",username);
    Sleep(3500);
    system("cls");
    printf("\n\n\n\n\n\t\t Sim hope You Enjoy Our System  \n");
    Sleep(3500);
    system("cls");
    printf("\n\n\n\n\n\t\t\t GooD ByE\n\n\t\t\t  %s \n\n\n\n\n\n\t\tCopyright %c SIM TEAM 2016\n\n\n\n\n\n\n\t\t",username,64);
    Sleep(2000);

    for(i=0;i<12;i++) {

        system("cls");

        for(n=0;n<i;n++) {
            printf("\n"); }




    printf("\t\t\t\t _______ \n ");
    printf("\t\t\t\t |     | \n ");
    printf("\t\t\t\t | * * |  \n");
    printf("\t\t\t\t |  -  |\n ");
    printf("\t\t\t\t |_____| \n ");
    printf("\t\t\t\t   | | \n ");
    printf("\t\t\t\t   | | \n ");
    printf("\t\t\t\t___| |___\n ");
    printf("\t\t\t\t   | | \n ");
    printf("\t\t\t\t   |_| \n ");
    printf("\n\n");



    for(r=1;r<=42;r++){
    for(q=0;q<=600000;q++); }

}
    system("cls");
    Sleep(750);
    exit(0);
}

