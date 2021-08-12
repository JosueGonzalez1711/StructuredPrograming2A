Importar sys 

# if __name__ == "__main__":
#     tam = len(sys.argv)
# para argumento en sys.argv:
#         if argumento=="-h" or argumento="--help" or argumento=="":
#             print("bienvenido\
# \n-h o --help: ayuda\
# \n-s o --suma: Sumar n cantidad de numeros\
# \n-s o --resta: restar n cantidad de numeros\
# \n-s o --mul: mul n cantidad de numeros\
# \n-s o --div: div n cantidad de numeros")

# if argumento =="-s" o argumento=="--suma":
#             i=2
num1 = int(input('Introducir primer número: '))
num2 = int(input('Introducir segundo número '))
sumar = num1 + num2
dif = num1 - num2
mul = num1 * num2
div = num1 / num2
floor_div = num1 // num2
potencia = num1 ** num2
módulo = num1 % num2
print('Suma de ',num1 ,'y' ,num2 ,'es :',añadir)
print('Diferencia de ',num1 ,'y' ,num2 ,'es :',dif)
print('Producto de' ,num1 ,'y' ,num2 ,'es :',mul)
print('División de ',num1 ,'y' ,num2 ,'es :',div)
print('División del piso de ',num1 ,'y' ,num2 ,'es :',floor_div)
print('Exponente de ',num1 ,'y' ,num2 ,'es :',potencia)
print('Módulo de ',num1 ,'y' ,num2 ,'es :',módulo)