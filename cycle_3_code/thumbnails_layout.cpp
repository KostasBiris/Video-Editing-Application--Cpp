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
    int kw = 198;
    int size = r.width()/kw;

    if( size <= m_items.size() ){
        for( i = 0 ; i< size ; i++ ){
           QLayoutItem *o = m_items.at(i);
           int xspacing = (r.width()-198*size)/(size-1);
           QRect geom((xspacing+198)*i, r.y()+4, 196, r.height()-8);
           o->setGeometry(geom);
        }
        for( ; i < m_items.size(); i++){
            QLayoutItem *o = m_items.at(i);
            QRect geom(-1,-1,0,0);
            o->setGeometry(geom);
        }
   }
    else{
        for( i = 0 ; i< m_items.size() ; i++ ){
           QLayoutItem *o = m_items.at(i);
           int xspacing = (r.width()-196*size)/size+28;
           QRect geom(xspacing*i + 196*i, r.y()+4, 196, r.height()-8);
           o->setGeometry(geom);
        }
    }
}
QSize ThumbLayout::sizeHint() const
{
    QSize s(0, 0);
    int n = m_items.count();
    if (n > 0)
        s = QSize(100, 70);
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
