#include <stdio.h>

int f(int n, int a[]) {
    int b = -1, l = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (b == -1) {
                b = i;
            }
            l = i;
        }
    }

    int z = 0;
    for (int i = b + 1; i < l; i++) {
        if (a[i] == 0) {
            z++;
        }
    }

    return z;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int r = f(n, a);
        printf("%d\n", r);
    }

    return 0;
}
