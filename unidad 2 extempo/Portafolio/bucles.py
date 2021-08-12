
desde SYS Importar ARGV

mlist = ["Rojo", "Azul", "Negro"]


if __name__ == "__main__":
    print (f'programName:  {argv[0]}\n')
    print (mlist, len(mlist)) #Size de la lista

    índice = 0
    print("Bucle While")
    mientras que (índice<len(mlist) ):
        print ( f'index=  {index}, value=  {mlist[index]}')
        índice = índice +1
    print("Bucle FOR")
    para el índice en el rango(0, len(mlist)):
        print ( f'index=  {index}, value=  {mlist[index]}')