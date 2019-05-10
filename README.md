# Reiknirit Lokaverkefni - Andri Fannar
## Uppsetning verkefnis
**Í þessu verkefni ætla ég að bera saman tvö leitaralgrím í tveimur forritunarmálum (Python og C++) í tveimur tegundum stýrikerfa (Windows og Mac) og þar af leiðandi á tveimur mismunandi vélum**  
**Með verkefninu fylgja keyrsluskrárnar og hér fyrir neðan verður linkur með útskýringum fyrir hvert algrím**  
Það má strax gera ráð fyrir því að algrímin séu fljótvirkari í C++ heldur en í Python þar sem C++ er low-level (keyrir nær vélbúnaðinum).  
Ekki ætti að muna miklu milli stýrikerfa, en þó er vélbúnaðurinn ekki sá sami í vélunum.  
### Algrímin sem verða prófuð:  
**Quick-Sort**   
**Merge-Sort**  
### Vélarnar sem algrímin verða prófuð á:  
**MacBook Pro 2017**  
intel Core i7 2.7GHz
16GB ddr4 2133MHz  
**Windows borðtölva**  
intel Core i5 6600K 4.4GHz
16GB ddr4 2133MHz  
### Editorar  
**Python skrárnar verða keyrðar í PyCharm og C++ skrárnar í VisualStudioCode.**  

### Video þar sem farið er yfir keyrslu forrita  
**QuickSort**  
https://youtu.be/D0aCHpHUKeM  
**MergeSort**  
https://www.youtube.com/watch?v=VXxNG9OFV6I  

# Niðurstöður  
## MAC  
### QuickSort
**Python**  
100 stök meðaltal: 0.000638 sekúndur  
1000 stök meðaltal:  0.00688 sekúndur  
**C++**  
100 stök meðaltal:  0.411 sekúndur  
1000 stök meðaltal:  0.402 sekúndur  

### MergeSort  
**Python**  
100 stök meðaltal:  0.000791 sekúndur  
1000 stök meðaltal:  0.0073259 sekúndur  
**C++**  
100 stök meðaltal:  0.42 sekúndur  
1000 stök meðaltal:  0.423 sekúndur  

## Windows  
### QuickSort
**Python**  
100 stök meðaltal:  0.0015199 sekúndur  
1000 stök meðaltal:  0.02043789 sekúndur  
**C++**  
100 stök meðaltal:  1.401 sekúndur  
1000 stök meðaltal:  1.176 sekúndur  
 
### MergeSort  
**Python**  
100 stök meðaltal:  0.002125 sekúndur
1000 stök meðaltal:  0.0261508 sekúndur  
**C++**  
100 stök meðaltal:  1.234 sekúndur  
1000 stök meðaltal:  1.178 sekúndur  

# Niðurstaða  
**Niðurstöður á keyrslutíma milli forrita eru alls ekki nákvæmar þar sem VSCode þarf að compile-a kóðann fyrir hverja keyrslu. Mér finnst líka mjög skrýtið að það taki styttri tíma að leysa 1000 staka lista vs 100 staka lista**  
**Niðurstöðurnar í Python voru fyrirsjáanlegri. Forritið er hundraðasta úr sekúndu fljótara að leysa úr 100 staka lista vs 1000 staka lista.**  
**Þegar keyrslutíminn í Mac vs Windos er borinn saman sést að í Mac vélinni er Python nánast hundraðasta úr sekúndu fljótara að keyra í öllum tilfellum og C++ nánast heilli sekúndu fljótara.**


