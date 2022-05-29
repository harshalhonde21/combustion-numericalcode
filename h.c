#include<stdio.h>
int sum(int,int);
int the(float,float);
int main()
{
	float percent, molecularweight, division1,division,y,division2;
	//for carbon
	printf("\t\t\t\t\t*********Design by Harshal*********");
	printf("\n\n\n\n\n");
	printf("Enter the value of percentage of carbon=");
	scanf("%f",&percent);
	printf("Enter the value of molecularweight of carbon=");
	scanf("%f",&molecularweight);
	printf("Enter the value of y=");
	scanf("%f",&y)	;
	printf(".................................................................................\n");
	division1= percent/molecularweight;
	printf("kmol of carbon= %f\n",division1);
	printf("kmol of o2 required= %f\n",division1);
	printf("kmol of gas= %f\n",division1);
	printf(".................................................................................\n");
	//for Hydorzen
	printf("Enter the value of percentage of Hydrozen=");
	scanf("%f",&percent);
	printf("Enter the value of molecularweight of Hydrozen=");
	scanf("%f",&molecularweight);
	printf(".................................................................................\n");
	division= percent/molecularweight;
	printf("kmol of Hydrozen= %f\n",division);
	printf("kmol of o2 required %f\n",division/molecularweight);
	printf("kmol of gas= %f\n",division);
	printf(".................................................................................\n");
	//for Nitrogen
	printf("Enter the value of percentage of Nitrogen=");
	scanf("%f",&percent);
	printf("Enter the value of molecularweight of Nitrogen=");
	scanf("%f",&molecularweight);
	printf(".................................................................................\n");
	division2= percent/molecularweight;
	printf("kmol of nitrogen= %f\n",division2);
	printf("kmol of o2 required= %f\n",division2);
	printf("kmol of gas= %f\n",division2);
	printf(".................................................................................\n");
	//o2 required for combustion
	printf("Total O2 required for combustion = %f\n",division/molecularweight+division1);
	printf(".................................................................................\n");
	//minimum air req
	printf("Minimum Air required for combustion= %f\n",(division/molecularweight+division1)*100/21);
	printf(".................................................................................\n");
	//M3 of mini air
	printf("m3 of Minumum air required=%f\n",((division/molecularweight+division1)*100/21)*22.4);
	printf(".................................................................................\n");
	//vol of air for 1kg fuel
	printf("Volume of air required for 1 kg of fuel = %f\n",(((division/molecularweight+division1)*100/21)*22.4)/100);
	printf(".................................................................................\n");
	//Calculation against actual air supplied 
	//Actual air supplied
	printf("Actual air Supplied =%f\n",((100+y)*((division/molecularweight+division1)*100/21))/100);
	printf(".................................................................................\n");
	//excess air
	printf("Excess air =%f\n",(((100+y)*((division/molecularweight+division1)*100/21))/100)-(division/molecularweight+division1)*100/21);
	printf(".................................................................................\n");
	//free O2 in flue gas
	printf("Free O2 in flue gas =%f\n",((((100+y)*((division/molecularweight+division1)*100/21))/100)-(division/molecularweight+division1)*100/21)*21/100);
	printf(".................................................................................\n");
	//free N2 in flue gas
	printf("N2 in flue gas= %f\n", division2+((100+y)*(((division/molecularweight+division1)*100/21))/100)*79/100);
	printf(".................................................................................\n");
	//total flue volume 
	printf("Total flue volume=%f\n",(((((100+y)*((division/molecularweight+division1)*100/21))/100)-(division/molecularweight+division1)*100/21)*21/100)+(division2+((100+y)*(((division/molecularweight+division1)*100/21))/100)*79/100)+division1);
	printf(".................................................................................\n");
	//% free O2 in flue
	printf(" Percent free O2 in flue=%f\n",(((((100+y)*((division/molecularweight+division1)*100/21))/100)-(division/molecularweight+division1)*100/21)*21/100)/((((((100+y)*((division/molecularweight+division1)*100/21))/100)-(division/molecularweight+division1)*100/21)*21/100)+(division2+((100+y)*(((division/molecularweight+division1)*100/21))/100)*79/100)+division1)*100);
	printf(".................................................................................\n");
	//% free N2 in flue
	printf(" Percent free N2 in flue=%f\n",(division2+((100+y)*(((division/molecularweight+division1)*100/21))/100)*79/100)/((((((100+y)*((division/molecularweight+division1)*100/21))/100)-(division/molecularweight+division1)*100/21)*21/100)+(division2+((100+y)*(((division/molecularweight+division1)*100/21))/100)*79/100)+division1)*100);
	printf(".................................................................................\n");
	//% free co2 in flue
	printf("percent free CO2 in flue=%f\n", ((division2)/((((((100+y)*((division/molecularweight+division1)*100/21))/100)-(division/molecularweight+division1)*100/21)*21/100)+(division2+((100+y)*(((division/molecularweight+division1)*100/21))/100)*79/100)+division1))*100);
	printf(".................................................................................\n");
	return 0;
	
}
int sum(int percent, int molecularweight)
{ 
	return(percent/molecularweight);
}

