#include "vidlayout.h"

int VidLayout::count() const
{
    // QVector::size() returns the number of QLayoutItems in m_items
    return m_items.size();
}

QLayoutItem *VidLayout::itemAt(int idx) const
{
    // QVector::value() performs index checking, and returns nullptr if we are
    // outside the valid range
    return m_items.value(idx);
}

QLayoutItem *VidLayout::takeAt(int idx)
{
    // QVector::take does not do index checking
    return idx >= 0 && idx < m_items.size() ? m_items.takeAt(idx) : 0;
}

void VidLayout::addItem(QLayoutItem *item)
{
    m_items.append(item);
}

VidLayout::~VidLayout()
{
     QLayoutItem *item;
     while ((item = takeAt(0)))
         delete item;
}

void VidLayout::setGeometry(const QRect &r)
{
    QLayout::setGeometry(r);

    if (m_items.size() == 0)
        return;

   /* int w = r.width() - (m_items.count() - 1) * spacing();
    int h = r.height() - (m_items.count() - 1) * spacing();*/
    int i = 0;
    while (i < m_items.size()) {
        QLayoutItem *o = m_items.at(i);
        //this is bad but works for now, using indexes instead of casting
        if(i == 0 ){
            QRect geom(r.x() , r.y() , r.width(), r.height()-160);
            o->setGeometry(geom);
        }
        //this is bad x2
        if (i == 1){
            QRect geom(r.x() , r.y()+r.height()-160 , r.width(), 120);
            o->setGeometry(geom);
        }
        ///this is SO BAD
        if (i == 2){
            QRect geom(r.x() , r.y()+r.height()-45 , r.width(), 40);
            o->setGeometry(geom);
        }


        ++i;
    }
}

//IDK WHAT THIS DOES BUT IT WORKS AS INTENDED
QSize VidLayout::sizeHint() const
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

QSize VidLayout::minimumSize() const
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
