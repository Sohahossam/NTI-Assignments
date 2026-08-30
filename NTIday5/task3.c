#include <stdio.h>

struct stores {
    float price;
    int quantity;
    char name[4];
};

struct stores update(struct stores product, float p_inc, int q_inc) {
    product.price += p_inc;
    product.quantity += q_inc;
    return product;
}

int main(void) {
    struct stores item = {25.75f, 12, "XYZ"};
    float p_inc = 0.0f;
    int q_inc = 0;

    printf("Input increment values: price increment and quantity increment\n");
    
    if (scanf("%f %d", &p_inc, &q_inc) == 2) {
        item = update(item, p_inc, q_inc);
        float total_value = item.price * (float)item.quantity;
        
        printf("Updated values of item\n");
        printf("Name : %s\n", item.name);
        printf("Price : %f\n", item.price);
        printf("Quantity : %d\n", item.quantity);
        printf("Value of the item = %f\n", total_value);
    }
    
    return 0;
}