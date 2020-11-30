#include "thumbnails_layout.h"

int ThumbLayout::count() const
{
    // QVector::size() returns the number of QLayoutItems in m_items
    return m_items.size();
}

QLayoutItem *ThumbLayout::itemAt(int idx) const
{
    // QVector::value() performs index checking, and returns nullptr if we are
    // outside the valid range
    return m_items.value(idx);
}

QLayoutItem *ThumbLayout::takeAt(int idx)
{
    // QVector::take does not do index checking
    return idx >= 0 && idx < m_items.size() ? m_items.takeAt(idx) : 0;
}

void ThumbLayout::addItem(QLayoutItem *item)
{
    m_items.append(item);
}

ThumbLayout::~ThumbLayout()
{
     QLayoutItem *item;
     while ((item = takeAt(0)))
         delete item;
}

void ThumbLayout::setGeometry(const QRect &r)
{
    QLayout::setGeometry(r);

    if (m_items.size() == 0)
        return;

    int i = 0;
    while (i < m_items.size()) {
        QLayoutItem *o = m_items.at(i);
        //fixed the behaviour of the buttons is slightly stacked at the left side
        int xspacing = (r.width()-155*4)/3;
        QRect geom(xspacing*i + 155*i, r.y(), 155, r.height());
        o->setGeometry(geom);
        qDebug() <<xspacing<<","<<r.width();

        ++i;
    }
}

//IDK WHAT THIS DOES BUT IT WORKS AS INTENDED
QSize ThumbLayout::sizeHint() const
{
    QSize s(0, 0);
    int n = m_items.count();
    if (n > 0)
        s = QSize(100, 70); //start with a nice default size
    int i = 0;
    while (i < n) {
        QLayoutItem *o = m_items.at(i);
        s = s.expandedTo(o->sizeHint());
        ++i;
    }
    return s + n * QSize(spacing(), spacing());
}

QSize ThumbLayout::minimumSize() const
{
    QSize s(0, 0);
    int n = m_items.count();
    int i = 0;
    while (i < n) {
        QLayoutItem *o = m_items.at(i);
        s = s.expandedTo(o->minimumSize());
        ++i;
    }
    return s + n * QSize(spacing(), spacing());
}
