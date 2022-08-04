#include "Categories.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
using namespace categoriesFuntions;

int main()
{
    
    showCategories(categories);
    addCategories();
        
    if (bool compare = compareCat(ptrAddCategories, adRows, cols, categories) == true)
    {
        showCategories(categories);
    }
    else
    {
        showCategoriesAdd(ptrAddCategories, (5+adRows), cols);
    }
        
    return 0;
}