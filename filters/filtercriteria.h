#ifndef FILTERCRITERIA_H
#define FILTERCRITERIA_H

#include <QObject>

#include "gui/nnotebookviewitem.h"
#include "gui/ntagviewitem.h"
#include "gui/nsearchviewitem.h"

#include <QTreeWidgetItem>
#include <QList>

class FilterCriteria : public QObject
{
    Q_OBJECT
private:
    bool valueSet;
    QTreeWidgetItem *notebook;
    bool notebookIsSet;

    QList<QTreeWidgetItem*> tags;
    bool tagsIsSet;

    NSearchViewItem *savedSearch;
    bool savedSearchIsSet;

    QTreeWidgetItem *attribute;
    bool attributeIsSet;

    QString searchString;
    bool searchStringIsSet;

    bool deletedOnly;
    bool deletedOnlyIsSet;

    qint32 content;
    bool contentIsSet;

    QList<qint32> selectedNotes;
    bool selectedNotesIsSet;

public:
    explicit FilterCriteria(QObject *parent = 0);
    bool isSet();

    QTreeWidgetItem* getNotebook();
    void setNotebook(QTreeWidgetItem &item);
    bool isNotebookSet();
    void unsetNotebook();
    bool resetNotebook;

    QList<QTreeWidgetItem*> getTags();
    void setTags(QList<QTreeWidgetItem*> &items);
    bool isTagsSet();
    void unsetTags();
    bool resetTags;

    NSearchViewItem* getSavedSearch();
    void setSavedSearch(NSearchViewItem &item);
    bool isSavedSearchSet();
    void unsetSavedSearch();
    bool resetSavedSearch;

    QTreeWidgetItem* getAttribute();
    void setAttribute(QTreeWidgetItem &item);
    bool isAttributeSet();
    void unsetAttribute();
    bool resetAttribute;

    bool getDeletedOnly();
    void setDeletedOnly(bool value);
    bool isDeletedOnlySet();
    void unsetDeletedOnly();
    bool resetDeletedOnly;

    qint32 getLid();
    void setLid(qint32 content);
    bool isLidSet();
    void unsetLid();
    bool resetLid;

    void getSelectedNotes(QList<qint32> &items);
    void setSelectedNotes(QList<qint32> &items);
    bool isSelectedNotesSet();
    void unsetSelectedNotes();
    bool resetSelectedNotes;

    QString getSearchString();
    void setSearchString(QString string);
    bool isSearchStringSet();
    void unsetSearchString();
    bool resetSearchString;

    void duplicate(FilterCriteria &criteria);


signals:

public slots:

};

#endif // FILTERCRITERIA_H
