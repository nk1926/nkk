
int one(int x)
{
    x = x + 5;
    printf("\n XYZ = %d", x);
    return (x);
}

float two(int m)
{
    one(m);
    printf("\n AABC = %d", m);
    return (7.1);
}

int three(int g, int h)
{
    int p, t;
    float r;
    g = one(g);
    r = two(h);
    printf("\n A = %d, B = %d, C = %f, D = %d", g, h, r, p);
    return (25);
}

int main()
{
    int a = 11, b = 12, ht;
    ht = three(14, 2);
    printf("\n F = %d, G = %d, H = %d", a, b, ht);
}
