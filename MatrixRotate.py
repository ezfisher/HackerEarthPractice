# A program that physically rotates a matrix about its center element
import numpy as np
from numpy.core.fromnumeric import transpose

'''
a b c        c f i
d e f   ->   b e h
g h i        a d g
'''

def rotateMatrix(matrix, direction):
    rotatedMatrix = matrix

    # transpose matrix then reverse the order of the rows to rotate ccw
    # transpose matrix then reverse the order of the columns to rotate cw

    transposed = np.transpose(matrix)

    if direction == 'cw':
        rotatedMatrix = np.flip(transposed, 0)
    
    elif direction == 'ccw':
        rotatedMatrix = np.flip(transposed, 1)
    
    else:
        return 'Error: invalid rotation direction'       
            
            


    return rotatedMatrix


matrix = np.array([[1, 2, 3],[4, 5, 6],[7, 8, 9]])
# directions: cw for clockwise, or ccw for counterclockwise

print(rotateMatrix(matrix, 'cw'))