

Desde SYS, importe ARGV como AR

def evenorodd(número):
    if (número%2 == 0):
        print("La respuesta es uniforme")
    else:
        print("La respuesta no es uniforme")


def addtwonumbers(num1, num2):
    print("Programa terminado: dos números agregados")
    devolver num1 + num2

##Homework

def isitPrime(entumecido):
   a= 1
   para idx en el rango(1, entumecido ):
       if (numb%idx == 0):
           a= a+1
    
   si(a<= 2):
      devolver True
   else:
      devolver False
    

##

respuesta= Falso

if __name__ == "__main__":
    ##print (f'La suma de los números es: {addtwonumbers(int(ar[1]),int(ar[2]))}')
    num1= int(input("Introduzca el primer número: \t"))
    num2= int(input("Introduzca el segundo número:\t"))

    print(f'La suma de los dos números es:  {addtwonumbers(num1, num2)}')
    respuesta= evenorodd(addtwonumbers(num2,num2))

    ##Homework
    no1= int(input("Introduzca el primer número: "))
    no2= int(input("Introduzca el segundo número: "))

    if isitPrime(no1):
        print(f'El número  {no1}  es un número primo')
    else:
        print(f'El número  {no1}  no es un número primo')


    if isitPrime(no2):
        print(f'El número  {no2}  es un número primo')
    else:
        print(f'El número  {no2}  no es un número primo')
    ##