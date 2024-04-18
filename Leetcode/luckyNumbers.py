class Solution:
    def luckyNumbers (self, matrix: list[list[int]]) -> list[int]:
        min_in_row = [min(row) for row in matrix]
        max_in_col = []
        for col in range(len(matrix[0])):
            max_in_col.append(max(matrix[row][col] for row in range(len(matrix))))
        lucky_numbers = [matrix[i][j] for i in range(len(matrix)) for j in range(len(matrix[0])) if min_in_row[i] == matrix[i][j] and max_in_col[j] == matrix[i][j]]

        return lucky_numbers