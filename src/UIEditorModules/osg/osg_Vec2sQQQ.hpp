#ifndef EDITOR_META_CLASS_osg_Vec2sQQQ_H
#define EDITOR_META_CLASS_osg_Vec2sQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec2s>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec2sQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Vec2s* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_Vec2sQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_Vec2sQQQ_QModel(const osg_Vec2sQQQ_QModel&o);
///Destruction////////////////
   ~osg_Vec2sQQQ_QModel();
     inline osg::Vec2s* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec2sQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_Vec2sQQQ():MetaQQuickClass( "osg::Vec2s"){_typeid=&typeid(osg::Vec2s );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_Vec2sQQQ_QModel)
#endif

