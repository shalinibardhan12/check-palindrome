 #include<iostream>
using namespace std;
void ReverseString(char name[] ,  int n,char orgnlStrng[]){
    int st = 0;
    int end = n-1;
    int temp =0;
    int found = 0;
    for(int i =st;i<=end/2;i++){
        temp = name[i];
        name[i]= name[end];
        name[end]=temp;
        end--;
    }
    int i=0;
    while(name[i]!='\0'){
    if(orgnlStrng[i]==name[i]){
        found =1;
    }
else{
break;
}
i++;
}
if(found==1){
    cout<<"it is palindrome"<<endl;
}
else
cout<<"it is not a palindrome"<<endl;
}
int main()
{
    int n;
    cout<<" enter the size of string"<<endl;
    cin>>n;
    char name[20];
    char orgnlStrng[20];
    cout<<"enter name in the string"<<endl;
    cin>>name;
    for(int i =0;name[i]!='\0';i++){
    orgnlStrng[i] = name[i];
    }
    ReverseString(name,n,orgnlStrng);
    return 0;
}