#include "vmathjaxpreviewhelper.h"

#include <QDebug>

VMathJaxPreviewHelper::VMathJaxPreviewHelper(QObject *p_parent)
    : QObject(p_parent),
      m_initialized(false),
      m_nextID(0)
{

}

void VMathJaxPreviewHelper::doInit()
{
    Q_ASSERT(!m_initialized);
}

void VMathJaxPreviewHelper::previewMathJax(int p_identifier,
                                           int p_id,
                                           const QString &p_text)
{
    init();

    qDebug() << "previewMathJax" << p_identifier << p_id << p_text;
}
