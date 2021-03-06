import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0


import QtQuick 2.1
import osgQtQuick 1.0
Rectangle {
id:main
signal drawableselected (int index)
//signal geodeselected(string msg)
    width: 600
    height: 200
	opacity:1.0
    color: "blue"
x:500
y:0



 property var qmodel: osg_Matrixf


  MouseArea {

            anchors.fill: parent
            hoverEnabled: true
            acceptedButtons:  Qt.RightButton
            drag.target: main
            drag.axis: Drag.XandYAxis

    Grid {

//anchors.fill: parent
    columns: 2
//    spacing: 1


Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"Rotation";}}
    Rectangle{  color: "transparent"; height:20;width: 160;
    Grid{width: 320;
    columns:4
    TextField{ width: 80;   text:main.qmodel.rotation.r
    onTextChanged:main.qmodel.rotation.r=parseFloat(text)
    }
    TextField{  width: 80;      text:main.qmodel.rotation.g
    onTextChanged:main.qmodel.rotation.g=parseFloat(text)
    }
    TextField{  width: 80;      text:main.qmodel.rotation.b
    onTextChanged:{main.qmodel.rotation.b=parseFloat(text)
    }
    }
    TextField{   width: 80;     text:main.qmodel.rotation.a
    onTextChanged:main.qmodel.rotation.a=parseFloat(text)
    }
    }

    }

    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"Position";}}
    Rectangle{  color: "transparent"; height:20;width: 160;
    Grid{width: 320;
    columns:3
    TextField{    text:main.qmodel.position.x
    onTextChanged:main.qmodel.position.x=parseFloat(text)
    }
    TextField{    text:main.qmodel.position.y
    onTextChanged:main.qmodel.position.y=parseFloat(text)
    }
    TextField{    text:main.qmodel.position.z
    onTextChanged:{main.qmodel.position.z=parseFloat(text)
    console.log("fok");}
    }
    }

    }




    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"Scale";}}
    Rectangle{  color: "transparent"; height:20;width: 160;
    Grid{width: 320;
    columns:3
    TextField{    text:main.qmodel.scale.x
    onTextChanged:main.qmodel.scale.x=parseFloat(text)
    }
    TextField{    text:main.qmodel.scale.y
    onTextChanged:main.qmodel.scale.y=parseFloat(text)
    }
    TextField{    text:main.qmodel.scale.z
    onTextChanged:{main.qmodel.scale.z=parseFloat(text)
  }
    }
    }
    }

    }
    }
    }

