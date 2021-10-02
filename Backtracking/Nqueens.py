import numpy as np
def print_table(board):
    l = len(board)
    print(' '*l+"solution"+' '*l)
    print('----'*l)
    for i in board:
        print('',end="")
        for j in i :
            if j==1:
                print('| Q ',end='')
            else :
                print('|   ',end='')
        print('|',end="")
        print('\n'+'----'*l)
def placing(n,board,row,col):
  if(row==n):
        #print(board)
        print_table(board)
  else:
    for i in range(n) :
        if(check(n,board,row,i)==True):
            board[row][i] = 1
            placing(n,board,row+1,i)
            board[row][i] = 0
def check(n,board,row,col):
    i,j,c = row,col,0
    while(i>=0 and j>=0):
        if(board[i][j]==1):
            c += 1
        i -= 1
        j -= 1
    if(c>0): return False
    i,j,c = row,col,0
    while(i<n and j<n):
        if(board[i][j]==1):
            c += 1
        i += 1
        j += 1
    if(c>0): return False
    i,j,c = row,col,0
    while(i<n and j>=0):
        if(board[i][j]==1):
            c += 1
        i += 1
        j -= 1
    if(c>0): return False
    i,j,c = row,col,0
    while(i>=0 and j<n):
        if(board[i][j]==1):
            c += 1
        i -= 1
        j += 1
    if(c>0): return False
    i,j,c = 0,col,0
    while(i<n):
        if(board[i][col]==1):
            c += 1
        i += 1
    if(c>0): return False
    i,j,c = row,0,0
    while(j<n):
        if(board[row][j]==1):
            c += 1
        j += 1
    if(c>0): return False
    return True
n = int(input("Enter no of Queens : "))
board = np.zeros((n,n),dtype=int)
print("The possible solutions : ")
placing(n,board,0,0)
