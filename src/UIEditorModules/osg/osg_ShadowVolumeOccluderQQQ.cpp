#include "osg_ShadowVolumeOccluderQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ShadowVolumeOccluder>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ShadowVolumeOccluderQQQ_QModel::osg_ShadowVolumeOccluderQQQ_QModel(const osg_ShadowVolumeOccluderQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShadowVolumeOccluderQQQ_QModel::~osg_ShadowVolumeOccluderQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShadowVolumeOccluderQQQ_QModel::osg_ShadowVolumeOccluderQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ShadowVolumeOccluder*>(i->ptr);
}
QQuickItem *osg_ShadowVolumeOccluderQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShadowVolumeOccluderQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShadowVolumeOccluderQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShadowVolumeOccluderQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShadowVolumeOccluderQQQ::createQQModel(Instance*i){ return new osg_ShadowVolumeOccluderQQQ_QModel(i);}
