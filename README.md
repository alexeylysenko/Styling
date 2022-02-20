# Styling approach 

There exists a small amount of controls used in our applications. Most of them within our applications are the same except colors and sizes. We can avoid inventing a “new” control for each and every case. However, we need to propose a clever and simple mechanism of component re-usage. 

## The possible approaches of the component implementation.

| Approach    | Pros | Cons |
| ----------- | ---- | ---- |
| Each project has own controls	| <ul><li>implement only those controls that used in certain product</li><li>hardcoded values can be used to speed up a development</li></ul> | <ul><li>lack of flexibility (there is no simple way to change a visual appearance)</li><li>no options to reuse existing components and new ones in the future projects</li><li>lnecessity to implement the same controls in different applications</li><li>additional efforts to keep the same visual style with other products</li></ul> |
| Projects can share style components but only between projects with the same UI paradigm (only QtWidgets or only QtQuick) | <ul><li>possibility to reuse components from other projects with the same UI approach</li><li>changing parameters is fast and simple</li><li>ability to keep the same visual style in scope of projects with the same UI paradigm</li></ul> | <ul><li>no options to reuse existing components from projects used a different UI paradigm</li><li>hard to keep the equal visual style within all projects</li><li>ainability to easily change UI paradigm between QtWidgets and QtQuick</li><li>styling approach has several different forks for each paradigm</li></ul> |
| Projects can share style components regardless UI paradigm | <ul><li>possibility to reuse any existing component</li><li>changing parameters is fast and simple</li><li>no major issues to keep the same visual style within all projects</li><li>ability to change between different visual paradigms</li><li>a single styling codebase</li><li>more reliable components since they used in many projects</li></ul> | <ul><li>needs more efforts to be implemented and all cases covered</li><li>implementation can be a bit confusing to support QtWidgets and QtQuick together</li></ul> |

I would like to present here my idea how to deal with the third approach.

The idea is to introduce a styling approach for every UI component that consists of 2 essential blocks: palette and metric. Palette is dedicated for color scheme configuration, metric – for sizes. We can define several basic components (like button, combobox, progressbar, toggle, etc) with a list of parameters that can be changed to comply the product visual style. Afterwards, each product is able to configure their own style that allows to reuse base components without touching their code. In the end, we would have a library of components independent from style and a list of libraries with defined styles. This would allow us to have more reliable controls (they would be tested on all of the projects) and a simple way to reuse existing controls within the future projects (style definition is only required).

## The way of implementation:
1)	MyUiStyle – all projects' styles have to be derived from this style – contains palette and metric of all components available within style as Q_PROPERTY (can be used in both  QtWidgets and QtQuick).
2)	MyFonts – contains a list of all available fonts as Q_PROPERTY.
3)	MyColors – contains a list of all available colors as Q_PROPERTY.
4)	List of a base controls with their palette and metric. All parameters are Q_PROPERTY.
5)	Set of macros to simplify creation of a new style.

## To create a new style the following steps have to be done:
1)	Create a new style derived from MyUiStyle.
2)	List all components to be used within the style.
3)	Reimplement base control palette and/or metric with values to comply new style requirements.
4)	Set your style to be used in application.

## To create a new control the following steps have to passed:
1)	Create base palette and metric classes and define the list of parameters
2)	Use defined parameters for control implementation from palette (colours) and metric (sizes) instead of hardcoded values. Keep in mind the ability of customizing control by style.
3)	Implement the style for the control using MyFonts and MyColors.

## Demo application

There is only single place in code where application style should be defined.

```c++
m_appStyle = new style::StyleA(); 
```
or
```c++
m_appStyle = new style::StyleB();
```

