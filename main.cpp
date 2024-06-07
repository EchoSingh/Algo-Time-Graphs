#include <QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include <QRandomGenerator>
#include <vector>
#include <chrono>
#include "mergesort.h"

using namespace std;
using namespace std::chrono;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    vector<int> sizes = {10, 100, 1000, 10000, 50000, 100000};  // Array sizes
    vector<long long> durations;  // Time taken for each size

    for (int n : sizes) {
        int* arr = new int[n];

        // Generate random elements
        for (int i = 0; i < n; i++) {
            arr[i] = QRandomGenerator::global()->bounded(10000);  // Random elements between 0 and 9999
        }

        auto start = high_resolution_clock::now();
        mergesort(arr, n);
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(end - start).count();

        durations.push_back(duration);

        delete[] arr;
    }

    // Create the chart
    QLineSeries *series = new QLineSeries();
    for (size_t i = 0; i < sizes.size(); ++i) {
        series->append(sizes[i], durations[i]);
    }

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Merge Sort Time Complexity");

    QValueAxis *axisX = new QValueAxis;
    axisX->setTitleText("Array Size");
    axisX->setLabelFormat("%i");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Time Taken (ns)");
    axisY->setLabelFormat("%i");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(800, 600);
    chartView->show();

    return a.exec();
}
