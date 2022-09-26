import random
while(1):
 temp=random.randint(1,100)
 hum=random.randint(1,100)
 print(temp)
 if temp > 80 :
     print("alarm on")
 else :
    print("alarm off")