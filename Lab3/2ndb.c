#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define a structure for a point
struct Point {
    int x;
    int y;
};

// Function to compute distance between two points
float computeDistance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

// Function to generate random points
void generateRandomPoints(struct Point points[], int n) {
    srand(123); // Seed with a constant value for reproducibility
    for (int i = 0; i < n; i++) {
        points[i].x = rand() % 10 + 1;
        points[i].y = rand() % 10 + 1;
    }
}

int main() {
    int n;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    struct Point points[n];
    generateRandomPoints(points, n);

    printf("Enter coordinates of points:\n");
    for (int i = 0; i < n; i++) {
        printf("Point %d:\n", i + 1);
        printf("x: %d\n", points[i].x);
        printf("y: %d\n", points[i].y);
    }

    float distanceMatrix[n][n];

    // Compute distance matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            distanceMatrix[i][j] = computeDistance(points[i], points[j]);
        }
    }

    printf("\nDistance Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", distanceMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
