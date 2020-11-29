#ifndef VIDLAYOUT_H
#define VIDLAYOUT_H


#include <QtWidgets>
#include <QVector>

class VidLayout : public QLayout
{
public:
    VidLayout(int spacing): QLayout()
    { setSpacing(spacing); }
    VidLayout(int spacing, QWidget *parent): QLayout(parent)
    { setSpacing(spacing); }
    ~VidLayout();

    void addItem(QLayoutItem *item) override;
    QSize sizeHint() const override;
    QSize minimumSize() const override;
    int count() const override;
    QLayoutItem *itemAt(int) const override;
    QLayoutItem *takeAt(int) override;
    void setGeometry(const QRect &rect) override;

private:
    QVector<QLayoutItem*> m_items;
};

#endif // VIDLAYOUT_H
