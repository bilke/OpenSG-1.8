/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class Terrain
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTERRAINBASE_H_
#define _OSGTERRAINBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGContribDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGGeometry.h> // Parent

#include <OSGImageFields.h> // HeightData type
#include <OSGReal32Fields.h> // HeightScale type
#include <OSGReal32Fields.h> // HeightError type
#include <OSGReal32Fields.h> // HeightQuad type
#include <OSGUInt32Fields.h> // Width type
#include <OSGUInt32Fields.h> // Level type
#include <OSGReal32Fields.h> // Detail type
#include <OSGInt32Fields.h> // BorderDetail type
#include <OSGReal32Fields.h> // VertexSpacing type
#include <OSGGeoPositionsFields.h> // HeightVertices type
#include <OSGBoolFields.h> // GeoMorphing type
#include <OSGPnt3fFields.h> // BoundMin type
#include <OSGPnt3fFields.h> // BoundMax type
#include <OSGPnt3fFields.h> // EyePoint type
#include <OSGReal32Fields.h> // EyeHeight type
#include <OSGBoolFields.h> // EyePointValid type
#include <OSGReal32Fields.h> // OriginX type
#include <OSGReal32Fields.h> // OriginY type
#include <OSGReal32Fields.h> // OriginTexX type
#include <OSGReal32Fields.h> // OriginTexY type
#include <OSGReal32Fields.h> // TexSpacing type
#include <OSGReal32Fields.h> // TexYSpacing type
#include <OSGBoolFields.h> // UpdateTerrain type
#include <OSGBoolFields.h> // PerPixelLighting type

#include <OSGTerrainFields.h>

OSG_BEGIN_NAMESPACE

class Terrain;
class BinaryDataHandler;

//! \brief Terrain Base Class.

class OSG_CONTRIBLIB_DLLMAPPING TerrainBase : public Geometry
{
  private:

    typedef Geometry    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TerrainPtr  Ptr;

    enum
    {
        HeightDataFieldId       = Inherited::NextFieldId,
        HeightScaleFieldId      = HeightDataFieldId       + 1,
        HeightErrorFieldId      = HeightScaleFieldId      + 1,
        HeightQuadFieldId       = HeightErrorFieldId      + 1,
        WidthFieldId            = HeightQuadFieldId       + 1,
        LevelFieldId            = WidthFieldId            + 1,
        DetailFieldId           = LevelFieldId            + 1,
        BorderDetailFieldId     = DetailFieldId           + 1,
        VertexSpacingFieldId    = BorderDetailFieldId     + 1,
        HeightVerticesFieldId   = VertexSpacingFieldId    + 1,
        GeoMorphingFieldId      = HeightVerticesFieldId   + 1,
        BoundMinFieldId         = GeoMorphingFieldId      + 1,
        BoundMaxFieldId         = BoundMinFieldId         + 1,
        EyePointFieldId         = BoundMaxFieldId         + 1,
        EyeHeightFieldId        = EyePointFieldId         + 1,
        EyePointValidFieldId    = EyeHeightFieldId        + 1,
        OriginXFieldId          = EyePointValidFieldId    + 1,
        OriginYFieldId          = OriginXFieldId          + 1,
        OriginTexXFieldId       = OriginYFieldId          + 1,
        OriginTexYFieldId       = OriginTexXFieldId       + 1,
        TexSpacingFieldId       = OriginTexYFieldId       + 1,
        TexYSpacingFieldId      = TexSpacingFieldId       + 1,
        UpdateTerrainFieldId    = TexYSpacingFieldId      + 1,
        PerPixelLightingFieldId = UpdateTerrainFieldId    + 1,
        NextFieldId             = PerPixelLightingFieldId + 1
    };

