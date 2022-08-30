#include <stdio.h>


struct Food{
 int quantity;
 int unit_price;
};

int main(){
struct Food paratha,vegetable,mineral_water;
int people_size;
printf("Quantity of Paratha:");

scanf("%d",&(paratha.quantity));



printf("Unit Price:");


scanf("%d",&(paratha.unit_price));

printf("Quantity of vegetable:");

scanf("%d",&(vegetable.quantity));



printf("Unit Price:");


scanf("%d",&(vegetable.unit_price));


printf("Quantity of Mineral_water:");

scanf("%d",&(mineral_water.quantity));



printf("Unit Price:");


scanf("%d",&(mineral_water.unit_price));


printf("Number of People:");
scanf("%d",&people_size);

int total_bill;

total_bill=paratha.quantity*paratha.unit_price+vegetable.quantity*vegetable.unit_price+mineral_water.quantity*mineral_water.unit_price ;






float bill_per_person;

bill_per_person=(float)total_bill/people_size;

printf("individual people will pay:%f taka",bill_per_person);







}
