#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Fungsi untuk menghitung NPV
double calculateNPV(double rate, const vector<double>& cashFlows, double initialInvestment) {
    double npv = -initialInvestment; // Awalnya diatur ke nilai investasi awal negatif
    for (int t = 0; t < cashFlows.size(); t++) {
        npv += cashFlows[t] / pow(1 + rate, t);
    }
    return npv;
}

int main() {
    double rate; // Tingkat diskonto
    double initialInvestment; // Modal awal
    vector<double> cashFlows; // Arus kas

    // Masukkan tingkat diskonto
    cout << "Masukkan tingkat diskonto (rate): ";
    cin >> rate;

    // Masukkan modal awal
    cout << "Masukkan modal awal (initial investment): ";
    cin >> initialInvestment;

    // Masukkan arus kas untuk setiap periode
    int numPeriods;
    cout << "Masukkan jumlah periode: ";
    cin >> numPeriods;

    for (int t = 0; t < numPeriods; t++) {
        double cashFlow;
        cout << "Masukkan arus kas untuk periode " << t << ": ";
        cin >> cashFlow;
        cashFlows.push_back(cashFlow);
    }

    // Hitung NPV
    double npv = calculateNPV(rate, cashFlows, initialInvestment);

    // Tampilkan hasil NPV dan tentukan apakah proyek menguntungkan
    cout << "Nilai Sekarang Bersih (NPV) adalah: " << npv << endl;
    
    if (npv >= 0) {
        cout << "Proyek menguntungkan." << endl;
    } else {
        cout << "Proyek tidak menguntungkan." << endl;
    }

    int n = 15
    while (n<=28){
        int sum = 0;
        sum += pow(n,2) + int x

    }
    return 0;
}