    static const OSG::BitVector HeightDataFieldMask;
    static const OSG::BitVector HeightScaleFieldMask;
    static const OSG::BitVector HeightErrorFieldMask;
    static const OSG::BitVector HeightQuadFieldMask;
    static const OSG::BitVector WidthFieldMask;
    static const OSG::BitVector LevelFieldMask;
    static const OSG::BitVector DetailFieldMask;
    static const OSG::BitVector BorderDetailFieldMask;
    static const OSG::BitVector VertexSpacingFieldMask;
    static const OSG::BitVector HeightVerticesFieldMask;
    static const OSG::BitVector GeoMorphingFieldMask;
    static const OSG::BitVector BoundMinFieldMask;
    static const OSG::BitVector BoundMaxFieldMask;
    static const OSG::BitVector EyePointFieldMask;
    static const OSG::BitVector EyeHeightFieldMask;
    static const OSG::BitVector EyePointValidFieldMask;
    static const OSG::BitVector OriginXFieldMask;
    static const OSG::BitVector OriginYFieldMask;
    static const OSG::BitVector OriginTexXFieldMask;
    static const OSG::BitVector OriginTexYFieldMask;
    static const OSG::BitVector TexSpacingFieldMask;
    static const OSG::BitVector TexYSpacingFieldMask;
    static const OSG::BitVector UpdateTerrainFieldMask;
    static const OSG::BitVector PerPixelLightingFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFImagePtr          *editSFHeightData     (void);
     const SFImagePtr          *getSFHeightData     (void) const;
#ifndef OSG_2_PREP
           SFImagePtr          *getSFHeightData     (void);
#endif

