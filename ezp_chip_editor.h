#ifndef EZP_CHIP_EDITOR_H
#define EZP_CHIP_EDITOR_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QByteArray>
#include <QString>
#include <QStringRef>
#include <QDebug>
#include <QTableView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QMessageBox>
#include <QVector>
#include <QThread>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStandardItemModel *model = new QStandardItemModel;
    QStandardItem *item;
    const QString csvHeader =  "Type;Manufacture;IC Name;JEDEC ID;SIZE;Block size;Type HEX;Algorithm;Delay;Extend;EEPROM;EEPROM pages;VCC\n";
    const QString csvHeader2 = "Type,Manufacture,IC Name,JEDEC ID,SIZE,Block size,Type HEX,Algorithm,Delay,Extend,EEPROM,EEPROM pages,VCC\n";
    QVector <QString> chType = {"SPI_FLASH","25_EEPROM","93_EEPROM","24_EEPROM","95_EEPROM"};
    struct chip_data {
        QString chipManuf;
        QString chipTypeTxt;
        QString chipName;
        QString chipJedecID;
        QString chipSize;
        QString blockSize;
        QString chipTypeHex;
        QString algorithmCode;
        QString delay;
        QString extend;
        QString eeprom;
        QString eepromPages;
        QString chipVCC;
    };
    chip_data chips[2000];
    QString bytePrint(unsigned char z);
    QString sizeConvert(int a);
    unsigned char dualDigitToByte(QString q, int poz);

private:
    Ui::MainWindow *ui;

signals:
    void dataChanged(const QModelIndex&, const QModelIndex&);

private slots:
    void on_actionOpen_triggered();
    void on_actionExit_triggered();
    void onDataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight);
    void on_actionDelete_string_triggered();
    void on_actionSave_triggered();

    void on_actionAdd_string_triggered();
    void on_actionMove_up_triggered();
    void on_actionMove_down_triggered();
    void on_actionExport_to_CSV_triggered();
    void on_actionExport_to_CSV_2_triggered();
    void on_actionImport_from_CSV_triggered();
    bool correctChipTyte(QString str);
};

#endif // EZP_CHIP_EDITOR_H
