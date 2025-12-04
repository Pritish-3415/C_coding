// hard.c
// Compile: gcc -std=c11 hard.c -o hard
// Run: ./hard
// Or: ./hard <<EOF <paste 9 lines> EOF

#include <stdio.h>
#include <stdbool.h>

#define N 9
#define ALL_MASK 0x3FEu

int grid[N][N];
unsigned rows[N], cols[N], boxes[N];

void print_grid(void) {
    for (int r = 0; r < N; r++) {
        if (r % 3 == 0 && r != 0) printf("------+-------+------\n");
        for (int c = 0; c < N; c++) {
            if (c % 3 == 0 && c != 0) printf("| ");
            printf("%d ", grid[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}

int bit_count(unsigned x) {
    int cnt = 0;
    while (x) {
        x &= x - 1;
        cnt++;
    }
    return cnt;
}

/* Make this have internal linkage to avoid missing-symbol linker issues on macOS/clang */
static inline int box_index(int r, int c) {
    return (r / 3) * 3 + (c / 3);
}

bool solve_sudoku(void) {
    int best_r = -1, best_c = -1;
    int best_count = 10;
    unsigned best_mask = 0u;

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if (grid[r][c] != 0) continue;
            int b = box_index(r, c);
            unsigned used = rows[r] | cols[c] | boxes[b];
            unsigned available = ALL_MASK & ~used;
            if (available == 0u) return false;
            int cnt = bit_count(available);
            if (cnt < best_count) {
                best_count = cnt;
                best_r = r;
                best_c = c;
                best_mask = available;
                if (cnt == 1) goto CHOOSE;
            }
        }
    }

CHOOSE:
    if (best_r == -1) return true;

    int r = best_r, c = best_c, b = box_index(r, c);

    for (int d = 1; d <= 9; d++) {
        unsigned bit = 1u << d;
        if (best_mask & bit) {
            grid[r][c] = d;
            rows[r] |= bit;
            cols[c] |= bit;
            boxes[b] |= bit;

            if (solve_sudoku()) return true;

            grid[r][c] = 0;
            rows[r] &= ~bit;
            cols[c] &= ~bit;
            boxes[b] &= ~bit;
        }
    }

    return false;
}

int main(void) {
    printf("Enter Sudoku (9 lines, 9 numbers per line, 0 for empty):\n");
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if (scanf("%d", &grid[r][c]) != 1) {
                fprintf(stderr, "Invalid input. Provide 81 integers.\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < N; i++) rows[i] = cols[i] = boxes[i] = 0u;

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            int v = grid[r][c];
            if (v == 0) continue;
            if (v < 1 || v > 9) {
                fprintf(stderr, "Invalid digit %d at %d,%d\n", v, r+1, c+1);
                return 1;
            }
            unsigned bit = 1u << v;
            int b = box_index(r, c);
            if ((rows[r] & bit) || (cols[c] & bit) || (boxes[b] & bit)) {
                fprintf(stderr, "Invalid puzzle: duplicate %d at row %d/col %d/box %d\n",
                        v, r+1, c+1, b+1);
                return 1;
            }
            rows[r] |= bit;
            cols[c] |= bit;
            boxes[b] |= bit;
        }
    }

    if (solve_sudoku()) {
        printf("\nSolved Sudoku:\n\n");
        print_grid();
    } else {
        printf("No solution exists for the given Sudoku.\n");
    }

    return 0;
}
