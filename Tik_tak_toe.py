#tic tac toe game

#to create and display a board using nested lists
def display_board(board):
    for row in board:
        print()
        for col in row:
            print(col, end=" ")
    print( )

def is_full(board):
    for row in board:
        for col in row:
            if col==empty:
                return False
    return True

#board
empty=[ ]
row1=[empty, empty, empty]
row2=[empty, empty, empty]
row3=[empty, empty, empty]
board=[row1, row2, row3]


display_board(board)

#symbols
symbols=['[0]','[X]']

#players
players=[]
for i in range(1,3):
    player=input('enter  the players: ')
    players.append(player)

def wins(board, r, c, symbols):
    #diagonal
    if board[0][0]==symbols and board[1][1] and board[2][2]:
        print('congratulations')#wins
    #reverse diagonal
    if board[0][2]==symbols and board[1][1] and board[2][0]:
        print('congratulations') #wins
    #vertiacl
    for i in range(3):
        if board[0][i] == symbols and board[1][i] and board[2][i]:
            print('congratulations')  # wins
    #horizontal
    for i in range(3):
        if board[i][1] == symbols and board[i][1] and board[i][2]:
            print('congratulations')  # wins
    else:
        print('keep going dude XD')


#rendering symbols to the players
for i in range(2):
    print('player',players[i], symbols[i])

#game
print('lets play!!!')
current_player=0
