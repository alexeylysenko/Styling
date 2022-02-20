import QtQuick 2.14

TabBar {
    id: root

    property Component extraComponent: null

    function setExtraComponent(component) {
        if (_private.extraObject !== null) {
            _private.extraObject.destroy()
        }

        root.extraComponent = component
        _private.incubateExtraComponent()
    }

    function showExtraObject() {
        if (_private.extraObject === null) {
            return
        }

        _private.extraObject.visible = true
    }

    function hideExtraObject() {
        if (_private.extraObject === null) {
            return
        }

        _private.extraObject.visible = false
    }

    QtObject {
        id: _private

        property Item extraObject: null

        function incubateExtraComponent() {
            if (root.extraComponent === null) {
                return
            }

            // parent takes ownership
            var incubator = root.extraComponent.incubateObject(root.contentItem)
            if (incubator.status === Component.Error) {
                console.error("Couldn't incubate extra component")
                return
            }

            if (incubator.status === Component.Ready) {
                _private.extraObject = incubator.object
            } else {
                incubator.onStatusChanged = function(status) {
                    if (status === Component.Error) {
                        console.error("Couldn't incubate extra component")
                    } else if (status === Component.Ready) {
                        _private.extraObject = incubator.object
                    }
                }
            }
        }
    }

    Component.onCompleted: {
        _private.incubateExtraComponent()
    }
}
