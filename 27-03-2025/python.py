#cantidad de vertices
v = int(input("Ingrese la cantidad de vertices: "))

vertices = []

#coordenadas para cada vertice
for i in range(v):
    print(f"\nVertice {i+1}:")
    x = float(input("Ingrese la coordenada x: "))
    y = float(input("Ingrese la coordenada y: "))
    z = float(input("Ingrese la coordenada z: "))
    vertices.append([x, y, z])

#cantidad de caras
m = int(input("\nIngrese la cantidad de caras: "))

with open("figura", "w") as f:
    f.write("# Vertices\n")
    for vertice in vertices:
        f.write(f"v {vertice[0]} {vertice[1]} {vertice[2]}\n")

    f.write("\n# Caras\n")
    for i in range(m):
        print(f"\nCara {i+1}:")
        num_vertices_cara = int(input("Ingrese el número de vértices para esta cara: "))
        indices = []
        for j in range(num_vertices_cara):
            indice = int(input(f"Ingrese el índice del vértice {j+1} (1-{v}): "))
            indices.append(str(indice))
        f.write("f " + " ".join(indices) + "\n")
        # Guardar los índices de cada cara
        if i == 0:
            caras = []
        caras.append(indices)

# Imprimir estructura
print("\nEstructura:")
print("Vertices:")
for i, v in enumerate(vertices, 1):
    print (f"{i}. ({v[0]}, {v[1]}, {v[2]})")

print("\nCaras:")
for i, cara in enumerate(caras, 1):
    print(f"{i}. f {' '.join(cara)}")
