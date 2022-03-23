// perform the differnt operations on the string
//string storing,
//string add,
//equate string,
//output string
#include<iostream>
using namespace std;
class Str
{
    //here i took one variable that is len to track the size of the string
	public:
		char * str=NULL;
		int len;
			void length(const char *str){
				int i = 0;
				while (str[i]!='\0'){
					len++;
					i++;
				}
			}
	
		//the function is used to store the string 
			Str(const char * string){
				len =0;
				length(string);
				str =new char[len];//i have allocate the memory to copy the string because const string cant mosify
				for(int i=0;i<len;i++){
					str[i]=string[i];
				}
			}
			bool equate(Str str2)
			//i took variable str2 to equate the str1 and str2
			{
			    if(len !=str2.len)return false;//verification the size of the string
			    for(int i=0;i<len;i++)
			    {
			        if (str[i]!=str2.str[i])return false;//verifying the each element of the string
			    }return true;
			}
			void display()//to display the string i took display function
			{
				int i=0;
				while(str[i] != '\0')
				cout<<str[i++];
				cout<<endl;
			}
			void add(Str &str2)
			// add string str1 and str2 
			{
			    char *newstr=new char[len+str2.len-1];
			    int i=0;
			    for(i=0;i<len-1;i++)//length must be len -1 because at last it stores the null character
			    newstr[i]=str[i];
			
			for(int j=i;j<i+str2.len;j++)//after the string null character will be
			{
			    newstr[j]=str2.str[j-i];
			}
			delete []str;
			str =newstr;
			}
			
};
int main()
{
	Str str1="saikumar";
	Str str2="naidu";
	if(str1.equate(str2)){
	    cout<<"both are same"<<endl;
	}else
	{
	    cout<<"both are not same\n";
	}
	str1.add(str2);
	str1.display();
	return 0;
}


