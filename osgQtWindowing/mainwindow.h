#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "baseqwindow.hpp"
#include <osgViewer/View>
#include <QtWidgets/QDockWidget>
#include <QtGui/qpainter.h>

#include <QVariant>
#include <QStatusBar>
#include <QProcess>
#include "TreeNodeModel.h"
#include <MetaQQuickClass.h>


#include "src/UIEditorModules/osg/osg_NodeQQQ.hpp"

namespace Ui
{
class MainWindow;
}
namespace osg
{
class Group;
class Node;
class Image;
}

class QtToOSGView;
class QQuickView;
class PickHandler;
class NodeAdder;
class MainWindow;
class QsciScintilla;
namespace pmoc
{
class UIEditor;
}

///Communication OSG->QT
class FindNamedNodeVisitor :public osg::NodeVisitor
{
public:

    std::string _name;
    std::list<osg::Node*> _foundNodes;
    FindNamedNodeVisitor(std::string name):osg::NodeVisitor(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)
    {
        _name=name;
    }

    virtual void apply(osg::Node& node)
    {
        if (node.getName()==_name)
            _foundNodes.push_back(&node);
        traverse(node);
    }
};

class findNamedNodeCallback: public   QObject, public osg::NodeCallback
{
    Q_OBJECT
signals:

///emit when work is done
    void namedNodesFound();

public:
    MainWindow*_caller;
    std::string _searchedname;
    osg::Node * _root;
    std::list<osg::Node*> _result;
    bool _undone;
    findNamedNodeCallback():QObject(),osg::NodeCallback()
    {
        _undone=true;
    }
    findNamedNodeCallback( std::string name,osg::Node * root,MainWindow *caller):QObject(),osg::NodeCallback()
    {
        _searchedname=name;
        _caller=caller;
        _root=root;

            _result.clear();
        _undone=true;
    }
    virtual void operator()(osg::Node* node, osg::NodeVisitor* nv)
    {

        if( _undone)
        {
            FindNamedNodeVisitor nv(_searchedname);
            _root->accept(nv);
            _result=nv._foundNodes;
            emit namedNodesFound();
            _undone=false;
        }
    }
};
class MainWindow : public BaseQWindow
{
    Q_OBJECT
//void newStateAttributeadded(QQModel *adder,QQModel * added);
//void newNodeadded(QQModel *adder,QQModel * added);
    Q_PROPERTY(QString makeFilePath READ getmakefilePath WRITE setmakefilePath NOTIFY makefilePathChanged)

signals:
    void makefilePathChanged();
public:

    QString getmakefilePath()const
    {
        return _makefilePath;
    }


    void setmakefilePath(QString s)
    {
        if(s!=_makefilePath)
        {
            _makefilePath=s;
            emit makefilePathChanged();
        }
    }

    std::string generateID(osg::Object*);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //virtual void resizeEvent(QResizeEvent *event);
protected:
    QString _makefilePath;

    void parseScene(osg::Node * scenedata,int depth,int maxdepth,TreeNodeModel *xxccurnode=0);
    void resetTreeViewModel();
    virtual void mouseMoveEvent(QMouseEvent*);
    virtual void closeEvent(QCloseEvent *event);
    //	 osg::Group* createdaScene(osg::Image *start_im);

    QMenu *_viewMenu;
    QAction *_fullscreenAct;

    osgViewer::View *_osgview;
    //QWidget * createDockBar();
//	Ui::MainWindow *ui;
    QtToOSGView* _win;//QtToOSGView
    QWidget *_container;
    PickHandler * _osgpicker;

QsciScintilla* _textEdit ;
    QProcess _compileprocess;/*to recompile plugin
process.start("make", QStringList() << plugin);*/
    std::list<std::string> _pluginsStringList;

    inline void setPluginToLoad(const std::list<std::string>&listplugin)
    {
        _pluginsStringList=listplugin;
    }
///load/unload
    void loadPlugins(bool load=true);

    Q_INVOKABLE void recompilePlugins();


///generated by pmoc
    pmoc::UIEditor *_generatedEditor;

    ///arborescent view model
    TreeNodeModel _TreeNode;
    TreeNodeDataObject* _selectedqnode ;
///osgqtrootitem
    QQuickItem *_UIrootItem;
    //QDockWidget * _dock;
//	osgOctreeVolume* _ink;
public slots:

//public slots:
    void newNodeadded(pmoc::QQModel*m);
    ///slot for TreeView
    void setNodeModel(const QString&);
    void setNodeModelStep2();

//Edition action slot

void selectedStatus(pmoc::QQModel*m){ std::string msg=m->_instance.model->id()+std::string(" selected");statusBar()->showMessage(msg.c_str(), 2000);}
void copiedStatus(pmoc::QQModel*m){ std::string msg=m->_instance.model->id()+std::string(" copied");statusBar()->showMessage(msg.c_str(), 2000);}

void cuttedStatus(pmoc::QQModel*m){ std::string msg=std::string("child of")+m->_instance.model->id()+std::string(" cutted");statusBar()->showMessage(msg.c_str(), 2000);}

void pastedStatus(pmoc::QQModel*m){ std::string msg=m->_instance.model->id()+std::string(" pasted");statusBar()->showMessage(msg.c_str(), 2000);}

void deletedStatus(pmoc::QQModel*m){ std::string msg=m->_instance.model->id()+std::string(" deleted");statusBar()->showMessage(msg.c_str(), 2000);}


    void Quit( );
    void updateTest(int);
    void Fullscreen();
//		void addDangerousGeode();
signals:
    void treeNodeSelected(pmoc::QQModel*);

    void wannaDie();

private slots:
//   virtual void newFile();
    /*   virtual void open();
    virtual void save();
    virtual void saveAs();
    virtual void openRecentFile();
    virtual void about();
    */
protected:
    virtual void loadFile(const QString &fileName);
    virtual void saveFile(const QString &fileName);  /*  virtual void createActions();
    virtual void createMenus();

    virtual void setCurrentFile(const QString &fileName);
    virtual void updateRecentFileActions();
    virtual QString strippedName(const QString &fullFileName);
*/
    osg::ref_ptr<findNamedNodeCallback> _findNamedNodeCallback;
};
//Q_DECLARE_METATYPE(MainWindow)


#endif // MAINWINDOW_H