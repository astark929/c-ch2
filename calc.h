#ifndef values
#define values

double calculation(double price, char tax, char handle) {
    double final_price = price;
    if (tax == 'y'){
        final_price = final_price * 1.0775;
    }
    if (handle == 'y')
    {
        final_price = final_price * 1.10;
    }
    return final_price;
}


#endif
