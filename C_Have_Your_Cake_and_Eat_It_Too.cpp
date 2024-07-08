#include<bits/stdc++.h>
using namespace std;
#define int long long
//prantic paul
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n),c(n);
        
         int sum = 0;
        for(int i =0 ; i < n ; i++){cin>>a[i]; sum += a[i];}
        for(int i =0 ; i < n ; i++)cin>>b[i];
        for(int i =0 ; i < n ; i++)cin>>c[i];

    int x = ceil((double)sum/3);

    bool flag = 0;
    
    vector<int>v;
    int p = 0,q = 0,r = 0;
    int f1 = 0 ,f2 = 0, f3 = 0;
   for(int i = 0 ; i < n ; i++){
     if(p < x)p += a[i];
     else if(q < x)q += b[i];
     else r += c[i];

    int temp;
    if(p >= x && f1 == 0){
        v.push_back(1);
        v.push_back(i+1);
        temp = i + 1;
        f1 = 1;
    }
    int temp2;
    if(q >= x && f2 == 0){
        v.push_back(temp + 1);
        v.push_back(i+1);
        temp2 = i+1;
        f2 = 1;
    }

    if(r >= x){
        flag = 1;
        v.push_back(temp2 + 1);
        v.push_back(n);
        break;
    }
    

   }
   if(flag == 1){
      for(int i = 0 ; i < 6 ; i++)cout<<v[i]<<" ";
      cout<<endl;
      continue;
   }
   v.clear();
  p = 0,q = 0,r = 0;
  f1 = 0,f2 = 0,f3 = 0;
  for(int i = 0 ; i < n ; i++){
     if(p < x)p += a[i];
     else if(r < x)r += c[i];
     else q += b[i];

    int temp;
    if(p >= x && f1 == 0){
        v.push_back(1);
        v.push_back(i+1);
        temp = i + 1;
        f1 = 1;
    }
    int temp2;
    if(r >= x && f2 == 0){
        v.push_back(temp + 1);
        v.push_back(i+1);
        temp2 = i+1;
        f2 = 1;
    }

    if(q >= x){
        flag = 1;
         v.push_back(temp2 + 1);
        v.push_back(n);
        break;
    }
    

   }
   if(flag == 1){
      swap(v[5],v[3]);
      swap(v[4],v[2]);
      for(int i = 0 ; i < 6 ; i++)cout<<v[i]<<" ";
      cout<<endl;
      continue;
   }
  v.clear();
  p = 0,q = 0,r = 0;
  f1 = 0,f2 = 0,f3 = 0;

   for(int i = 0 ; i < n ; i++){
     if(q < x)q += b[i];
     else if(p < x)p += a[i];
     else r += c[i];

    int temp;
    if(q >= x && f1 == 0){
        v.push_back(1);
        v.push_back(i+1);
        temp = i + 1;
        f1 = 1;
    }
    int temp2;
    if(p >= x && f2 == 0){
        v.push_back(temp + 1);
        v.push_back(i+1);
        temp2 = i+1;
        f2 = 1;
    }

    if(r >= x){
        flag = 1;
         v.push_back(temp2 + 1);
        v.push_back(n);
        break;
    }
    

   }
   if(flag == 1){
      swap(v[0],v[2]);
      swap(v[1],v[3]);
      for(int i = 0 ; i < 6 ; i++)cout<<v[i]<<" ";
      cout<<endl;
      continue;
   }
   v.clear();

p = 0,q = 0,r = 0;
f1 = 0,f2 = 0,f3 = 0;
for(int i = 0 ; i < n ; i++){
     if(q < x)q += b[i];
     else if(r < x)r += c[i];
     else p += a[i];

    int temp;
    if(q >= x && f1 == 0){
        v.push_back(1);
        v.push_back(i+1);
        temp = i + 1;
        f1 = 1;
    }
    int temp2;
    if(r >= x && f2 == 0){
        v.push_back(temp + 1);
        v.push_back(i+1);
        temp2 = i+1;
        f2 = 1;
    }

    if(p >= x){
        flag = 1;
         v.push_back(temp2 + 1);
        v.push_back(n);
        break;
    }
    

   }
   if(flag == 1){
      swap(v[0],v[4]);
      swap(v[1],v[5]);
      swap(v[5],v[3]);
      swap(v[4],v[2]);

      for(int i = 0 ; i < 6 ; i++)cout<<v[i]<<" ";
      cout<<endl;
      continue;
   }
   v.clear();


p = 0,q = 0,r = 0;
f1 = 0,f2 = 0,f3 = 0;
for(int i = 0 ; i < n ; i++){
     if(r < x)r += c[i];
     else if(p < x)p += a[i];
     else q += b[i];

    int temp;
    if(r >= x && f1 == 0){
        v.push_back(1);
        v.push_back(i+1);
        temp = i + 1;
        f1 = 1;
    }
    int temp2;
    if(p >= x && f2 == 0){
        v.push_back(temp + 1);
        v.push_back(i+1);
        temp2 = i+1;
        f2 = 1;
    }

    if(q >= x){
        flag = 1;
         v.push_back(temp2 + 1);
        v.push_back(n);
        break;
    }
    

   }
   if(flag == 1){
      swap(v[0],v[2]);
      swap(v[1],v[3]);
      swap(v[2],v[4]);
      swap(v[5],v[3]);

      for(int i = 0 ; i < 6 ; i++)cout<<v[i]<<" ";
      cout<<endl;
      continue;
   }
   v.clear();


p = 0,q = 0,r = 0;
f1 = 0,f2 = 0,f3 = 0;
for(int i = 0 ; i < n ; i++){
     if(r < x)r += c[i];
     else if(q < x)q += b[i];
     else p += a[i];

    int temp;
    if(r >= x && f1 == 0){
        v.push_back(1);
        v.push_back(i+1);
        temp = i + 1;
        f1 = 1;
    }
    int temp2;
    if(q >= x && f2 == 0){
        v.push_back(temp + 1);
        v.push_back(i+1);
        temp2 = i+1;
        f2 = 1;
    }

    if(p >= x){
        flag = 1;
         v.push_back(temp2 + 1);
        v.push_back(n);
        break;
    }
    

   }
   if(flag == 1){
      swap(v[0],v[4]);
      swap(v[1],v[5]);
     

      for(int i = 0 ; i < 6 ; i++)cout<<v[i]<<" ";
      cout<<endl;
      continue;
   }
   v.clear();

if(flag == 0)cout<<-1<<endl;


    }
}