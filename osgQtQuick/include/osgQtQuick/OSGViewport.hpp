#ifndef _H_OSGQTQUICK_OSGVIEPORT_H_
#define _H_OSGQTQUICK_OSGVIEPORT_H_

#include <osgQtQuick/Export.hpp>
#include <osg/GL>
#include <osg/View>
#include <QQuickItem>

namespace osgQtQuick {

	class OSGNode;

	class OSGQTQUICK_EXPORT OSGViewport : public QQuickItem
	{
		Q_OBJECT

			Q_PROPERTY(osgQtQuick::OSGNode* sceneData READ sceneData WRITE setSceneData NOTIFY sceneDataChanged)
			Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
			Q_PROPERTY(DrawingMode mode READ mode WRITE setMode NOTIFY modeChanged)

			Q_ENUMS(DrawingMode)

	public:
		enum DrawingMode {
			Native,
			Buffer
		};

		explicit OSGViewport(QQuickItem *parent = 0);

		void setDarawingMode(DrawingMode mode);

		osgQtQuick::OSGNode* sceneData();
		void setSceneData(osgQtQuick::OSGNode *node);

		QColor color() const;
		void setColor(const QColor &color);

		DrawingMode mode() const;
		void setMode(DrawingMode mode);

        void hackview(osg::View*);
signals:
		void sceneDataChanged(osgQtQuick::OSGNode *node);
		void colorChanged(const QColor &color);
		void modeChanged(DrawingMode mode);

		public slots:

	protected:
		void geometryChanged(const QRectF &newGeometry, const QRectF &oldGeometry);
		void mousePressEvent(QMouseEvent *event);
	void  mouseDoubleClickEvent(QMouseEvent *event);
		void mouseMoveEvent(QMouseEvent *event);
		void mouseReleaseEvent(QMouseEvent *event);
		void wheelEvent(QWheelEvent *event);

		void keyPressEvent(QKeyEvent * event);
		void keyReleaseEvent(QKeyEvent * event);


		virtual void resizeEvent(QResizeEvent *event);
		QSGNode* updatePaintNode(QSGNode *oldNode,
			UpdatePaintNodeData *updatePaintNodeData);

	private:
		struct Hidden;
		friend struct Hidden;
		Hidden *h;
	};

} // namespace osgQtQuick

#endif // _H_OSGQTQUICK_OSGVIEPORT_H_
