#include "osg_LightSource.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/LightSource>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_LightSource::createInstance(){
osg::ref_ptr<osg::LightSource> realinstance				;
realinstance = new osg::LightSource ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
