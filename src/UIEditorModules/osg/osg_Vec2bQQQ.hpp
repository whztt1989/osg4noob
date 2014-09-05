#ifndef EDITOR_META_CLASS_osg_Vec2bQQQ_H
#define EDITOR_META_CLASS_osg_Vec2bQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec2b>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec2bQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Vec2b* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_Vec2bQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_Vec2bQQQ_QModel(const osg_Vec2bQQQ_QModel&o);
///Destruction////////////////
   ~osg_Vec2bQQQ_QModel();
     inline osg::Vec2b* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec2bQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_Vec2bQQQ():MetaQQuickClass( "osg::Vec2b"){_typeid=&typeid(osg::Vec2b );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_Vec2bQQQ_QModel)
#endif

