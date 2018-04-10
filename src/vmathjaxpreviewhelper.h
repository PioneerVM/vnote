#ifndef VMATHJAXPREVIEWHELPER_H
#define VMATHJAXPREVIEWHELPER_H

#include <QObject>

class VMathJaxPreviewHelper : public QObject
{
    Q_OBJECT
public:
    explicit VMathJaxPreviewHelper(QObject *p_parent = nullptr);

    // Get an ID for identification.
    int registerIdentifier();

    // Preview @p_text and return SVG data asynchronously.
    // @p_identifier: identifier the caller registered;
    // @p_id: internal id for each caller;
    // @p_text: raw text of the MathJax script.
    void previewMathJax(int p_identifier, int p_id, const QString &p_text);

signals:

private:
    void init();

    void doInit();

    int m_initialized;

    int m_nextID;
};

inline int VMathJaxPreviewHelper::registerIdentifier()
{
    return ++m_nextID;
}

inline void VMathJaxPreviewHelper::init()
{
    if (!m_initialized) {
        doInit();
    }
}
#endif // VMATHJAXPREVIEWHELPER_H
