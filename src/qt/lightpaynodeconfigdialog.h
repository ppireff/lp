#ifndef LIGHTPAYNODECONFIGDIALOG_H
#define LIGHTPAYNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class LightpayNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class LightpayNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LightpayNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:19700", QString privkey="MASTERNODEPRIVKEY");
    ~LightpayNodeConfigDialog();

private:
    Ui::LightpayNodeConfigDialog *ui;
};

#endif // LIGHTPAYNODECONFIGDIALOG_H
