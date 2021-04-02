import time
import threading


class Cat:
        def __init__(self, name):
                self._happiness = 5
                self._hunger = 5
                self._energy = 5
                self._name = name

        def print_info(self):
                print(self._name)
                print("happiness: " + str(self._happiness))
                print("hunger: " + str(self._hunger))
                print("energy: " + str(self._energy))

        def gethappiness(self):
                return self._happiness

        def getname(self):
                return self._name

        def setname(self, name):
                self._name = name

        def feed(self):
                self._hunger -= 4
                self._happiness +=3                                                                      
                self._energy -= 1                                                                        
                                                                                                         
        def play(self):                                                                                  
                self._hunger += 2                                                                        
                self._happiness +=4                                                                      
                self._energy -= 3                                                                        
                                                                                                         
        def _sleep(self):                                                                                
                self._hunger += 3                                                                        
                self._happiness += 1                                                                     
                self._energy +=7                                                                         
                                                                                                         
        def dothingseveryhour(self):                                                                     
                if self._energy <= 2:                                                                    
                        self._sleep()                                                                    
                                                                                                         
for i in range(5):                                                                                       
        print(i)                                                                                         
        time.sleep(1.5)                                                                                  
                                                                                                         
happy_cat=Cat("Sparkles")                                                                                
                                                                                                         
angry_cat=Cat("Ivan")                 
