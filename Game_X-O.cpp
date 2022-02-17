#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
 int main(){
int out=1;
     while(out){
 int n,finish=0,finish_1=0;
 int arr[9]={0,0,0,0,0,0,0,0,0};
 int array[]={0,1,2,0,2,1,1,0,2,1,2,0,2,0,1,2,1,0,0,4,8,0,8,4,4,0,8,4,8,0
              ,8,4,0,8,0,4,1,4,7,1,7,4,4,1,7,4,7,1,7,1,4,7,4,1,3,4,5,3,5
              ,4,4,3,5,4,5,3,5,3,4,5,4,3,2,4,6,2,6,4,4,2,6,4,6,2,6,2,4,6,
               4,2,2,5,8,2,8,5,5,2,8,5,8,2,8,2,5,8,5,2,6,7,8,6,8,7,7
              ,6,8,7,8,6,8,6,7,8,7,6,0,3,6,0,6,3,3,0,6,3,6,0,6,0,3,6,3,0 };

 int z=0,o=0,tw=0,t=0,f=0,v=0,s=0,se=0,e=0,x0=0,o0=0,x1=0;
 int o1=0,x2=0,o2=0,x4=0,o4=0,x5=0,o5=0,x6=0,o6=0,x7=0,o7=0;
 int x8=0,o8=0,x9=0,o9=0,som=0,rx=0,ro=0;
     int arr_0[]={1,1,1,2,1,3,2,1,2,2,2,3,3,1,3,2,3,3};
     int arr_1[]={0,1,0,2,1,2,2,2,3,2,4,2};
     int arr_2[]={1,0,1,1,1,2,1,3,3,1,3,2,3,3,3,4};
     int arr_3[]={1,0,1,1,1,2,1,3,3,0,3,1,3,2,3,3};
     int arr_4[]={0,0,0,1,0,2,0,3,1,0,1,1,1,2,2,0,2,1,2,3,3,0,4,0,4,1,4,2,4,3};
     int arr_5[]={1,1,1,2,1,3,1,4,3,0,3,1,3,2,3,3};
     int arr_6[]={1,1,1,2,1,3,1,4,3,1,3,2,3,3};
     int arr_7[]={0,0,0,1,0,2,0,3,0,4,1,4,2,3,3,2,4,1};
     int arr_8[]={1,1,1,2,1,3,3,1,3,2,3,3};
     int arr_x[]={0,0,0,4,1,1,1,3,2,2,3,1,3,3,4,0,4,4};
     int arr_oo[]={0,2,1,1,1,3,2,0,2,4,3,1,3,3,4,2};

     for(int g=0;g<=4;g++){
     if(finish == 0){
     	if(finish == 0){cout<<"you have : ";for(int i=0;i<=8;i++)if(arr[i]==0){cout<<" / "<<i;};
     	}else{cout << " Game Over "<<endl;}

       if(finish == 0){cout<<endl<<" Choose square : ";cin >> n;}
     if(finish == 0){
 	    for(int j=0;j<=8;j++){if((arr[j]==arr[n] && arr[j]==1&&arr[n]==1) || (arr[j]==2 && n==j)){finish_1=1;cout<<" Error movement !!!";break;}}
 	    if(n>8 || n<0){som+=1;}
 	    if(som != 0){finish_1=1;}
     }
 	 if(finish_1==0){
 	 arr[n]=1;
 	 if(arr[4]==1){
 		 arr[0]=2;

 		if(finish == 0){
 		 for(int find_0=0;find_0<144;find_0+=3){
 				if(arr[array[find_0]]==2 && arr[array[find_0+1]]==2 && arr[array[find_0+2]]==0 ){
 					arr[array[find_0+2]] = 2;
 						 cout<<" O is win "<<endl;
 						 finish=1;
                            }
 				          if(finish == 1){break;}
 						  }//end game o is win
 		}

        if(g==1){
 		 if(finish == 0){
 		 if(arr[4]==1 && arr[8]==1 && arr[0]==2){arr[6]=2;}
 		 //new possibilities
 		   }
 		 }
         if(g==2){
         if(finish == 0){
         if(arr[1]==1 && arr[8]==1 && arr[7]==2){arr[3]=2;}
         if(arr[3]==1 && arr[8]==1 && arr[5]==2){arr[2]=2;}
         //new possibilities
       	}
         }

          if(finish == 0){
 		 for(int find_1=0;find_1<144;find_1+=3){
 		        if(arr[array[find_1]]==1 && arr[array[find_1+1]]==1 && arr[array[find_1+2]]==0 ){
 		     	   arr[array[find_1+2]] = 2;
 		        }//continue game
 		    }
          }

 	 }else{
 		 arr[4]=2;
 		if(finish == 0){
 		 for(int find_2=0;find_2<144;find_2+=3){
 				        if(arr[array[find_2]]==2 && arr[array[find_2+1]]==2 && arr[array[find_2+2]]==0 ){
 				     	   arr[array[find_2+2]] = 2;
 				     	   cout<<" O is win "<<endl;
 				     	   finish=1;
 				        }
 				        if(finish == 1){break;}
                       }//end game o is win
 		}
          if(g==1){
 		 if(finish == 0){
 		 if(arr[0]==1 && arr[8]==1 && arr[4]==2){arr[5]=2;}
 		 else if(arr[2]==1 && arr[6]==1 && arr[4]==2){arr[5]=2;}
 		 else if(arr[3]==1 && arr[5]==1 && arr[4]==2){arr[6]=2;}
 		 else if(arr[1]==1 && arr[7]==1 && arr[4]==2){arr[6]=2;}
 		 else if(arr[2]==1 && arr[3]==1 && arr[4]==2){arr[0]=2;}
 		 else if(arr[0]==1 && arr[5]==1 && arr[4]==2){arr[7]=2;}
 		 else if(arr[3]==1 && arr[8]==1 && arr[4]==2){arr[1]=2;}
 		 else if(arr[5]==1 && arr[6]==1 && arr[4]==2){arr[1]=2;}
 		 else if(arr[1]==1 && arr[6]==1 && arr[4]==2){arr[5]=2;}
 		 else if(arr[1]==1 && arr[8]==1 && arr[4]==2){arr[3]=2;}
 		 else if(arr[0]==1 && arr[7]==1 && arr[4]==2){arr[5]=2;}
 		 else if(arr[2]==1 && arr[7]==1 && arr[4]==2){arr[3]=2;}
 		 else if(arr[1]==1 && arr[5]==1 && arr[4]==2){arr[0]=2;}
 		 else if(arr[5]==1 && arr[7]==1 && arr[4]==2){arr[6]=2;}
 		 else if(arr[3]==1 && arr[7]==1 && arr[4]==2){arr[8]=2;}
 		 else if(arr[1]==1 && arr[3]==1 && arr[4]==2){arr[2]=2;}
          //new possibilities
 		 }
        }
          if(finish == 0){
          if(arr[3]==1 && arr[2]==1 && arr[8]==1 && arr[5]==2&& arr[0]==2){arr[6]=2;}
          if(arr[0]==1 && arr[2]==1 && arr[7]==1 && arr[1]==2 && arr[4]==2 && arr[3]!=1){arr[3]=2;}
          if(arr[1]==1 && arr[3]==1 && arr[6]==1 && arr[8]==1 && arr[0]== 2 && arr[7]==2){arr[2]=2;}
          }

          if(finish == 0){
 		   for(int find_3=0;find_3<144;find_3+=3){
 		        if(arr[array[find_3]]==1 && arr[array[find_3+1]]==1 && arr[array[find_3+2]]==0 ){
 		     	   arr[array[find_3+2]] = 2;
 		        }//continue game
             }
          }
  	   }

                  x0=0,o0=0,x1=0,o1=0,x2=0,o2=0,x4=0,o4=0;
                  x5=0,o5=0,x6=0,o6=0,x7=0,o7=0,x8=0,o8=0;
                  x9=0,o9=0;
 	               z=0,o=0,tw=0,t=0,f=0,v=0,s=0,se=0,e=0;
 	               for(int tab=0;tab<=25;tab++){
 	               if(tab==0){cout<<" ";}else{cout<<"-";}
 	               }
 	               cout<<endl;
 	               for(int a0=0;a0<=4;a0++){
 	               cout<<" | ";
 	               if(arr[0]==0){for(int b0=0;b0<=4;b0++){if(a0==arr_0[z] && b0==arr_0[z+1]){cout<<" ";z+=2;}else{cout<<"*";}}cout<<" | ";
 	               }if(arr[0]==1){for(int b1=0;b1<=4;b1++){if(a0==arr_x[x0] && b1==arr_x[x0+1]){cout<<"*";x0+=2;}else{cout<<" ";}}cout<<" | ";
 	               }if(arr[0]==2){for(int b2=0;b2<=4;b2++){if(a0==arr_oo[o0] && b2==arr_oo[o0+1]){cout<<"*";o0+=2;}else{cout<<" ";}
 	               }cout<<" | ";
 	               }
                    if(arr[1]==0){for(int b3=0;b3<=4;b3++){if(a0==arr_1[o] && b3==arr_1[o+1]){cout<<"*";o+=2;}else{cout<<" ";}}cout<<" | ";
 	               }if(arr[1]==1){for(int b4=0;b4<=4;b4++){if(a0==arr_x[x1] && b4==arr_x[x1+1]){cout<<"*";x1+=2;}else{cout<<" ";}}cout<<" | ";
 	               }if(arr[1]==2){for(int b5=0;b5<=4;b5++){if(a0==arr_oo[o1] && b5==arr_oo[o1+1]){cout<<"*";o1+=2;}else{cout<<" ";}
 	               }cout<<" | ";
 	               }
 	               if(arr[2]==0){ for(int b6=0;b6<=4;b6++){if(a0==arr_2[tw] && b6==arr_2[tw+1]){cout<<" ";tw+=2;}else{cout<<"*";}}cout<<" | ";
 	               }if(arr[2]==1){for(int b7=0;b7<=4;b7++){if(a0==arr_x[x2] && b7==arr_x[x2+1]){cout<<"*";x2+=2;}else{cout<<" ";}}cout<<" | ";
 	        	   }if(arr[2]==2){for(int b8=0;b8<=4;b8++){if(a0==arr_oo[o2] && b8==arr_oo[o2+1]){cout<<"*";o2+=2;}else{cout<<" ";}}cout<<" | ";
 	        	   }
 	               cout<<endl;
 	               }

 	               for(int tab=0;tab<=25;tab++){
 	               if(tab==0){cout<<" ";}else{cout<<"-";}
 	               }
 	               cout<<endl;
 	               for(int a1=0;a1<=4;a1++){
 	               cout<<" | ";
 	               if(arr[3]==0){for(int b9=0;b9<=4;b9++){if(a1==arr_3[t] && b9==arr_3[t+1]){cout<<" ";t+=2;}else{cout<<"*";}}cout<<" | ";
 	               }if(arr[3]==1){for(int b10=0;b10<=4;b10++){if(a1==arr_x[x4] && b10==arr_x[x4+1]){cout<<"*";x4+=2;}else{cout<<" ";}}cout<<" | ";
 	               }if(arr[3]==2){for(int b11=0;b11<=4;b11++){if(a1==arr_oo[o4] && b11==arr_oo[o4+1]){cout<<"*";o4+=2;}else{cout<<" ";}}cout<<" | ";
 	               }
 	               if(arr[4]==0){for(int b12=0;b12<=4;b12++){if(a1==arr_4[f] && b12==arr_4[f+1]){cout<<" ";f+=2;}else{cout<<"*";}}cout<<" | ";
 	               }if(arr[4]==1){for(int b13=0;b13<=4;b13++){if(a1==arr_x[x5] && b13==arr_x[x5+1]){cout<<"*";x5+=2;}else{cout<<" ";}}cout<<" | ";
 	        	   }if(arr[4]==2){for(int b14=0;b14<=4;b14++){if(a1==arr_oo[o5] && b14==arr_oo[o5+1]){cout<<"*";o5+=2;}else{cout<<" ";}}cout<<" | ";
 	        	   }
 	               if(arr[5]==0){for(int b15=0;b15<=4;b15++){if(a1==arr_5[v] && b15==arr_5[v+1]){cout<<" ";v+=2;}else{cout<<"*";}}cout<<" | ";
 	               }if(arr[5]==1){for(int b16=0;b16<=4;b16++){if(a1==arr_x[x6] && b16==arr_x[x6+1]){cout<<"*";x6+=2;}else{cout<<" ";}}cout<<" | ";
 	        	   }if(arr[5]==2){for(int b17=0;b17<=4;b17++){if(a1==arr_oo[o6] && b17==arr_oo[o6+1]){cout<<"*";o6+=2;}else{cout<<" ";}}cout<<" | ";
 	        	   }
 	               cout<<endl;
 	               }

 	               for(int tab=0;tab<=25;tab++){
 	               if(tab==0){cout<<" ";}else{cout<<"-";}
 	               }
 	               cout<<endl;
 	               for(int a2=0;a2<=4;a2++){
 	               cout<<" | ";
 	               if(arr[6]==0){for(int b18=0;b18<=4;b18++){if(a2==arr_6[s] && b18==arr_6[s+1]){cout<<" ";s+=2;}else{cout<<"*";}}cout<<" | ";
 	               }if(arr[6]==1){for(int b19=0;b19<=4;b19++){if(a2==arr_x[x7] && b19==arr_x[x7+1]){cout<<"*";x7+=2;}else{cout<<" ";}}cout<<" | ";
 	               }if(arr[6]==2){for(int b20=0;b20<=4;b20++){if(a2==arr_oo[o7] && b20==arr_oo[o7+1]){cout<<"*";o7+=2;}else{cout<<" ";}}cout<<" | ";
 	               }
 	               if(arr[7]==0){for(int b21=0;b21<=4;b21++){if(a2==arr_7[se] && b21==arr_7[se+1]){cout<<"*";se+=2;}else{cout<<" ";}}cout<<" | ";
 	               }if(arr[7]==1){for(int b22=0;b22<=4;b22++){if(a2==arr_x[x8] && b22==arr_x[x8+1]){cout<<"*";x8+=2;}else{cout<<" ";}}cout<<" | ";
 	         	   }if(arr[7]==2){for(int b23=0;b23<=4;b23++){if(a2==arr_oo[o8] && b23==arr_oo[o8+1]){cout<<"*";o8+=2;}else{cout<<" ";}}cout<<" | ";
 	         	   }
 	               if(arr[8]==0){for(int b24=0;b24<=4;b24++){if(a2==arr_8[e] && b24==arr_8[e+1]){cout<<" ";e+=2;}else{cout<<"*";}}cout<<" | ";}
 	               if(arr[8]==1){for(int b25=0;b25<=4;b25++){if(a2==arr_x[x9] && b25==arr_x[x9+1]){cout<<"*";x9+=2;}else{cout<<" ";}}cout<<" | ";}
 	         	   if(arr[8]==2){for(int b26=0;b26<=4;b26++){if(a2==arr_oo[o9] && b26==arr_oo[o9+1]){cout<<"*";o9+=2;}else{cout<<" ";}}cout<<" | ";}

 	               cout<<endl;
 	               }
 	               for(int tab=0;tab<=25;tab++){
 	               if(tab==0){cout<<" ";}else{cout<<"-";}
 	               }

                    cout << endl;
                    }else if(finish_1==1){break;cout<<n<<" is NOt allowed";}
                    if(g==3){
                    for(int e=0;e<=8;e++){if(arr[e]==1){rx+=1;}if(arr[e]==2){ro+=1;}
                    if(rx==4 || ro==3){finish=1;}
                                   }
                        }

       }
     }
  cout << "\n for out the game inter zero and any number for continue : ";
  cin >> out;
     }
 cout << "\n";
 //system("pause");
return 0;
}

