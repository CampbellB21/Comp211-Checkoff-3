int result[100];

for (int i = 0; i < 100; i++) {
    result[i] = i * 2;
}

/* AFTER Strength reduction
int result[100];
int value = 0;

for (int i = 0; i < 100; i++) {
    result[i] = value;
    value += 2;
}

*/