           SFReal32            *editSFHeightScale    (void);
     const SFReal32            *getSFHeightScale    (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFHeightScale    (void);
#endif

           MFReal32            *editMFHeightError    (void);
     const MFReal32            *getMFHeightError    (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFHeightError    (void);
#endif

           MFReal32            *editMFHeightQuad     (void);
     const MFReal32            *getMFHeightQuad     (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFHeightQuad     (void);
#endif

           SFReal32            *editSFDetail         (void);
     const SFReal32            *getSFDetail         (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFDetail         (void);
#endif

           SFInt32             *editSFBorderDetail   (void);
     const SFInt32             *getSFBorderDetail   (void) const;
#ifndef OSG_2_PREP
           SFInt32             *getSFBorderDetail   (void);
#endif

           SFReal32            *editSFVertexSpacing  (void);
     const SFReal32            *getSFVertexSpacing  (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFVertexSpacing  (void);
#endif

           SFBool              *editSFGeoMorphing    (void);
     const SFBool              *getSFGeoMorphing    (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFGeoMorphing    (void);
#endif

           SFPnt3f             *editSFEyePoint       (void);
     const SFPnt3f             *getSFEyePoint       (void) const;
#ifndef OSG_2_PREP
           SFPnt3f             *getSFEyePoint       (void);
#endif

           SFBool              *editSFEyePointValid  (void);
     const SFBool              *getSFEyePointValid  (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFEyePointValid  (void);
#endif

           SFReal32            *editSFOriginX        (void);
     const SFReal32            *getSFOriginX        (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFOriginX        (void);
#endif

           SFReal32            *editSFOriginY        (void);
     const SFReal32            *getSFOriginY        (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFOriginY        (void);
#endif

           SFReal32            *editSFOriginTexX     (void);
     const SFReal32            *getSFOriginTexX     (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFOriginTexX     (void);
#endif

           SFReal32            *editSFOriginTexY     (void);
     const SFReal32            *getSFOriginTexY     (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFOriginTexY     (void);
#endif

           SFReal32            *editSFTexSpacing     (void);
     const SFReal32            *getSFTexSpacing     (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFTexSpacing     (void);
#endif

           SFReal32            *editSFTexYSpacing    (void);
     const SFReal32            *getSFTexYSpacing    (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFTexYSpacing    (void);
#endif

           SFBool              *editSFUpdateTerrain  (void);
     const SFBool              *getSFUpdateTerrain  (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFUpdateTerrain  (void);
#endif

           SFBool              *editSFPerPixelLighting(void);
     const SFBool              *getSFPerPixelLighting(void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFPerPixelLighting(void);
#endif


           ImagePtr            &editHeightData     (void);
     const ImagePtr            &getHeightData     (void) const;
#ifndef OSG_2_PREP
           ImagePtr            &getHeightData     (void);
#endif

           Real32              &editHeightScale    (void);
     const Real32              &getHeightScale    (void) const;
#ifndef OSG_2_PREP
           Real32              &getHeightScale    (void);
#endif



           Real32              &editDetail         (void);
     const Real32              &getDetail         (void) const;
#ifndef OSG_2_PREP
           Real32              &getDetail         (void);
#endif

           Int32               &editBorderDetail   (void);
     const Int32               &getBorderDetail   (void) const;
#ifndef OSG_2_PREP
           Int32               &getBorderDetail   (void);
#endif

           Real32              &editVertexSpacing  (void);
     const Real32              &getVertexSpacing  (void) const;
#ifndef OSG_2_PREP
           Real32              &getVertexSpacing  (void);
#endif


           bool                &editGeoMorphing    (void);
     const bool                &getGeoMorphing    (void) const;
#ifndef OSG_2_PREP
           bool                &getGeoMorphing    (void);
#endif



           Pnt3f               &editEyePoint       (void);
     const Pnt3f               &getEyePoint       (void) const;
#ifndef OSG_2_PREP
           Pnt3f               &getEyePoint       (void);
#endif


           bool                &editEyePointValid  (void);
     const bool                &getEyePointValid  (void) const;
#ifndef OSG_2_PREP
           bool                &getEyePointValid  (void);
#endif

           Real32              &editOriginX        (void);
     const Real32              &getOriginX        (void) const;
#ifndef OSG_2_PREP
           Real32              &getOriginX        (void);
#endif

           Real32              &editOriginY        (void);
     const Real32              &getOriginY        (void) const;
#ifndef OSG_2_PREP
           Real32              &getOriginY        (void);
#endif

           Real32              &editOriginTexX     (void);
     const Real32              &getOriginTexX     (void) const;
#ifndef OSG_2_PREP
           Real32              &getOriginTexX     (void);
#endif

           Real32              &editOriginTexY     (void);
     const Real32              &getOriginTexY     (void) const;
#ifndef OSG_2_PREP
           Real32              &getOriginTexY     (void);
#endif

           Real32              &editTexSpacing     (void);
     const Real32              &getTexSpacing     (void) const;
#ifndef OSG_2_PREP
           Real32              &getTexSpacing     (void);
#endif

           Real32              &editTexYSpacing    (void);
     const Real32              &getTexYSpacing    (void) const;
#ifndef OSG_2_PREP
           Real32              &getTexYSpacing    (void);
#endif

           bool                &editUpdateTerrain  (void);
     const bool                &getUpdateTerrain  (void) const;
#ifndef OSG_2_PREP
           bool                &getUpdateTerrain  (void);
#endif

           bool                &editPerPixelLighting(void);
     const bool                &getPerPixelLighting(void) const;
#ifndef OSG_2_PREP
           bool                &getPerPixelLighting(void);
#endif

           Real32              &editHeightError    (const UInt32 index);
     const Real32              &getHeightError    (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getHeightError    (const UInt32 index);
           MFReal32            &getHeightError    (void);
     const MFReal32            &getHeightError    (void) const;
#endif

           Real32              &editHeightQuad     (const UInt32 index);
     const Real32              &getHeightQuad     (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getHeightQuad     (const UInt32 index);
           MFReal32            &getHeightQuad     (void);
     const MFReal32            &getHeightQuad     (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setHeightData     ( const ImagePtr &value );
     void setHeightScale    ( const Real32 &value );
     void setDetail         ( const Real32 &value );
     void setBorderDetail   ( const Int32 &value );
     void setVertexSpacing  ( const Real32 &value );
     void setGeoMorphing    ( const bool &value );
     void setEyePoint       ( const Pnt3f &value );
     void setEyePointValid  ( const bool &value );
     void setOriginX        ( const Real32 &value );
     void setOriginY        ( const Real32 &value );
     void setOriginTexX     ( const Real32 &value );
     void setOriginTexY     ( const Real32 &value );
     void setTexSpacing     ( const Real32 &value );
     void setTexYSpacing    ( const Real32 &value );
     void setUpdateTerrain  ( const bool &value );
     void setPerPixelLighting( const bool &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TerrainPtr      create          (void); 
    static  TerrainPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFImagePtr          _sfHeightData;
    SFReal32            _sfHeightScale;
    MFReal32            _mfHeightError;
    MFReal32            _mfHeightQuad;
    SFUInt32            _sfWidth;
    SFUInt32            _sfLevel;
    SFReal32            _sfDetail;
    SFInt32             _sfBorderDetail;
    SFReal32            _sfVertexSpacing;
    SFGeoPositionsPtr   _sfHeightVertices;
    SFBool              _sfGeoMorphing;
    SFPnt3f             _sfBoundMin;
    SFPnt3f             _sfBoundMax;
    SFPnt3f             _sfEyePoint;
    SFReal32            _sfEyeHeight;
    SFBool              _sfEyePointValid;
    SFReal32            _sfOriginX;
    SFReal32            _sfOriginY;
    SFReal32            _sfOriginTexX;
    SFReal32            _sfOriginTexY;
    SFReal32            _sfTexSpacing;
    SFReal32            _sfTexYSpacing;
    SFBool              _sfUpdateTerrain;
    SFBool              _sfPerPixelLighting;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TerrainBase(void);
    TerrainBase(const TerrainBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TerrainBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFUInt32            *editSFWidth          (void);
     const SFUInt32            *getSFWidth          (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFWidth          (void);
#endif
           SFUInt32            *editSFLevel          (void);
     const SFUInt32            *getSFLevel          (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFLevel          (void);
#endif
           SFGeoPositionsPtr   *editSFHeightVertices (void);
     const SFGeoPositionsPtr   *getSFHeightVertices (void) const;
#ifndef OSG_2_PREP
           SFGeoPositionsPtr   *getSFHeightVertices (void);
#endif
           SFPnt3f             *editSFBoundMin       (void);
     const SFPnt3f             *getSFBoundMin       (void) const;
#ifndef OSG_2_PREP
           SFPnt3f             *getSFBoundMin       (void);
#endif
           SFPnt3f             *editSFBoundMax       (void);
     const SFPnt3f             *getSFBoundMax       (void) const;
#ifndef OSG_2_PREP
           SFPnt3f             *getSFBoundMax       (void);
#endif
           SFReal32            *editSFEyeHeight      (void);
     const SFReal32            *getSFEyeHeight      (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFEyeHeight      (void);
#endif

           UInt32              &editWidth          (void);
     const UInt32              &getWidth          (void) const;
#ifndef OSG_2_PREP
           UInt32              &getWidth          (void);
#endif
           UInt32              &editLevel          (void);
     const UInt32              &getLevel          (void) const;
#ifndef OSG_2_PREP
           UInt32              &getLevel          (void);
#endif
           GeoPositionsPtr     &editHeightVertices (void);
     const GeoPositionsPtr     &getHeightVertices (void) const;
#ifndef OSG_2_PREP
           GeoPositionsPtr     &getHeightVertices (void);
#endif
           Pnt3f               &editBoundMin       (void);
     const Pnt3f               &getBoundMin       (void) const;
#ifndef OSG_2_PREP
           Pnt3f               &getBoundMin       (void);
#endif
           Pnt3f               &editBoundMax       (void);
     const Pnt3f               &getBoundMax       (void) const;
#ifndef OSG_2_PREP
           Pnt3f               &getBoundMax       (void);
#endif
           Real32              &editEyeHeight      (void);
     const Real32              &getEyeHeight      (void) const;
#ifndef OSG_2_PREP
           Real32              &getEyeHeight      (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setWidth          (const UInt32 &value);
     void setLevel          (const UInt32 &value);
     void setHeightVertices (const GeoPositionsPtr &value);
     void setBoundMin       (const Pnt3f &value);
     void setBoundMax       (const Pnt3f &value);
     void setEyeHeight      (const Real32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TerrainBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TerrainBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TerrainBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TerrainBase *TerrainBaseP;

typedef osgIF<TerrainBase::isNodeCore,
              CoredNodePtr<Terrain>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TerrainNodePtr;

typedef RefPtr<TerrainPtr> TerrainRefPtr;

OSG_END_NAMESPACE

#define OSGTERRAINBASE_HEADER_CVSID "@(#)$Id: OSGTerrainBase.h,v 1.10 2008/06/09 12:28:04 vossg Exp $"

#endif /* _OSGTERRAINBASE_H_ */