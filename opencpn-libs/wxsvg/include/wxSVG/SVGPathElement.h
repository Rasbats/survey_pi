//////////////////////////////////////////////////////////////////////////////
// Name:        SVGPathElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_PATH_ELEMENT_H
#define WX_SVG_PATH_ELEMENT_H

class wxSVGCanvasItem;

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "SVGAnimatedPathData.h"
#include "SVGAnimatedNumber.h"
#include "SVGPoint.h"
#include "SVGPathSegClosePath.h"
#include "SVGPathSegMovetoAbs.h"
#include "SVGPathSegMovetoRel.h"
#include "SVGPathSegLinetoAbs.h"
#include "SVGPathSegLinetoRel.h"
#include "SVGPathSegCurvetoCubicAbs.h"
#include "SVGPathSegCurvetoCubicRel.h"
#include "SVGPathSegCurvetoQuadraticAbs.h"
#include "SVGPathSegCurvetoQuadraticRel.h"
#include "SVGPathSegArcAbs.h"
#include "SVGPathSegArcRel.h"
#include "SVGPathSegLinetoHorizontalAbs.h"
#include "SVGPathSegLinetoHorizontalRel.h"
#include "SVGPathSegLinetoVerticalAbs.h"
#include "SVGPathSegLinetoVerticalRel.h"
#include "SVGPathSegCurvetoCubicSmoothAbs.h"
#include "SVGPathSegCurvetoCubicSmoothRel.h"
#include "SVGPathSegCurvetoQuadraticSmoothAbs.h"
#include "SVGPathSegCurvetoQuadraticSmoothRel.h"
#include "String_wxsvg.h"
#include "Element.h"
#include "SVGAnimatedType.h"

class wxSVGPathElement : public wxSVGElement,
                         public wxSVGTests,
                         public wxSVGLangSpace,
                         public wxSVGExternalResourcesRequired,
                         public wxSVGStylable,
                         public wxSVGTransformable,
                         public wxEventTarget,
                         public wxSVGAnimatedPathData {
protected:
  wxSVGAnimatedNumber m_pathLength;
  wxSVGCanvasItem* m_canvasItem;

public:
  inline const wxSVGAnimatedNumber& GetPathLength() const {
    return m_pathLength;
  }
  inline void SetPathLength(const wxSVGAnimatedNumber& n) { m_pathLength = n; }
  inline void SetPathLength(float n) { m_pathLength.SetBaseVal(n); }

public:
  inline wxSVGCanvasItem* GetCanvasItem() { return m_canvasItem; }
  void SetCanvasItem(wxSVGCanvasItem* canvasItem);

public:
  wxSVGPathElement(wxString tagName = wxT("path"))
      : wxSVGElement(tagName), m_canvasItem(NULL) {}
  wxSVGPathElement(wxSVGPathElement& src);
  virtual ~wxSVGPathElement();
  wxSvgXmlNode* CloneNode(bool deep = true) {
    return new wxSVGPathElement(*this);
  }
  wxSVGRect GetBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER);
  wxSVGRect GetResultBBox(
      wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER);
  wxSVGMatrix GetCTM() { return wxSVGLocatable::GetCTM(this); }
  wxSVGMatrix GetScreenCTM() { return wxSVGLocatable::GetScreenCTM(this); }
  virtual double GetTotalLength();
  virtual wxSVGPoint GetPointAtLength(double distance);
  virtual unsigned long GetPathSegAtLength(double distance);
  virtual wxSVGPathSegClosePath CreateSVGPathSegClosePath() const;
  virtual wxSVGPathSegMovetoAbs CreateSVGPathSegMovetoAbs(double x,
                                                          double y) const;
  virtual wxSVGPathSegMovetoRel CreateSVGPathSegMovetoRel(double x,
                                                          double y) const;
  virtual wxSVGPathSegLinetoAbs CreateSVGPathSegLinetoAbs(double x,
                                                          double y) const;
  virtual wxSVGPathSegLinetoRel CreateSVGPathSegLinetoRel(double x,
                                                          double y) const;
  virtual wxSVGPathSegCurvetoCubicAbs CreateSVGPathSegCurvetoCubicAbs(
      double x, double y, double x1, double y1, double x2, double y2) const;
  virtual wxSVGPathSegCurvetoCubicRel CreateSVGPathSegCurvetoCubicRel(
      double x, double y, double x1, double y1, double x2, double y2) const;
  virtual wxSVGPathSegCurvetoQuadraticAbs CreateSVGPathSegCurvetoQuadraticAbs(
      double x, double y, double x1, double y1) const;
  virtual wxSVGPathSegCurvetoQuadraticRel CreateSVGPathSegCurvetoQuadraticRel(
      double x, double y, double x1, double y1) const;
  virtual wxSVGPathSegArcAbs CreateSVGPathSegArcAbs(double x, double y,
                                                    double r1, double r2,
                                                    double angle,
                                                    bool largeArcFlag,
                                                    bool sweepFlag) const;
  virtual wxSVGPathSegArcRel CreateSVGPathSegArcRel(double x, double y,
                                                    double r1, double r2,
                                                    double angle,
                                                    bool largeArcFlag,
                                                    bool sweepFlag) const;
  virtual wxSVGPathSegLinetoHorizontalAbs CreateSVGPathSegLinetoHorizontalAbs(
      double x) const;
  virtual wxSVGPathSegLinetoHorizontalRel CreateSVGPathSegLinetoHorizontalRel(
      double x) const;
  virtual wxSVGPathSegLinetoVerticalAbs CreateSVGPathSegLinetoVerticalAbs(
      double y) const;
  virtual wxSVGPathSegLinetoVerticalRel CreateSVGPathSegLinetoVerticalRel(
      double y) const;
  virtual wxSVGPathSegCurvetoCubicSmoothAbs
  CreateSVGPathSegCurvetoCubicSmoothAbs(double x, double y, double x2,
                                        double y2) const;
  virtual wxSVGPathSegCurvetoCubicSmoothRel
  CreateSVGPathSegCurvetoCubicSmoothRel(double x, double y, double x2,
                                        double y2) const;
  virtual wxSVGPathSegCurvetoQuadraticSmoothAbs
  CreateSVGPathSegCurvetoQuadraticSmoothAbs(double x, double y) const;
  virtual wxSVGPathSegCurvetoQuadraticSmoothRel
  CreateSVGPathSegCurvetoQuadraticSmoothRel(double x, double y) const;
  bool HasAttribute(const wxString& name) const;
  wxString GetAttribute(const wxString& name) const;
  bool SetAttribute(const wxString& name, const wxString& value);
  wxSvgXmlAttrHash GetAttributes() const;
  bool SetAnimatedValue(const wxString& name, const wxSVGAnimatedType& value);
  virtual wxSVGDTD GetDtd() const { return wxSVG_PATH_ELEMENT; }
};

#endif  // WX_SVG_PATH_ELEMENT_H