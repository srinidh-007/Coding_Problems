#To impelement N-Queens problems in python
import numpy as np      
def print_table(board):
    l = len(board)
    print(' '*l+"solution"+' '*l)       #giving spaces based on the length of board
    print('----'*l)                         
    for i in board:                                          
        print('',end="")                
        for j in i :
            if j==1:
                print('| Q ',end='')        #printing the queen on the imaginary chess board for a possible solution
            else :
                print('|   ',end='')        #otherwise just print the space with this symbol '|'
        print('|',end="")
        print('\n'+'----'*l)                #take the next line and apply the same loop as above 
        
    # This function is to check the placing of queens on the chess board so that none of them are in attacking positions 
    # This calls the print_table function so that the board is printed accordingly
    
def placing(n,board,row,col):
  if(row==n):
        print_table(board)
  else:
    for i in range(n) :
        if(check(n,board,row,i)==True):         #if the conditions satisfy then we place the queens accordingly
            board[row][i] = 1
            placing(n,board,row+1,i)
            board[row][i] = 0
def check(n,board,row,col):         #this function checks the conditions such that queens are not placed in attacking positions including the diagonality check
    i,j,c = row,col,0
    while(i>=0 and j>=0):
        if(board[i][j]==1):         #here i,j,c is taken to keep track of no of rows, no of columns, no of queens that are checked with conditions respectively
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
n = int(input("Enter no of Queens : "))         #taking the input for number of queens 
board = np.zeros((n,n),dtype=int)                   #intially putting zeroes on board array
print("The possible solutions : ")
placing(n,board,0,0)
