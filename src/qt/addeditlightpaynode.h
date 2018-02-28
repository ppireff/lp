#ifndef ADDEDITLIGHTPAYNODE_H
#define ADDEDITLIGHTPAYNODE_H

#include <QDialog>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>

namespace Ui {
class AddEditLightpayNode;
}


class AddEditLightpayNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditLightpayNode(QWidget *parent = 0);
    ~AddEditLightpayNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();
    void on_AddEditAddressPasteButton_clicked();
    void on_AddEditPrivkeyPasteButton_clicked();
    void on_AddEditTxhashPasteButton_clicked();

signals:

private:
    Ui::AddEditLightpayNode *ui;
};

#endif // ADDEDITLIGHTPAYNODE_H
