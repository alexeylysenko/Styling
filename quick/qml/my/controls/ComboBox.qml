import QtQuick 2.14
import QtQuick.Controls 2.14 as QtControls

import my.style 1.0

QtControls.ComboBox {
    id: root

    property var itemPalette: AppStyle.comboBoxPalette
    property var itemMetric: AppStyle.comboBoxMetric

    readonly property var textMetrics: TextMetrics {
        font: root.font
        text: root.displayText
    }

    property Component popupContent: ListView {
        id: contentListView
        clip: true
        implicitHeight: contentHeight
        model: root.popup.visible ? root.delegateModel : null
        currentIndex: root.highlightedIndex

        QtControls.ScrollBar.vertical: QtControls.ScrollBar {
            parent: contentListView.parent
            anchors.top: contentListView.top
            anchors.right: contentListView.right
            anchors.bottom: contentListView.bottom
            policy: QtControls.ScrollBar.AlwaysOn
            visible: contentListView.contentHeight > contentListView.height
        }
    }

    width: root.textMetrics.boundingRect.width + root.itemMetric.indicatorWidth + 2 * root.itemMetric.margin
    height: root.itemMetric.height
    font: AppStyle.fonts.copyButton

    contentItem: Text {
        leftPadding: root.itemMetric.contentLeftPadding
        rightPadding: root.indicator.width + root.spacing
        width: root.width
        height: root.height
        text: root.displayText
        font: root.font
        color: root.itemPalette.textColor
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }

    indicator: Canvas {
        id: canvas
        x: root.width - canvas.width - root.rightPadding
        y: root.topPadding + (root.availableHeight - canvas.height) / 2
        width: root.itemMetric.indicatorWidth
        height: root.itemMetric.indicatorHeight
        contextType: "2d"

        Connections {
            target: root
            function onPressedChanged() { canvas.requestPaint() }
        }

        onPaint: {
            context.reset()
            context.lineWidth = root.itemMetric.indicatorLineWidth
            context.strokeStyle = root.itemPalette.indicatorColor
            context.moveTo(0, 0)
            context.lineTo(width / 2, height)
            context.lineTo(width, 0)
            context.stroke()
        }
    }

    background: null

    popup: QtControls.Popup {
        y: root.height
        width: root.width
        implicitHeight: contentItem.implicitHeight
        padding: 0

        contentItem: Loader {
            sourceComponent: root.popupContent
        }

        background: Rectangle {
            radius: root.itemMetric.popupRadius
        }
    }
}
