/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#include "OSGQPnt2usEditor_qt.h"

#include <OSGVecFieldDataType.h>
#include <OSGQOSGWidgetFactoryHelper.h>

OSG_USING_NAMESPACE

ValueEditorRegistrator _regPnt2us( FieldDataTraits<Pnt2us>::getType(),
                                 &QPnt2usEditor          ::create    );

QAbstractValueEditor *
QPnt2usEditor::create(QWidget *pParent, const char *name)
{
    return new QPnt2usEditor(pParent, name);
}

QPnt2usEditor::QPnt2usEditor(QWidget *pParent, const char *name)
    : Inherited  (pParent, name),
      _editHelper(this         )
{
    initSelf();
}

QPnt2usEditor::~QPnt2usEditor(void)
{
}

void
QPnt2usEditor::setLabelsVisible(bool bLabels)
{
    Inherited::setLabelsVisible(bLabels);
    
    _editHelper.setLabelsVisible(bLabels);
}

void
QPnt2usEditor::setReadOnly(bool bReadOnly)
{
    Inherited::setReadOnly(bReadOnly);
    
    _editHelper.setReadOnly(bReadOnly);
}

void
QPnt2usEditor::readField(FieldContainerPtr pFC,          UInt32 uiFieldId,
                        UInt32            uiValueIndex, UInt32 uiAspect  )
{
    _editHelper.readField(pFC, uiFieldId, uiValueIndex, uiAspect);
}

void
QPnt2usEditor::readField(FieldContainerPtr pFC,          UInt32 uiFieldId,
                         UInt32            uiValueIndex                   )
{
    _editHelper.readField(pFC, uiFieldId, uiValueIndex,
                          Thread::getCurrent()->getAspect());
}

void
QPnt2usEditor::writeField(FieldContainerPtr pFC,          UInt32 uiFieldId,
                          UInt32            uiValueIndex                   )
{
    _editHelper.writeField(pFC, uiFieldId, uiValueIndex);
}

void
QPnt2usEditor::addFieldElem(FieldContainerPtr pFC,          UInt32 uiFieldId,
                            UInt32            uiValueIndex                   )
{
    _editHelper.addFieldElem(pFC, uiFieldId, uiValueIndex);
}

void
QPnt2usEditor::removeFieldElem(FieldContainerPtr pFC,          UInt32 uiFieldId,
                               UInt32            uiValueIndex                   )
{
    _editHelper.removeFieldElem(pFC, uiFieldId, uiValueIndex);
}

void
QPnt2usEditor::slotSpinBoxChanged(void)
{
    emit valueChanged(this);
}

void
QPnt2usEditor::initSelf(void)
{
    connect(_editHelper.getSpinBox(0), SIGNAL(valueChanged      (void)),
            this,                      SLOT  (slotSpinBoxChanged(void)) );
    connect(_editHelper.getSpinBox(1), SIGNAL(valueChanged      (void)),
            this,                      SLOT  (slotSpinBoxChanged(void)) );
}

// include generated files
#include "OSGQPnt2usEditor_qt_moc.cpp"

/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning(disable : 177)
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGQPnt2usEditor_qt.cpp,v 1.5 2004/12/20 11:09:53 neumannc Exp $";
    static Char8 cvsid_hpp       [] = OSGQPNT2USEDITORQT_HEADER_CVSID;
//    static Char8 cvsid_inl       [] = OSGQPNT2USEDITORQT_INLINE_CVSID;
}

#ifdef OSG_LINUX_ICC
#pragma warning(enable : 177)
#endif

#ifdef OSG_SGI_CC
#pragma reset woff 1174
#endif
