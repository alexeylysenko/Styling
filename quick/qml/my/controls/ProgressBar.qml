import QtQuick 2.14
import QtQuick.Controls 2.14 as QtControls

import my.style 1.0

QtControls.ProgressBar {
     id: root

     property var itemPalette: AppStyle.progressBarPalette
     property var itemMetric: AppStyle.progressBarMetric

     property alias indicatorColor: indicatorRectangle.color

     function normal() {
         indicatorRectangle.color = root.itemPalette.indicatorColor
     }

     function done() {
         root.value = 1.0
         indicatorRectangle.color = root.itemPalette.doneIndicatorColor
     }

     function error() {
         indicatorRectangle.color = root.itemPalette.errorIndicatorColor
     }

     height: root.itemMetric.height
     background: Rectangle {
         color: root.itemPalette.bgColor
         radius: root.itemMetric.radius
     }

     contentItem: Item {
         anchors.fill: parent
         anchors.margins: root.itemMetric.border

         Rectangle {
             id: indicatorRectangle
             anchors.verticalCenter: parent.verticalCenter
             width: root.visualPosition * (root.width - 2 * root.itemMetric.border)
             height: root.itemMetric.indicatorHeight
             radius: root.itemMetric.radius
             color: root.itemPalette.indicatorColor
         }
     }
 }
