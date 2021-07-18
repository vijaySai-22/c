#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <dos.h>
void home();
void mean1();
void mean2();
void mean3Ex();
void mean3In();
void median1();
void median2();
void median3();
void mode1();
void mode2();
void mode3();
void gm1();
void gm2();
void gm3();
void hm1();
void hm2();
void hm3();
void range1();
void range2();
void range3();
void md1mean();
void md1median();
void md2mean();
void md2median();
void md2mode();
void md3mean();
void md3median();
void md3mode();
void sd1();
void sd2();
void sd3();

int main()
{
   // system("cls");
 //   system("color 04");//syntax for color is system("color (bgcolor)(txtcolor)")
    int opt1,opt2,opt3;
    printf("\t\t\t---Welcome to this Statistics mini project---\n\t\t\t\t\t\t\t-vijaySai:) \nSelect One Option from following:\n");
    printf("1 Mean\n2 Median\n3 Mode\n4 Geometric Mean\n5 Harmonic Mean\n6 Range\n7 Mean Deviation\n8 Standard Deviation\n");
    printf("--------> ");
    scanf("%d",&opt1);
    switch(opt1){
        case 1:
            printf("Choose your data type:\n");
            printf("1 Individual \n2 Discrete \n3 Continuous \n");
            printf("--------> ");
            scanf("%d",&opt2);
            switch(opt2){
                case 1:
                    mean1();
                    //Return to home..
                    home();
                break;
                case 2:
                    mean2();
                    home();
                break;
                case 3:
                    printf("Choose Continuous type\n");
                    printf("1 Exclusive \n2 Inclusive \n");
                    printf("--------> ");
                    scanf("%d",&opt3);
                    switch(opt3){
                        case 1:
                            mean3Ex();
                            home();
                        break;
                        case 2:
                            mean3In();
                            home();
                        break;
                    }
                break;
            }
        break;
        case 2:
            printf("Choose your data type:\n");
            printf("1 Individual \n2 Discrete \n3 Continuous \n");
            printf("--------> ");
            scanf("%d",&opt2);
            switch(opt2){
                case 1:
                    median1();
                    home();
                break;
                case 2:
                    median2();
                    home();
                break;
                case 3:
                    median3();
                    home();
                break;
            }
        break;
        case 3:
            printf("Choose your data type:\n");
            printf("1 Individual \n2 Discrete \n3 Continuous \n");
            printf("--------> ");
            scanf("%d",&opt2);
            switch(opt2){
                case 1:
                    mode1();
                    home();
                break;
                case 2:
                    mode2();
                    home();
                break;
                case 3:
                    mode3();
                    home();
                break;
            }
        break;
        case 4:
            printf("Choose your data type:\n");
            printf("1 Individual \n2 Discrete \n3 Continuous \n");
            printf("--------> ");
            scanf("%d",&opt2);
            switch(opt2){
                case 1:
                    gm1();
                    home();
                break;
                case 2:
                    gm2();
                    home();
                break;
                case 3:
                    gm3();
                    home();
                break;
            }
        break;
        case 5:
            printf("Choose your data type:\n");
            printf("1 Individual \n2 Discrete \n3 Continuous \n");
            printf("--------> ");
            scanf("%d",&opt2);
            switch(opt2){
                case 1:
                    hm1();
                    home();
                break;
                case 2:
                    hm2();
                    home();
                break;
                case 3:
                    hm3();
                    home();
                break;
            }
        break;
        case 6:
            printf("Choose your data type:\n");
            printf("1 Individual \n2 Discrete \n3 Continuous \n");
            printf("--------> ");
            scanf("%d",&opt2);
            switch(opt2){
                case 1:
                    range1();
                    home();
                break;
                case 2:
                    range2();
                    home();
                break;
                case 3:
                    range3();
                    home();
                break;
            }
        break;
        case 7:
            printf("Choose your data type:\n");
            printf("1 Individual \n2 Discrete \n3 Continuous \n");
            printf("--------> ");
            scanf("%d",&opt2);
            switch(opt2){
                case 1:
                    printf("Choose Mean Deviation From\n");
                    printf("1 Mean \n2 Median \n3 Mode\n");
                    printf("--------> ");
                    scanf("%d",&opt3);
                    switch(opt3){
                        case 1:
                            md1mean();
                            home();
                        break;
                        case 2:
                            md1median();
                            home();
                        break;
                        case 3:
                            printf("still working on this........");
                            home();
                        break;
                    }
                break;
                case 2:
                    printf("Choose Mean Deviation From\n");
                    printf("1 Mean \n2 Median \n3 Mode\n");
                    printf("--------> ");
                    scanf("%d",&opt3);
                    switch(opt3){
                        case 1:
                            md2mean();
                            home();
                        break;
                        case 2:
                            md2median();
                            home();
                        break;
                        case 3:
                            md2mode();
                            home();
                        break;
                    }
                break;
                case 3:
                    printf("Choose Mean Deviation From\n");
                    printf("1 Mean \n2 Median \n3 Mode\n");
                    printf("--------> ");
                    scanf("%d",&opt3);
                    switch(opt3){
                        case 1:
                            md3mean();
                            home();
                        break;
                        case 2:
                            md3median();
                            home();
                        break;
                        case 3:
                            md3mode();
                            home();
                        break;
                    }
                break;
            }
        break;
        case 8:
            printf("Choose your data type:\n");
            printf("1 Individual \n2 Discrete \n3 Continuous \n");
            printf("--------> ");
            scanf("%d",&opt2);
            switch(opt2){
                case 1:
                    sd1();
                    home();
                break;
                case 2:
                    sd2();
                    home();
                break;
                case 3:
                    sd3();
                    home();
                break;
            }
        break;
        default:
            printf("Enter a valid choice!!");
            home();
    }   
    return 0;
}
void home(){
        int choice;
        printf("\nHappy Hacking:)\n");
        printf("\nTo enter another choice press '1' and enter\nTo exit press any key and enter\n");
        printf("--------> ");
        scanf("%d",&choice);
        if(choice==1)
            main();
        else exit(0);
}
//......**functions**........
        void mean1(){
            printf("Enter no of observations:(max 20)");
                float sum_of_ob=0,mean1;
                int no_of_ob,x[20];
                scanf("%d",&no_of_ob);
                printf("\nEnter your observations:\n");
                for(int i=0;i<no_of_ob;i++){
                        scanf("%d",&x[i]);
                        sum_of_ob+=x[i];
                }
                mean1=sum_of_ob/no_of_ob;
                printf("\nMean = %.3f",mean1);
        }
        void mean2(){
            printf("\nEnter no of observations:(max 20)");
                int x[20],f[20],no_of_ob;
                float mean2,N=0,sum_of_fx=0;
                scanf("%d",&no_of_ob);
                printf("Enter x values:\n");
                for(int i=0;i<no_of_ob;i++){
                        scanf("%d",&x[i]);
                }
                printf("Enter f values:\n");
                for(int i=0;i<no_of_ob;i++){
                        scanf("%d",&f[i]);
                        N+=f[i];
                }
                for(int i=0;i<no_of_ob;i++){
                        sum_of_fx+=f[i]*x[i];
                }
                printf("\nsum of f=%.3f and sum of fx=%.3f\n",N,sum_of_fx);
                mean2=sum_of_fx/N;
                printf("\nMean = %.3f",mean2);
        }
        void mean3Ex(){
            printf("\nEnter no of observations:(max 20)\n");
                int f[20],no_of_ob,N=0;
                float mean3,mid_value[20],ll[20],ul[20],fm[20],sum_of_fm=0;
                scanf("%d",&no_of_ob);
                printf("Enter lower limit and upper limit\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower limit and upper limit ",i+1);
                    scanf("%f%f",&ll[i],&ul[i]);
                    mid_value[i]=(ll[i]+ul[i])/2;
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%d",&f[i]);
                    N+=f[i];
                    fm[i]=mid_value[i]*f[i];
                    sum_of_fm+=fm[i];
                }
                printf("\nsum of fm=%.3f and sum of f=%d\n",sum_of_fm,N);
                mean3=sum_of_fm/N;
                printf("\nMean = %.3f",mean3);
        }
        void mean3In(){
            printf("\nEnter no of observations:(max 20)\n");
                int f[20],no_of_ob,N=0,A,d[20],x=1,y=1;
                float mean3b,mid_value[20],ll[20],ul[20],fd[20],sum_of_fd=0,c;
                scanf("%d",&no_of_ob);
                int d_values=no_of_ob/2;
                //to adjust d values...
                for(int i=d_values-1;i>=0;i--){
                    d[i]=-x;
                    x++;
                }
                for(int i=d_values+1;i<no_of_ob;i++){
                    d[i]=y;
                    y++;
                }
                d[d_values]=0;

                printf("Enter lower limit and upper limit\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower limit and upper limit ",i+1);
                    scanf("%f%f",&ll[i],&ul[i]);
                    mid_value[i]=(ll[i]+ul[i])/2;
                }
                printf("Enter f values \n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%d",&f[i]);
                    N+=f[i];
                    fd[i]=d[i]*f[i];
                    sum_of_fd+=fd[i];
                }
                A=mid_value[d_values];
                c=mid_value[1]-mid_value[0];
                printf("\nSum of fd=%.3f and sum of f=%d and A=%d and c=%.3f and d1=%d",sum_of_fd,N,A,c,d[0]);
                mean3b=A+(sum_of_fd/N)*c;
                printf("\nMean = %.3f",mean3b);
        }
        void median1(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob,a[20];
                float temp,median;
                scanf("%d",&no_of_ob);
                printf("\nEnter your observations:\n");
                for(int i=0;i<no_of_ob;i++){
                        scanf("%d",&a[i]);
                }
                for(int i=0;i<no_of_ob;i++){
                    for(int j=i+1;j<no_of_ob;j++){
                        if(a[i]>a[j]){
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
                if(no_of_ob==1){
                    median=a[0];
                }
                if(no_of_ob==2){
                    median=a[0]+a[1];
                    median/=2;
                }
                else if(no_of_ob%2==0){
                    int mid=no_of_ob/2;
                    median=a[mid]+a[(mid-1)];
                    median/=2;
                }
                else{
                    int mid=no_of_ob/2;
                    median=a[mid];
                }
                printf("%.3f",median);
        }
        void median2(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob,x[20],f[20],cf[20],M,N=0,median;
                scanf("%d",&no_of_ob);
                printf("Enter x values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%d",&x[i]);
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%d",&f[i]);
                    N+=f[i];
                }
                cf[0]=f[0];
                for(int i=1;i<no_of_ob;i++){
                    cf[i]=cf[i-1]+f[i];
                }
                printf("N = %d\n",cf[no_of_ob-1]);
                M=(N+1)/2;
                for(int i=0;i<no_of_ob;i++){
                    if(cf[i]>M){
                        median=cf[i];
                        goto med;
                    }
                }
                med:
                printf("\nMedian = %d",median);
        }
        void median3(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob,ll[20],ul[20],f[20],cf[20],x,N=0,F1;
                float median,find_values,c,f1,l;
                scanf("%d",&no_of_ob);
                printf("Enter lower limit and upper limit values\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower limit and upper limit ",i+1);
                    scanf("%d%d",&ll[i],&ul[i]);
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%d",&f[i]);
                    N+=f[i];
                }
                cf[0]=f[0];
                for(int i=1;i<no_of_ob;i++){
                    cf[i]=cf[i-1]+f[i];
                }
                find_values=N/2;
                for(int i=0;i<no_of_ob;i++){
                    if(cf[i]>find_values){
                        x=i;
                        goto med;
                    }
                }
                med:
                    F1=cf[x-1];
                    f1=f[x];
                    l=ll[x];
                    c=ll[1]-ll[0];
                    median=l+(((N/2)-F1)/f1)*c;
                    printf("\nl = %.2f,N = %d,F1 = %d,f1 = %.2f,c = %.2f",l,N,F1,f1,c);
                    printf("\nMedian = %.3f",median);
        }
        void mode1(){
            printf("Still working on this........");
        }
        void mode2(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob,x[20],f[20],high;
                scanf("%d",&no_of_ob);
                printf("Enter x values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%d",&x[i]);
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%d",&f[i]);
                }
                high=f[0];
                for(int i=1;i<no_of_ob;i++){
                    if(f[i]>high)
                        high=x[i];
                }
                printf("Mode = %d\n",high);
                printf("\n!Note:If you entered two high frequencies are same then it's may not show correct answer..\n");
        }
        void mode3(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob,ll[20],ul[20],f[20],c,l,high,x=0;
                float f1,F,f2;
                scanf("%d",&no_of_ob);
                printf("Enter lower limits and upper limits\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower limit and upper limit: ",i+1);
                    scanf("%d%d",&ll[i],&ul[i]);
                }
                printf("Enter f values");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%d",&f[i]);
                }
                high = f[0];
                for(int i=1;i<no_of_ob;i++){
                    if(f[i]>high){
                        high=f[i];
                        x=i;
                    }
                }
                f1= f[x-1];
                F=f[x];
                f2=f[x+1];
                c=ll[1]-ll[0];
                l=ll[x];
                printf("F =%.0f f1=%.0f f2=%.0f c=%d l=%d \n",F,f1,f2,c,l);
                printf("\nMode = %.3f",l+((F-f1)/((F+F)-f1-f2))*c);
        }
        void gm1(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob;
                float lg=0,x[20],antilog;
                scanf("%d",&no_of_ob);
                printf("Enter x values:\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&x[i]);
                    lg+=log(x[i]);
                }
                lg*=0.434294499;
                lg/=no_of_ob;
                antilog=pow(10,lg);//to find antilog=pow(base,value)
                printf("\nGM = %.2f",antilog);
        }
        void gm2(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob;
                float flg=0,flgg[20],lgg[20],x[20],f[20],N=0,antilog;
                scanf("%d",&no_of_ob);
                printf("Enter x values:\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&x[i]);
                    lgg[i]=log(x[i])*0.434294499;
                }
                printf("Enter f values:\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                    flgg[i]=f[i]*lgg[i];
                    flg+=flgg[i];
                }
                flg/=N;
                antilog=pow(10,flg);//to find antilog
                printf("\nGM = %.2f",antilog);
        }
        void gm3(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob;
                float flg=0,flgg[20],lgg[20],md[20],ul[20],ll[20],f[20],N=0,antilog;
                scanf("%d",&no_of_ob);
                printf("Enter lower values and upper values:\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower value and upper value",i+1);
                    scanf("%f%f",&ll[i],&ul[i]);
                    md[i]=(ll[i]+ul[i])/2;
                    lgg[i]=log(md[i])*0.434294499;
                }
                printf("Enter f values:\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                    flgg[i]=f[i]*lgg[i];
                    flg+=flgg[i];
                }
                flg/=N;
                antilog=pow(10,flg);//to find antilog
                printf("\nGM = %.2f",antilog);
        }
        void hm1(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob;
                float x[20],y[20],X=0;
                scanf("%d",&no_of_ob);
                printf("Enter x values:\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&x[i]);
                    y[i]=1/x[i];
                    X+=y[i];
                }
                printf("\nHM = %.3f",no_of_ob/X);
        }
        void hm2(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob;
                float x[20],y[20],f[20],N=0,X=0;
                scanf("%d",&no_of_ob);
                printf("Enter x values:\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&x[i]);
                }
                printf("Enter f values:\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                    y[i]=f[i]/x[i];
                    X+=y[i];
                }
                printf("\nHM = %.3f",N/X);
        }
        void hm3(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob;
                float ll[20],ul[20],md[20],y[20],f[20],N=0,X=0;
                scanf("%d",&no_of_ob);
                printf("Enter lower values and upper values:\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower value and upper value: ",i+1);
                    scanf("%f%f",&ll[i],&ul[i]);
                    md[i]=(ll[i]+ul[i])/2;
                }
                printf("Enter f values:\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                    y[i]=f[i]/md[i];
                    X+=y[i];
                }
                printf("\nHM = %.3f",N/X);
        }
        void range1(){
            printf("Enter no of observations:(max 20)\n");
            int no_of_ob;
            float L,S,x[20];
            scanf("%d",&no_of_ob);
            printf("Enter x values:\n");
            for(int i=0;i<no_of_ob;i++){
                scanf("%f",&x[i]);
            }
            L=x[0];
            S=x[0];
            for(int i=0;i<no_of_ob;i++){
                if(L<x[i])
                    L=x[i];
                if(S>x[i])
                    S=x[i];
            }
            printf("\nRange = %.0f \nCoefficient of Range = %.3f\n",L-S,(L-S)/(L+S));
        }
        void range2(){
            printf("Enter no of observations:(max 20)\n");
            int no_of_ob;
            float L,S,x[20],f[20];
            scanf("%d",&no_of_ob);
            printf("Enter x values:\n");
            for(int i=0;i<no_of_ob;i++){
                scanf("%f",&x[i]);
            }
            printf("Enter f values:\n");
            for(int i=0;i<no_of_ob;i++){
                scanf("%f",&f[i]);
            }
            L=x[0];
            S=x[0];
            for(int i=0;i<no_of_ob;i++){
                if(L<x[i])
                    L=x[i];
                if(S>x[i])
                    S=x[i];
            }
            printf("\nRange = %.0f \nCoefficient of Range = %.3f\n",L-S,(L-S)/(L+S));
        }
        void range3(){
            printf("Enter no of observations:(max 20)\n");
            int no_of_ob;
            float L,S,ll[20],ul[20],f[20];
            scanf("%d",&no_of_ob);
            printf("Enter lower values and upper values:\n");
            for(int i=0;i<no_of_ob;i++){
                printf("Enter %d lower values and upper values: ",i+1);
                scanf("%f%f",&ll[i],&ul[i]);
            }
            printf("Enter f values:\n");
            for(int i=0;i<no_of_ob;i++){
                scanf("%f",&f[i]);
            }
            L=ul[0];
            S=ll[0];
            for(int i=0;i<no_of_ob;i++){
                if(L<ul[i])
                    L=ul[i];
                if(S>ll[i])
                    S=ll[i];
            }
            printf("\nRange = %.0f \nCoefficient of Range = %.3f\n",L-S,(L-S)/(L+S));
        }
        void md1mean(){
            printf("Enter no of observations:(max 20)\n");
            float no_of_ob,mean,x[20],d[20],sum_of_d=0,sum_of_ob=0;
            scanf("%f",&no_of_ob);
            printf("Enter x values:\n");
            for(int i=0;i<no_of_ob;i++){
                scanf("%f",&x[i]);
                sum_of_ob+=x[i];
            }
            mean=sum_of_ob/no_of_ob;
            for(int i=0;i<no_of_ob;i++){
                d[i]=x[i]-mean;
                if(d[i]<0)
                    d[i]*=-1;
                sum_of_d+=d[i];
            }
            printf("\nMean = %.3f\n",mean);
            printf("Mean Deviation = %.3f\n",sum_of_d/no_of_ob);
            printf("Coefficient of Mean Deviation from mean= %.3f\n",(sum_of_d/no_of_ob)/mean);
        }
        void md1median(){
            printf("Enter no of observations:(max 20)\n");
            float no_of_ob,median,x[20],d[20],sum_of_d=0,temp;
            scanf("%f",&no_of_ob);
            printf("Enter x values:\n");
            for(int i=0;i<no_of_ob;i++){
                scanf("%f",&x[i]);
            }
            for(int i=0;i<no_of_ob;i++){
                    for(int j=i+1;j<no_of_ob;j++){
                        if(x[i]>x[j]){
                            temp=x[i];
                            x[i]=x[j];
                            x[j]=temp;
                        }
                    }
                }
            int N=no_of_ob;
                if(N==1){
                    median=x[0];
                }
                if(N==2){
                    median=x[0]+x[1];
                    median/=2;
                }
                else if(N%2==0){
                    int mid=N/2;
                    median=x[mid]+x[(mid-1)];
                    median/=2;
                }
                else{
                    int mid=N/2;
                    median=x[mid];
                }
            for(int i=0;i<no_of_ob;i++){
                d[i]=x[i]-median;
                if(d[i]<0)
                    d[i]*=-1;
                sum_of_d+=d[i];
            }
            printf("Median = %.3f\n",median);
            printf("Mean Deviation = %.3f\n",sum_of_d/no_of_ob);
            printf("Coefficient of Mean Deviation from median= %.3f\n",(sum_of_d/no_of_ob)/median);
        }
        void md2mean(){
            printf("Enter no of observations:(max 20)\n");
            float no_of_ob,mean,x[20],N=0,f[20],fx[20],d[20],fd[20],sum_of_fd=0,sum_of_fx=0;
            scanf("%f",&no_of_ob);
            printf("Enter x values:\n");
            for(int i=0;i<no_of_ob;i++){
                scanf("%f",&x[i]);
            }
            printf("Enter f values:\n");
            for(int i=0;i<no_of_ob;i++){
                scanf("%f",&f[i]);
                N+=f[i];
                fx[i]=f[i]*x[i];
                sum_of_fx+=fx[i];
            }
            mean=sum_of_fx/N;
            for(int i=0;i<no_of_ob;i++){
                d[i]=x[i]-mean;
                if(d[i]<0)
                    d[i]*=-1;
                fd[i]=f[i]*d[i];
                sum_of_fd+=fd[i];
            }
            printf("\nMean = %.3f\n",mean);
            printf("Mean Deviation = %.3f\n",sum_of_fd/N);
            printf("Coefficient of Mean Deviation from mean= %.3f\n",(sum_of_fd/N)/mean);
        }
        void md2median(){
            printf("Enter no of observations:(max 20)\n");
            int no_of_ob;
            float x[20],N=0,f[20],d[20],fd[20],sum_of_fd=0,cf[20],median;
            scanf("%d",&no_of_ob);
            printf("Enter x values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&x[i]);
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                }
                cf[0]=f[0];
                for(int i=1;i<no_of_ob;i++){
                    cf[i]=cf[i-1]+f[i];
                }
                int M=(N+1)/2;
                for(int i=0;i<no_of_ob;i++){
                    if(cf[i]>M){
                       median=x[i];
                       goto med;
                    }
                }
                med:
            for(int i=0;i<no_of_ob;i++){
                d[i]=x[i]-median;
                if(d[i]<0)
                    d[i]*=-1;
                fd[i]=f[i]*d[i];
                sum_of_fd+=fd[i];
            }
            printf("\nMedian = %.3f\n",median);
            printf("Mean Deviation = %.3f\n",sum_of_fd/N);
            printf("Coefficient of Mean Deviation from median= %.3f\n",(sum_of_fd/N)/median);
        }
        void md2mode(){
            printf("Enter no of observations:(max 20)\n");
            int no_of_ob;
            float x[20],N=0,f[20],d[20],fd[20],sum_of_fd=0,mode;
            scanf("%d",&no_of_ob);
            printf("Enter x values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&x[i]);
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                }
                mode=f[0];
                for(int i=1;i<no_of_ob;i++){
                    if(f[i]>mode)
                        mode=x[i];
                }
            for(int i=0;i<no_of_ob;i++){
                d[i]=x[i]-mode;
                if(d[i]<0)
                    d[i]*=-1;
                fd[i]=f[i]*d[i];
                sum_of_fd+=fd[i];
            }
            printf("Mode = %.3f\n",mode);
            printf("Mean Deviation = %.3f\n",sum_of_fd/N);
            printf("Coefficient of Mean Deviation from mode= %.3f\n",(sum_of_fd/N)/mode);
            printf("\n!Note:If you entered two high frequencies are same then it's may not show correct answer..\n");
        }
        void md3mean(){
            printf("\nEnter no of observations:(max 20)\n");
                int no_of_ob;
                float mean,mid_value[20],ll[20],ul[20],f[20],fm[20],N=0,sum_of_fm=0,d[20],fd[20],sum_of_fd=0;
                scanf("%d",&no_of_ob);
                printf("Enter lower limit and upper limit\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower limit and upper limit ",i+1);
                    scanf("%f%f",&ll[i],&ul[i]);
                    mid_value[i]=(ll[i]+ul[i])/2;
                }
                printf("Enter f values");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                    fm[i]=mid_value[i]*f[i];
                    sum_of_fm+=fm[i];
                }
                mean=sum_of_fm/N;
                for(int i=0;i<no_of_ob;i++){
                d[i]=mid_value[i]-mean;
                if(d[i]<0)
                    d[i]*=-1;
                fd[i]=f[i]*d[i];
                sum_of_fd+=fd[i];
            }
                printf("\nMean = %.3f",mean);
                printf("Mean Deviation = %.3f\n",sum_of_fd/N);
                printf("Coefficient of Mean Deviation from mean= %.3f\n",(sum_of_fd/N)/mean);
        }
        void md3median(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob,x;
                float median,find_values,c,f1,l,ll[20],ul[20],f[20],cf[20],N=0,F1,d[20],mid_value[20],fd[20],sum_of_fd=0;
                scanf("%d",&no_of_ob);
                printf("Enter lower limit and upper limit values\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower limit and upper limit ",i+1);
                    scanf("%f%f",&ll[i],&ul[i]);
                    mid_value[i]=(ll[i]+ul[i])/2;
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                }
                cf[0]=f[0];
                for(int i=1;i<no_of_ob;i++){
                    cf[i]=cf[i-1]+f[i];
                }
                find_values=N/2;
                for(int i=0;i<no_of_ob;i++){
                    if(cf[i]>find_values){
                        x=i;
                        goto med;
                    }
                }
                med:
                    F1=cf[x-1];
                    f1=f[x];
                    l=ll[x];
                    c=ll[1]-ll[0];
                    median=l+(((N/2)-F1)/f1)*c;
                for(int i=0;i<no_of_ob;i++){
                    d[i]=mid_value[i]-median;
                    if(d[i]<0)
                        d[i]*=-1;
                    fd[i]=f[i]*d[i];
                    sum_of_fd+=fd[i];
                }
                printf("\nMedian = %.3f",median);
                printf("Mean Deviation = %.3f\n",sum_of_fd/N);
                printf("Coefficient of Mean Deviation from median= %.3f\n",(sum_of_fd/N)/median);
        }
        void md3mode(){
            printf("Enter no of observations:(max 20)\n");
                int no_of_ob,x=0;
                float f1,F,f2,ll[20],ul[20],f[20],N=0,c,l,high,mid_value[20],mode,d[20],fd[20],sum_of_fd=0;
                scanf("%d",&no_of_ob);
                printf("Enter lower limits and upper limits\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower limit and upper limit: ",i+1);
                    scanf("%f%f",&ll[i],&ul[i]);
                    mid_value[i]=(ll[i]+ul[i])/2;
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                }
                high = f[0];
                for(int i=1;i<no_of_ob;i++){
                    if(f[i]>high){
                        high=f[i];
                        x=i;
                    }
                }
                f1= f[x-1];
                F=f[x];
                f2=f[x+1];
                c=ll[1]-ll[0];
                l=ll[x];
                mode=l+((F-f1)/((F+F)-f1-f2))*c;
                for(int i=0;i<no_of_ob;i++){
                    d[i]=mid_value[i]-mode;
                    if(d[i]<0)
                        d[i]*=-1;
                    fd[i]=f[i]*d[i];
                    sum_of_fd+=fd[i];
                }
                printf("\nMode = %.3f",mode);
                printf("Mean Deviation = %.3f\n",sum_of_fd/N);
                printf("Coefficient of Mean Deviation from mode= %.3f\n",(sum_of_fd/N)/mode);
        }
        void sd1(){
            printf("Enter no of observations:(max 20)");
                double sum_of_ob=0,mean,sum_of_d2=0;
                float no_of_ob;
                int x[20],d[20],d2[20];
                scanf("%f",&no_of_ob);
                printf("\nEnter your observations:\n");
                for(int i=0;i<no_of_ob;i++){
                        scanf("%d",&x[i]);
                        sum_of_ob+=x[i];
                }
                mean=sum_of_ob/no_of_ob;
                for(int i=0;i<no_of_ob;i++){
                    d[i]=x[i]-mean;
                    d2[i]=d[i]*d[i];
                    sum_of_d2+=d2[i];
                }
                double SD = sqrt(sum_of_d2/no_of_ob);
                printf("\nSD = %.3f",SD);
                printf("\nVariance = %.3f",sum_of_d2/no_of_ob);
                printf("\nCoefficient of Variance = %.3f\n",(SD/mean)*100);
        }
        void sd2(){
            printf("\nEnter no of observations:(max 20)");
                float x[20],f[20],mean,N=0,sum_of_fx=0,no_of_ob,d[20],d2[20];
                double sum_of_fd2=0;
                scanf("%f",&no_of_ob);
                printf("Enter x values:\n");
                for(int i=0;i<no_of_ob;i++){
                        scanf("%f",&x[i]);
                }
                printf("Enter f values:\n");
                for(int i=0;i<no_of_ob;i++){
                        scanf("%f",&f[i]);
                        N+=f[i];
                }
                for(int i=0;i<no_of_ob;i++){
                        sum_of_fx+=f[i]*x[i];
                }
                mean=sum_of_fx/N;
                for(int i=0;i<no_of_ob;i++){
                    d[i]=x[i]-mean;
                    d2[i]=d[i]*d[i];
                    sum_of_fd2+=f[i]*d2[i];
                }
                double SD = sqrt(sum_of_fd2/N);
                printf("\nSD = %.3f",SD);
                printf("\nVariance = %.3f",sum_of_fd2/N);
                printf("\nCoefficient of Variance = %.3f\n",(SD/mean)*100);
        }
        void sd3(){
            printf("\nEnter no of observations:(max 20)\n");
                float f[20],no_of_ob,N=0,mean,mid_value[20],ll[20],ul[20],fm[20],sum_of_fm=0,d[20],d2[20];
                double sum_of_fd2=0;
                scanf("%f",&no_of_ob);
                printf("Enter lower limit and upper limit\n");
                for(int i=0;i<no_of_ob;i++){
                    printf("Enter %d lower limit and upper limit ",i+1);
                    scanf("%f%f",&ll[i],&ul[i]);
                    mid_value[i]=(ll[i]+ul[i])/2;
                }
                printf("Enter f values\n");
                for(int i=0;i<no_of_ob;i++){
                    scanf("%f",&f[i]);
                    N+=f[i];
                    fm[i]=mid_value[i]*f[i];
                    sum_of_fm+=fm[i];
                }
                mean=sum_of_fm/N;
                for(int i=0;i<no_of_ob;i++){
                    d[i]=mid_value[i]-mean;
                    d2[i]=d[i]*d[i];
                    sum_of_fd2+=f[i]*d2[i];
                }
                double SD = sqrt(sum_of_fd2/N);
                printf("\nSD = %.3f",SD);
                printf("\nVariance = %.3f",sum_of_fd2/N);
                printf("\nCoefficient of Variance = %.3f\n",(SD/mean)*100);
        }
