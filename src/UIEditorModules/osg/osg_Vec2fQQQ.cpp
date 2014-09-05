#include "osg_Vec2fQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec2f>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_Vec2fQQQ_QModel::osg_Vec2fQQQ_QModel(const osg_Vec2fQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_Vec2fQQQ_QModel::~osg_Vec2fQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_Vec2fQQQ_QModel::osg_Vec2fQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Vec2f*>(i->ptr);
}
QQuickItem *osg_Vec2fQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_Vec2fQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_Vec2fQQQ::PREcompoQML()const{return string("");}
const std::string osg_Vec2fQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_Vec2fQQQ::createQQModel(Instance*i){ return new osg_Vec2fQQQ_QModel(i);}