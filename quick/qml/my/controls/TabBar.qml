import QtQuick 2.14
import QtQuick.Controls 2.14 as QtControls

import my.style 1.0

QtControls.TabBar {
    id: root

    property var itemPalette: AppStyle.tabBarPalette
    property var itemMetric: AppStyle.tabBarMetric

    QtObject {
        id: _private

        readonly property int borderRadius: root.itemMetric.borderRadius
        readonly property int bottomRadiusCenterY: root.contentHeight - _private.borderRadius
        readonly property int topRadiusCenterY: root.itemMetric.borderTopMargin + _private.borderRadius
    }

    contentHeight: root.itemMetric.contentHeight
    spacing: 0

    background: Rectangle {
        color: root.itemPalette.bgColor

        Canvas {
            id: bgCanvas
            anchors.fill: parent

            // draws a border before the current tab
            function drawBorderBeforeCurrentTab(ctx) {
                var distanceToCurrentTab = 0
                for (var i = 0; i < root.currentIndex; ++i) {
                    distanceToCurrentTab += root.itemAt(i).width
                }

                ctx.lineTo(distanceToCurrentTab - _private.borderRadius, root.contentHeight);
                ctx.arc(distanceToCurrentTab - _private.borderRadius, _private.bottomRadiusCenterY,
                        _private.borderRadius, Math.PI * 0.5, 0, true);
                ctx.lineTo(distanceToCurrentTab, _private.topRadiusCenterY);
                ctx.arc(distanceToCurrentTab + _private.borderRadius, _private.topRadiusCenterY,
                        _private.borderRadius, -Math.PI, -Math.PI * 0.5, false);
            }

            // draws a border around the current tab
            function drawBorderForCurrentTab(ctx) {
                var currentTabRightPosition = 0
                for (var i = 0; i <= root.currentIndex; ++i) {
                    currentTabRightPosition += root.itemAt(i).width
                }
                ctx.lineTo(currentTabRightPosition - _private.borderRadius, root.itemMetric.borderTopMargin);
                ctx.arc(currentTabRightPosition - _private.borderRadius, _private.topRadiusCenterY,
                        _private.borderRadius, -Math.PI * 0.5, 0, false);
                ctx.lineTo(currentTabRightPosition, _private.bottomRadiusCenterY);
                ctx.arc(currentTabRightPosition + _private.borderRadius, _private.bottomRadiusCenterY,
                        _private.borderRadius, -Math.PI, Math.PI * 0.5, true);
            }

            onPaint: {
                var ctx = getContext("2d")
                ctx.reset()
                ctx.strokeStyle = root.itemPalette.borderColor
                ctx.fillStyle = root.itemPalette.currentTabBgColor
                ctx.lineWidth = root.itemMetric.borderWidth

                ctx.beginPath()
                ctx.moveTo(0, root.contentHeight)
                if (root.currentIndex === 0) {
                    // needs to have a closed path to fill a current tab
                    ctx.lineTo(0, root.itemMetric.borderTopMargin)
                } else {
                    drawBorderBeforeCurrentTab(ctx)
                }
                drawBorderForCurrentTab(ctx)
                ctx.lineTo(root.width, root.height)
                ctx.stroke()
                ctx.fill()
            }
        }
    }

    onCurrentIndexChanged: {
        bgCanvas.requestPaint();
    }
}
