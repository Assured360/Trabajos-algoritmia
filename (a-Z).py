#uso de while y for,para imprimir todas las letras (a-Z) en minuscula y mayuscula
letra = 'a'
while letra <= 'z':
  print(letra)
  letra = chr(ord(letra) + 1)
mayus = 'A'
while mayus <= 'Z':
  print(mayus)
  mayus = chr(ord(mayus) + 1)
