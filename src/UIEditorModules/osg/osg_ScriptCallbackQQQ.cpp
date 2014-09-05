#include "osg_ScriptCallbackQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ScriptEngine>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ScriptCallbackQQQ_QModel::osg_ScriptCallbackQQQ_QModel(const osg_ScriptCallbackQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ScriptCallbackQQQ_QModel::~osg_ScriptCallbackQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ScriptCallbackQQQ_QModel::osg_ScriptCallbackQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ScriptCallback*>(i->ptr);
}
QQuickItem *osg_ScriptCallbackQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ScriptCallbackQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ScriptCallbackQQQ::PREcompoQML()const{return string("");}
const std::string osg_ScriptCallbackQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ScriptCallbackQQQ::createQQModel(Instance*i){ return new osg_ScriptCallbackQQQ_QModel(i);}
