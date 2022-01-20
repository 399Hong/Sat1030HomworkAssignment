import sys

def DFS(matrix,start,end,order):
    colour = [0]*order
    transfer = 0
    colour[start] = 1
    nextNode = matrix[start]

    while colour[nextNode] != 1:
        
        colour[nextNode]=1
        transfer +=1
        if nextNode == end:
            return transfer
        nextNode = matrix[nextNode]
       
    return -1
    '''
    while colour[nextNode] != 2:
        if colour[nextNode] == 1:
            colour[nextNode] =2
        else:
            colour[nextNode]=1
        transfer +=1
        if nextNode == end:
            return transfer
        nextNode = matrix[nextNode]
       
    return -1
    '''



order = 0
query = 0
# get node number and query
line = sys.stdin.readline().rstrip().split()
order = int(line[0] ) 
query = int(line[1])


# get graph 
line = sys.stdin.readline().strip().split()
matrix = [0 for _ in range(order)]
for n in range(order):
    matrix[n] = int(line[n])

f= open("guru99.txt","w+")
for line in sys.stdin:
    line = line.split()
    start = int(line[0])  
    end = int(line[1])
    sol = DFS(matrix,start,end,order)
    
    f.write("%d\r\n" % sol)
print("end")
    





    
