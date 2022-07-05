#include <stdio.h>
#include <string.h>

struct item
{
    int item_no;
    char item_desc[20];
    float price;
    float discount;
};

float indata(struct item it)
{
    float selling_price = 0;
    selling_price =it.price -(it.price * (it.discount / 100));

    return selling_price;
}

void ReadFile(struct item items[2])
{
    items[0].item_no = 1;
    strcpy(items[0].item_desc, "test product 1");
    items[0].price = 100.00;
    items[0].discount = 20;

    items[1].item_no = 2;
    strcpy(items[1].item_desc, "test product 2");
    items[1].price = 120.00;
    items[1].discount = 40;
};

int main(void)
{

    float total = 0.0;

    struct item item[2];
    ReadFile(item);
    for (int i = 0; i < 2; i++)
    {
        total = total + indata(item[i]);
        printf("%s\n", item[i].item_desc);
    }

    printf("Total: %.4f\n", total);
    return 0;
}