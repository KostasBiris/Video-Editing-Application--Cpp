#ifndef THUMBNAILLAYOUT_H
#define THUMBNAILLAYOUT_H


#include <QtWidgets>
#include <QVector>

//new layout for video thumbnails
class ThumbLayout : public QLayout
{
public:
    ThumbLayout(int spacing): QLayout()
    { setSpacing(spacing); }
    ThumbLayout(int spacing, QWidget *parent): QLayout(parent)
    { setSpacing(spacing); }
    ~ThumbLayout();

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

#endif // THUMBNAILLAYOUT_H
