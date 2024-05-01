#include<stdio.h>
void main()
{
    int input=0;
    printf("Choose any of the following option:\n  1) Search for element using atomic number.\n  2) Search for group.\n  3) Search for period.\n");
    scanf("%d",&input);
if(input==1)
{   int num=0;
    printf("Enter the element number:");
    scanf("%d",&num);
    switch (num+1)
    {
    case 2:
        printf("The element is: Hydrogen(H)\n");
        printf("Atomic mass = 2");
        break;
        
    case 3:
        printf("The element is: Helium(He)\n");
        printf("Atomic mass = 4");
        break;
        
    case 4:
        printf("The element is:Lithium(Li) \n");
        printf("Atomic mass = 6");
        break;
        
    case 5:
        printf("The element is:Beryllium(Be) \n");
        printf("Atomic mass =8 ");
        break;
        
    case 6:
         printf("The element is:Boron(B) \n");
        printf("Atomic mass =10 ");
        break;
        
    case 7:
        printf("The element is:Carbon(C) \n");
        printf("Atomic mass = 12");
        break;
        
    case 8:
        printf("The element is:Nitrogen(N) \n");
        printf("Atomic mass = 14");
        break;
        
    case 9:
        printf("The element is:Oxygen(O) \n");
        printf("Atomic mass = 16");
        break;
        
    case 10:
        printf("The element is:Fluorine(F)\n");
        printf("Atomic mass = 19");
        break;
        
    case 11:
        printf("The element is:Neon(Ne) \n");
        printf("Atomic mass =20 ");
        break;
        
    case 12:
         printf("The element is:Sodium(Na) \n");
        printf("Atomic mass =23 ");
        break;
        
    case 13:
        printf("The element is:Magnesium(Mg) \n");
        printf("Atomic mass = 24");
        break;
    case 14:
        printf("The element is:Aluminium(Al) \n");
        printf("Atomic mass =27 ");
        break;
        
    case 15:
        printf("The element is:Silicon(Si) \n");
        printf("Atomic mass =28 ");
        break;
        
    case 16:
        printf("The element is:Phosphorus(P) \n");
        printf("Atomic mass =31 ");
        break;
        
    case 17:
        printf("The element is:Sulfur(S) \n");
        printf("Atomic mass = 32");
        break;
        
    case 18:
         printf("The element is:Chlorine(Cl) \n");
        printf("Atomic mass =35.5 ");
        break;
        
    case 19:
        printf("The element is:Argon(Ar) \n");
        printf("Atomic mass =40 ");
        break;
    case 20:
        printf("The element is:Potassium(K) \n");
        printf("Atomic mass = 39");
        break;
        
    case 21:
        printf("The element is: Calcium(Ca)\n");
        printf("Atomic mass =40 ");
        break;
        
    case 22:
        printf("The element is:Scandium(Sc) \n");
        printf("Atomic mass =45 ");
        break;
        
    case 23:
        printf("The element is:Titanium(Ti) \n");
        printf("Atomic mass = 48");
        break;
        
    case 24:
         printf("The element is:Vanadium(V) \n");
        printf("Atomic mass =51 ");
        break;
        
    case 25:
        printf("The element is:Chromium(Cr) \n");
        printf("Atomic mass =52 ");
        break;

    case 26:
        printf("The element is:Manganese(Mn)\n");
        printf("Atomic mass =55 ");
        break;
        
    case 27:
        printf("The element is:Iron(Fe)\n");
        printf("Atomic mass =56 ");
        break;
        
    case 28:
        printf("The element is:Cobalt(Co)\n");
        printf("Atomic mass = 59");
        break;
        
    case 29:
        printf("The element is: Nickel(Ni)\n");
        printf("Atomic mass =58.6 ");
        break;
        
    case 30:
         printf("The element is: Copper(Cu)\n");
        printf("Atomic mass =63.5 ");
        break;
        
    case 31:
        printf("The element is:Zinc(Zn) \n");
        printf("Atomic mass =65.38 ");
        break;
    case 32:
        printf("The element is:Gallium(Ga) \n");
        printf("Atomic mass = 69.7");
        break;
        
    case 33:
        printf("The element is:Germanium(Ge) \n");
        printf("Atomic mass =72.6 ");
        break;
        
    case 34:
        printf("The element is: Arsenic(As)\n");
        printf("Atomic mass =75 ");
        break;
        
    case 35:
        printf("The element is:Selenium(Se) \n");
        printf("Atomic mass =79 ");
        break;
        
    case 36:
         printf("The element is:Bromine(Br) \n");
        printf("Atomic mass =80 ");
        break;
        
    case 37:
        printf("The element is:Krypton(Kr) \n");
        printf("Atomic mass =83.7 ");
        break;
    case 38:
        printf("The element is: Rubidium(Rb)\n");
        printf("Atomic mass = 85.4");
        break;
        
    case 39:
        printf("The element is:Strontium(Sr) \n");
        printf("Atomic mass =87.6 ");
        break;
        
    case 40:
        printf("The element is: Yttrium(Y)\n");
        printf("Atomic mass =89 ");
        break;
        
    case 41:
        printf("The element is:Zirconium(Zr) \n");
        printf("Atomic mass =91.2 ");
        break;
        
    case 42:
         printf("The element is: Niobium(Nb)\n");
        printf("Atomic mass =93 ");
        break;
        
    case 43:
        printf("The element is:Molybdenum(Mo) \n");
        printf("Atomic mass =99 ");
        break;
    case 44:
        printf("The element is:Technetium(Tc) \n");
        printf("Atomic mass =98 ");
        break;
        
    case 45:
        printf("The element is:Ruthenium(Ru) \n");
        printf("Atomic mass =101 ");
        break;
        
    case 46:
        printf("The element is: Rhodium(Rh)\n");
        printf("Atomic mass =103 ");
        break;
        
    case 47:
        printf("The element is: Palladium(Pd)\n");
        printf("Atomic mass =106.4 ");
        break;
        
    case 48:
         printf("The element is: Silver(Ag)\n");
        printf("Atomic mass =107.8 ");
        break;
        
    case 49:
        printf("The element is:Cadium(Cd) \n");
        printf("Atomic mass =112.4 ");
        break;
    case 50:
        printf("The element is:Indium(In) \n");
        printf("Atomic mass =114.8 ");
        break;
        
    case 51:
        printf("The element is:Tin(Sn) \n");
        printf("Atomic mass = 118.7");
        break;
        
    case 52:
        printf("The element is:Antimony(Sb) \n");
        printf("Atomic mass =121.7 ");
        break;
        
    case 53:
        printf("The element is:Tellurium(Te) \n");
        printf("Atomic mass = 127.6");
        break;
        
    case 54:
         printf("The element is:Iodine(I) \n");
        printf("Atomic mass = 127");
        break;
        
    case 55:
        printf("The element is: Xenon(Xe)\n");
        printf("Atomic mass =131.2 ");
        break;
    case 56:
        printf("The element is: Caesium(Cs)\n");
        printf("Atomic mass =132.9 ");
        break;
        
    case 57:
        printf("The element is: Barium(Ba)\n");
        printf("Atomic mass = 137.3");
        break;
        
    case 58:
        printf("The element is:Lanthanum(La) \n");
        printf("Atomic mass =139 ");
        break;
        
    case 59:
        printf("The element is: Cerium(Ce)\n");
        printf("Atomic mass =140.1 ");
        break;
        
    case 60:
         printf("The element is:Praseodymium(Pr) \n");
        printf("Atomic mass =141 ");
        break;
        
    case 61:
        printf("The element is: Neodymium(Nd)\n");
        printf("Atomic mass =144.2 ");
        break;
    case 62:
        printf("The element is: Promethium(Pm)\n");
        printf("Atomic mass =145 ");
        break;
        
    case 63:
        printf("The element is: Samarium(Sm)\n");
        printf("Atomic mass =150.3 ");
        break;
        
    case 64:
        printf("The element is:Europium(Eu) \n");
        printf("Atomic mass = 152");
        break;
        
    case 65:
        printf("The element is:Gadolium(Gd) \n");
        printf("Atomic mass =157.2 ");
        break;
        
    case 66:
         printf("The element is: Terbium(Tb)\n");
        printf("Atomic mass = 159");
        break;
        
    case 67:
        printf("The element is: Dysprosium(Dy)\n");
        printf("Atomic mass =162.5 ");
        break;
    case 68:
        printf("The element is:Holmium(Ho) \n");
        printf("Atomic mass =165 ");
        break;
        
    case 69:
        printf("The element is: Erbium(Er)\n");
        printf("Atomic mass = 167.2");
        break;
        
    case 70:
        printf("The element is:Thulium(Tm) \n");
        printf("Atomic mass =169 ");
        break;
        
    case 71:
        printf("The element is: Ytterbium(Yb)\n");
        printf("Atomic mass = 173");
        break;
        
    case 72:
         printf("The element is: Lutetium(Lu)\n");
        printf("Atomic mass =175 ");
        break;
        
    
    case 73:
        printf("The element is: Hafnium(Hf)\n");
        printf("Atomic mass = 178.4");
        break;
        
    case 74:
        printf("The element is:Tantalum(Ta) \n");
        printf("Atomic mass =181 ");
        break;
        
    case 75:
        printf("The element is: Tungsten(W)\n");
        printf("Atomic mass =183.8 ");
        break;
        
    case 76:
        printf("The element is:Rhenium(Re) \n");
        printf("Atomic mass =186.2 ");
        break;
        
    case 77:
        printf("The element is:Osmium(Os) \n");
        printf("Atomic mass =190.2 ");
        break;
        
    case 78:
        printf("The element is:Iridium(Ir) \n");
        printf("Atomic mass =192.2 ");
        break;
    case 79:
        printf("The element is:Platinum(Pt) \n");
        printf("Atomic mass = 195");
        break;
        
    case 80:
        printf("The element is: Gold(Au)\n");
        printf("Atomic mass =197 ");
        break;
        
    case 81:
        printf("The element is: Mercury(Hg)\n");
        printf("Atomic mass =200.5 ");
        break;
        
    case 82:
        printf("The element is:Thalium(Tl) \n");
        printf("Atomic mass = 204.4");
        break;
        
    case 83:
         printf("The element is:Lead(Pb) \n");
        printf("Atomic mass =207.2 ");
        break;
        
    case 84:
        printf("The element is:Bismuth(Bi) \n");
        printf("Atomic mass = 209");
        break;
    case 85:
        printf("The element is:Polonium(Po) \n");
        printf("Atomic mass = 209");
        break;
        
    case 86:
        printf("The element is: Astatine(210)\n");
        printf("Atomic mass =210 ");
        break;
        
    case 87:
        printf("The element is: Radon(Rn)\n");
        printf("Atomic mass = 222");
        break;
        
    case 88:
        printf("The element is: Francium(Fr)\n");
        printf("Atomic mass = 223");
        break;
        
    case 89:
         printf("The element is: Radium(Ra)\n");
        printf("Atomic mass = 226");
        break;
        
    case 90:
        printf("The element is: Actinium(Ac)\n");
        printf("Atomic mass =227 ");
        break;
    case 91:
        printf("The element is: Thorium(Th)\n");
        printf("Atomic mass =232 ");
        break;
        
    case 92:
        printf("The element is: Protactinium(Pa)\n");
        printf("Atomic mass = 231");
        break;
        
    case 93:
        printf("The element is: Uranium(U)\n");
        printf("Atomic mass =238 ");
        break;
        
    case 94:
        printf("The element is: Neptunium(237)\n");
        printf("Atomic mass =237 ");
        break;
        
    case 95:
         printf("The element is:Plutonium(Pu) \n");
        printf("Atomic mass =244 ");
        break;
        
    case 96:
        printf("The element is:Americium(Am) \n");
        printf("Atomic mass = 243");
        break;
    case 97:
        printf("The element is: Curium(Cm)\n");
        printf("Atomic mass =247 ");
        break;
        
    case 98:
        printf("The element is:Berkelium(Bk) \n");
        printf("Atomic mass = 247");
        break;
        
    case 99:
        printf("The element is: Californium(Cf)\n");
        printf("Atomic mass =251 ");
        break;
        
    case 100:
        printf("The element is: Einsteinium(Es)\n");
        printf("Atomic mass = 252");
        break;
        
    case 101:
         printf("The element is:Fermium(Fm) \n");
        printf("Atomic mass =257 ");
        break;
        
    case 102:
        printf("The element is:Mendelevium(Md) \n");
        printf("Atomic mass =258 ");
        break;
    case 103:
        printf("The element is:Nobelium(No) \n");
        printf("Atomic mass = 259");
        break;
        
    case 104:
        printf("The element is: Lawrencium(Lr)\n");
        printf("Atomic mass = 266");
        break;
        
    case 105:
        printf("The element is:Rutherfordium(Rf) \n");
        printf("Atomic mass = 267");
        break;
        
    case 106:
        printf("The element is: Dubnium(Db)\n");
        printf("Atomic mass =268 ");
        break;
        
    case 107:
         printf("The element is:Seaborgium(Sg) \n");
        printf("Atomic mass =269 ");
        break;
        
    case 108:
        printf("The element is:Bohrium(Bh) \n");
        printf("Atomic mass = 270");
        break;
    case 109:
        printf("The element is:Hassium(Hs) \n");
        printf("Atomic mass = 270");
        break;
        
    case 110:
        printf("The element is: Meitnerium(Mt)\n");
        printf("Atomic mass = 278");
        break;
        
    case 111:
        printf("The element is: Darmstadtium(Ds)\n");
        printf("Atomic mass =281 ");
        break;
        
    case 112:
        printf("The element is:Roentgenium(Rg) \n");
        printf("Atomic mass =282 ");
        break;
        
    case 113:
         printf("The element is:Copernicium(Cn) \n");
        printf("Atomic mass =285 ");
        break;
        
    case 114:
        printf("The element is: Nihonium(Nh)\n");
        printf("Atomic mass =286 ");
        break;
    case 115:
        printf("The element is: Flerovium(Fl)\n");
        printf("Atomic mass =289 ");
        break;
        
    case 116:
        printf("The element is: Moscovium(Mc)\n");
        printf("Atomic mass = 290");
        break;
        
    case 117:
        printf("The element is: Livermorium(Lv)\n");
        printf("Atomic mass = 293");
        break;
        
    case 118:
        printf("The element is:Tennessine(Ts) \n");
        printf("Atomic mass = 294");
        break;
        
    case 119:
         printf("The element is: Oganesson(Og)\n");
        printf("Atomic mass =294 ");
        break;
    

    default:
        printf("Please enter number from 1 to 118\n");
        break;
    }
}
else if(input==2)
{
    int j=0;
    printf("Enter the group number:");
    scanf("%d",&j);
    if(j==1)
{
    printf("This group is called as Alkali Metals \nValancy is 1\n");
}
else if(j==2)
{
    printf("This group is called as Alkaline earth Metals \nValancy is 2\n");
}
else if(j>2 & j<=12)
{
    printf("This group is called Tansition group.. \nValancy is 2\n");
}
else if(j>12 & j<=16)
{
    printf("This group have metals and non-metals. \n");
}
else if(j==17)
{
    printf("This group is called as Halogens \nValancy is 1");
}
else if(j==18)
{
    printf("This group is called as Noble elements.\nValancy is 0\n");
}
else
{
    printf("Please enter a value between 1-18\n");
}
}
else if(input==3)
{
    int j=0;
    printf("Enter the period number:");
    scanf("%d",&j);
    if(j==1)
{
    printf("The 1 st period is the shortest period containing only 2 elements i.e. Hydrogen (H) and Helium (He). In this period, only the 1s orbital filled.\n");
}
else if(j==2)
{
    printf("The 2nd period contain 8 elements from Lithium (Li) to Neon (Ne). In this period, the 2s and 2p orbitals are filled.\n");
}
else if(j==3)
{
    printf("The 3rd period also contains 8 elements starting from Sodium (Na) to Argon (Ar). In this period, the 3s and 3p orbitals are filled.\n");
}
else if(j==4)
{
    printf("The 4th period is the period, with 18 elements, starting from Potassium (K) to Krypton (Kr). In this period, 4s and 4p and also the 3d orbitals are filled.\n");
}
else if(j==5)
{
    printf("The 5th period is also the long period with 18 elements, starting from Rubidium (Rb to Xenon (Xe). The 5s and 5p along with the 4d orbitals are filled.\n");
}
else if(j==6)
{
    printf("The 6th period is the longest period with32 elements. It includes 14 elements belonging to the 4f series called lanthanides. In this period, the 6s and 6p along with the 4f and 5d orbitals are filled.\n");
}
else if(j==7)
{
    printf("The 7th period is an incomplete period. It includes Fr along with the 14 elements belonging to the 5f series called actinides. In this period, the 7s,5f and 6d orbitals are filled.");
}
else
{
    printf("Please enter a value from 1-7\n");
}
}
else
{
    printf("Invalid option. Try again.");
}
}
