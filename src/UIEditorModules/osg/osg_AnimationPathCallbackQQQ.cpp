#include "osg_AnimationPathCallbackQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/AnimationPath>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_AnimationPathCallbackQQQ_QModel::osg_AnimationPathCallbackQQQ_QModel(const osg_AnimationPathCallbackQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_AnimationPathCallbackQQQ_QModel::~osg_AnimationPathCallbackQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_AnimationPathCallbackQQQ_QModel::osg_AnimationPathCallbackQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::AnimationPathCallback*>(i->ptr);
}
QQuickItem *osg_AnimationPathCallbackQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_AnimationPathCallbackQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_AnimationPathCallbackQQQ::PREcompoQML()const{return string("");}
const std::string osg_AnimationPathCallbackQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_AnimationPathCallbackQQQ::createQQModel(Instance*i){ return new osg_AnimationPathCallbackQQQ_QModel(i);}
