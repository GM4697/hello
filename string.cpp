string& operator+(string &str1,string& str2)
{
  char * temp = NULL;
  int len = str1.len + str2.len;
  temp = new char[len+1];
  strcpy(temp,str1.rep);
  strcat(temp,str2.rep);
  string t = string(temp);
  delete temp;
  temp = NULL;
  return t;
}
string & operator+=(string & str)
{
  char * temp = rep;
  len = len + str.len;
  rep = new char[len+1];
  strcpy(rep,temp);
  strcat(rep,str.rep);
  delete temp;
  return *this;
}



int a = 10;
int b = 20;
printf("%d\n",a+b);