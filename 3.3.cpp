//Вычислить значение логического выражения при следующих значениях логических величин А, В и С: А = Истина, В = Ложь, С = Ложь:
//а) не А и В; б) А или не В; в) А и В или С.
#include <iostream>
#include <string>

using namespace std;

string boolToString(bool value) {
    return value ? "Истина" : "Ложь";
}

int main() {
    
    bool A = true;   
    bool B = false;  
    bool C = false;  

    
    bool result_a = !A && B;
    bool result_b = A || !B;
    bool result_c = (A && B) || C;

    
    cout << "а) не А и В: " << boolToString(result_a) << endl;
    cout << "б) А или не В: " << boolToString(result_b) << endl;
    cout << "в) А и В или С: " << boolToString(result_c) << endl;

    return 0;
}
