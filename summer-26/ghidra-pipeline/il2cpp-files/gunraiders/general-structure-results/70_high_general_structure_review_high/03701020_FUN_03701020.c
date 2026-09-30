/*
FUNCTION_NAME: FUN_03701020
ENTRY_POINT: 03701020
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


long * FUN_03701020(long param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  long *unaff_x21;
  long unaff_x22;
  long lVar26;
  undefined8 *unaff_x26;
  uint uVar27;
  long unaff_x29;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  if (param_1 == 0) {
LAB_03701054:
    if (*(int *)(unaff_x22 + 0x5c) != 2) goto LAB_037010a8;
    uVar9 = FUN_03669568();
    if (param_2 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    (**(code **)(*param_2 + 0x518))
              (param_2,*(undefined8 *)
                        Method_System_Linq_Enumerable_Select<MqttUnsubscribeReasonCode,_string>__,
               *unaff_x26,uVar9,*(undefined8 *)(*param_2 + 0x520));
    uVar9 = FUN_0367145c();
  }
  else {
    if (*(long *)(unaff_x22 + 0x30) != 0) {
      uVar9 = FUN_03669568();
      if (*(long *)(unaff_x22 + 0x30) == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
      uVar10 = FUN_031529f8(uVar9,*(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x50),0);
      if ((uVar10 & 1) != 0) goto LAB_03701054;
    }
LAB_037010a8:
    uVar9 = FUN_0367145c();
    if (param_2 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
  }
  (**(code **)(*param_2 + 0x4d8))
            (param_2,*(undefined8 *)PTR_DAT_04231c30,uVar9,*(undefined8 *)(*param_2 + 0x4e0));
  lVar11 = FUN_03669568();
  if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
  if (*(int *)(lVar11 + 0x10) == 0) {
    uVar9 = FUN_03669568();
    uVar10 = FUN_031532a8(uVar9,0);
    lVar11 = unaff_x29;
    while ((uVar10 & 1) != 0) {
      lVar24 = *(long *)(lVar11 + 0x188);
      if (lVar24 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
      uVar10 = *(ulong *)(lVar24 + 0x18);
      if (uVar10 == 0) {
        if (*(long *)(unaff_x22 + 0x30) == 0) {
          uVar9 = *(undefined8 *)PTR_DAT_04230f30;
        }
        else {
          uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x50);
        }
        break;
      }
      if ((int)uVar10 < 1) break;
      lVar26 = 0;
      while( true ) {
        if ((uint)uVar10 <= (uint)lVar26) goto LAB_03703694;
        plVar12 = *(long **)(lVar24 + 0x20 + lVar26 * 8);
        if (plVar12 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
        lVar13 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        if (lVar13 != lVar11) break;
        uVar10 = (ulong)*(uint *)(lVar24 + 0x18);
        lVar26 = lVar26 + 1;
        if ((int)*(uint *)(lVar24 + 0x18) <= (int)lVar26) goto LAB_037011c0;
      }
      if (*(uint *)(lVar24 + 0x18) <= (uint)lVar26) {
LAB_03703694:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar12 = *(long **)(lVar24 + 0x20 + lVar26 * 8);
      if ((plVar12 == (long *)0x0) ||
         (lVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0)),
         lVar11 == 0)) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
      uVar9 = FUN_03669568(lVar11,0);
      uVar10 = FUN_031532a8(uVar9,0);
    }
LAB_037011c0:
    uVar14 = FUN_03669568();
    uVar10 = FUN_031529f8(uVar14,uVar9,0);
    if ((uVar10 & 1) == 0) goto LAB_03701210;
    (**(code **)(*param_2 + 0x4d8))
              (param_2,*(undefined8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__,
               *(undefined8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__,
               *(undefined8 *)(*param_2 + 0x4e0));
    bVar2 = true;
  }
  else {
LAB_03701210:
    bVar2 = false;
  }
  puVar3 = Method_VoxelBusters_EssentialKit_EssentialKitSettings_<InitialiseFeatures>b__76_0__;
  if (*(char *)(unaff_x29 + 0xe9) != '\0') {
    uStack000000000000003c = *(undefined1 *)(unaff_x29 + 0xe8);
    if (*(int *)(*(long *)PTR_DAT_0422fa08 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_0324974c((long)&stack0x00000038 + 4,0);
    (**(code **)(*param_2 + 0x518))
              (param_2,*(undefined8 *)puVar3,*unaff_x26,uVar9,*(undefined8 *)(*param_2 + 0x520));
  }
  puVar3 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
  if (*(char *)(unaff_x29 + 0xc0) != '\0') {
    plVar12 = *(long **)(unaff_x29 + 0xb8);
    if (plVar12 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    (**(code **)(*param_2 + 0x518))
              (param_2,*(undefined8 *)puVar3,*unaff_x26,uVar9,*(undefined8 *)(*param_2 + 0x520));
  }
  System_Xml_Schema_XmlSchemaInfo__Clear();
  plVar12 = *(long **)(unaff_x29 + 0x40);
  if (plVar12 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
  iVar4 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
  if (iVar4 - 1U < 2) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      plVar15 = (long *)FUN_036a4938(plVar12,iVar8,0);
      if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
      iVar5 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
      if (iVar5 == 4) {
        plVar16 = (long *)FUN_0366f3a0();
        if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
        iVar5 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
        if (0 < iVar5) {
          iVar5 = 0;
          do {
                    /* try { // try from 0370135c to 0380146b has its CatchHandler @ 0370135c
                       catch() { ... } // from try @ 0370135c with catch @ 0370135c
                       catch() { ... } // from try @ 03701530 with catch @ 0370135c
                       catch() { ... } // from try @ 037015d8 with catch @ 0370135c
                       catch() { ... } // from try @ 037015e0 with catch @ 0370135c
                       catch() { ... } // from try @ 03701680 with catch @ 0370135c */
            plVar17 = (long *)(**(code **)(*plVar16 + 0x208))
                                        (plVar16,iVar5,*(undefined8 *)(*plVar16 + 0x210));
            if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
            uVar10 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
            if ((uVar10 & 1) != 0) {
              lVar11 = (**(code **)(*plVar16 + 0x208))
                                 (plVar16,iVar5,*(undefined8 *)(*plVar16 + 0x210));
              if ((lVar11 == 0) || (lVar11 = FUN_036a65c8(lVar11,0), lVar11 == 0))
              goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              if (*(int *)(lVar11 + 0x18) == 1) {
                lVar11 = (**(code **)(*plVar16 + 0x208))
                                   (plVar16,iVar5,*(undefined8 *)(*plVar16 + 0x210));
                if ((lVar11 == 0) || (lVar11 = FUN_036a65c8(lVar11,0), lVar11 == 0))
                goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03703694;
                if (*(long **)(lVar11 + 0x20) == plVar15) {
                  iVar7 = iVar7 + 1;
                }
              }
            }
            iVar5 = iVar5 + 1;
            iVar6 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
          } while (iVar5 < iVar6);
        }
      }
      iVar5 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
      iVar8 = iVar8 + 1;
      if (iVar5 == 1) {
        iVar7 = iVar7 + 1;
      }
    } while (iVar8 != iVar4);
    if ((iVar7 == 1) && (*(char *)(unaff_x29 + 0x128) != '\0')) {
      if ((*(long *)(unaff_x29 + 0x40) != 0) &&
         (lVar11 = FUN_036a4938(*(long *)(unaff_x29 + 0x40),0,0), lVar11 != 0)) {
        lVar11 = FUN_036f9b08(*(undefined8 *)(lVar11 + 0x38));
                    /* try { // try from 0370146c to 03801493 has its CatchHandler @ 037015f4 */
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) == 0)) {
          lVar11 = *(long *)
                    Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsBeginDragHandler>__
          ;
        }
        if (*(int *)(*(long *)
                      Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_036e12a8(lVar11,0);
                    /* try { // try from 037014c8 to 03801507 has its CatchHandler @ 037015fc */
        (**(code **)(*param_2 + 0x4d8))
                  (param_2,*(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,uVar9,
                   *(undefined8 *)(*param_2 + 0x4e0));
        return param_2;
      }
      goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    }
  }
  plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
                    /* try { // try from 03701510 to 0380152f has its CatchHandler @ 037015f8 */
  lVar11 = FUN_0366bd90();
  if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
  uVar10 = FUN_0389cba0(lVar11,0);
                    /* try { // try from 03701530 to 038015cf has its CatchHandler @ 0370135c */
  if (((uVar10 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    lVar11 = FUN_0366bd90();
    if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    plVar16 = (long *)FUN_03703c88();
    lVar11 = FUN_0366bd90();
    if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    uVar10 = FUN_031532a8(*(undefined8 *)(lVar11 + 0x18),0);
    if ((uVar10 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) || (!bVar2)) {
        FUN_03669568();
      }
      plVar16 = (long *)FUN_03703c88();
    }
    lVar11 = FUN_0366bd90();
    if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    lVar11 = FUN_037055ec(lVar11,plVar16,*(undefined8 *)(lVar11 + 0x10));
    if (lVar11 == 0) {
      if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
      (**(code **)(*plVar16 + 0x2c8))(plVar16,plVar15,*(undefined8 *)(*plVar16 + 0x2d0));
    }
    lVar11 = FUN_0366bd90();
    if ((lVar11 == 0) || (plVar15 == (long *)0x0))
    goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    (**(code **)(*plVar15 + 0x4d8))
              (plVar15,*(undefined8 *)PTR_DAT_04231c30,*(undefined8 *)(lVar11 + 0x10),
               *(undefined8 *)(*plVar15 + 0x4e0));
  }
  else {
    (**(code **)(*param_2 + 0x2c8))(param_2,plVar15,*(undefined8 *)(*param_2 + 0x2d0));
  }
  lVar11 = FUN_0366bd90();
  if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
  uVar10 = FUN_0389cba0(lVar11,0);
  if (((uVar10 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    plVar16 = *(long **)(unaff_x22 + 0x28);
    lVar11 = FUN_0366bd90();
    if ((lVar11 == 0) || (plVar16 == (long *)0x0))
    goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                (plVar16,*(undefined8 *)(lVar11 + 0x18),
                                 *(undefined8 *)(*plVar16 + 0x310));
    lVar11 = FUN_0366bd90();
    if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    if ((plVar16 != (long *)0x0) && (*plVar16 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar16,*(long *)PTR_DAT_0422fc38);
    }
    uVar9 = FUN_03705ee8(plVar16,*(undefined8 *)(lVar11 + 0x10));
    (**(code **)(*param_2 + 0x4d8))
              (param_2,*(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,uVar9,
               *(undefined8 *)(*param_2 + 0x4e0));
  }
  lVar11 = *(long *)(unaff_x29 + 0xf8);
  if (lVar11 != 0) {
    plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
    uVar9 = thunk_FUN_01c5d21c(lVar11,0);
    uVar14 = *(undefined8 *)
              Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerEnterHandler>__;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
    }
    uVar14 = FUN_032e04b8(uVar14,0);
    uVar10 = FUN_032ea0d4(uVar9,uVar14,0);
    if ((uVar10 & 1) == 0) {
      FUN_037043a0();
    }
    else {
      System_Xml_Schema_XmlSchemaInfo__Clear();
    }
    FUN_036f88b8(*(undefined8 *)(lVar11 + 0xa0),plVar16,0);
    if (*(char *)(lVar11 + 0x20) != '\0') {
      (**(code **)(*param_2 + 0x518))
                (param_2,*(undefined8 *)
                          Method_UnityEngine_EventSystems_ExecuteEvents_ValidateEventData<AxisEventData>__
                 ,**(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8),
                 *(undefined8 *)PTR_DAT_042341c8,*(undefined8 *)(*param_2 + 0x520));
    }
    if (*(char *)(lVar11 + 0x95) == '\0') {
      FUN_036fb6d8(*(undefined8 *)(lVar11 + 0x38));
      uVar9 = FUN_03683434(lVar11,0);
      uVar9 = FUN_036831c8(lVar11,uVar9,0);
      puVar23 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
      if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
      (**(code **)(*plVar16 + 0x518))
                (plVar16,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
                 ,*(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,uVar9,
                 *(undefined8 *)(*plVar16 + 0x520));
    }
    else {
      puVar23 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
      if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    }
    (**(code **)(*plVar16 + 0x518))
              (plVar16,*(undefined8 *)
                        Method_System_Data_DataCommonEventSource_EnterScope<int,_int>__,*puVar23,
               *(undefined8 *)(lVar11 + 0x30),*(undefined8 *)(*plVar16 + 0x520));
    uStack0000000000000038 = *(undefined4 *)(lVar11 + 100);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_03295500(0);
    uVar9 = FUN_032cf44c(&stack0x00000038,uVar9,0);
    (**(code **)(*plVar16 + 0x518))
              (plVar16,*(undefined8 *)Method_System_Linq_Enumerable_ToList<Edge>__,*puVar23,uVar9,
               *(undefined8 *)(*plVar16 + 0x520));
    if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    (**(code **)(*plVar15 + 0x2c8))(plVar15,plVar16,*(undefined8 *)(*plVar15 + 0x2d0));
    plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
    (**(code **)(*plVar16 + 0x2c8))(plVar16,plVar15,*(undefined8 *)(*plVar16 + 0x2d0));
    FUN_03703f1c();
  }
  plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
  if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
  uVar9 = (**(code **)(*plVar15 + 0x2c8))(plVar15,plVar16,*(undefined8 *)(*plVar15 + 0x2d0));
  FUN_037058dc(uVar9,unaff_x29);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      plVar17 = (long *)FUN_036a4938(plVar12,iVar8,0);
      if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
      iVar7 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240));
      if ((iVar7 != 3) &&
         ((((iVar7 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240)),
            iVar7 == 2 ||
            (iVar7 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240)),
            iVar7 == 1)) ||
           (iVar7 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240)),
           iVar7 == 4)) && (uVar10 = FUN_03705ea4(), (uVar10 & 1) == 0)))) {
        iVar7 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240));
        uVar9 = System_Xml_Schema_XmlSchemaValidator__Init();
        plVar17 = plVar16;
        if (iVar7 != 1) {
          plVar17 = plVar15;
        }
        if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
        (**(code **)(*plVar17 + 0x2c8))(plVar17,uVar9,*(undefined8 *)(*plVar17 + 0x2d0));
      }
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  puVar23 = (undefined8 *)Method_System_Linq_Enumerable_Select<SplineInstantiate,_int>__;
  if ((*(long *)(unaff_x29 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar12 = (long *)FUN_0366f3a0(unaff_x29,0);
    if (plVar12 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    iVar4 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        plVar17 = (long *)(**(code **)(*plVar12 + 0x208))
                                    (plVar12,iVar4,*(undefined8 *)(*plVar12 + 0x210));
        if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
        uVar10 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
        if ((uVar10 & 1) != 0) {
          plVar17 = (long *)(**(code **)(*plVar12 + 0x208))
                                      (plVar12,iVar4,*(undefined8 *)(*plVar12 + 0x210));
          if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
          lVar11 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
          if (lVar11 == unaff_x29) {
            plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
            uVar9 = FUN_0367145c(unaff_x29,0);
            if ((plVar17 == (long *)0x0) ||
               ((**(code **)(*plVar17 + 0x4d8))
                          (plVar17,*(undefined8 *)
                                    InventoryManager_<BuyBattlepassCoroutine>d__74_TypeInfo,uVar9,
                           *(undefined8 *)(*plVar17 + 0x4e0)), lVar11 == 0))
            goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
          }
          else {
            if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
            iVar8 = FUN_03670744(lVar11,0);
            if (iVar8 < 2) {
              plVar17 = (long *)FUN_03700cac();
            }
            else {
              plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
              uVar9 = FUN_0367145c(lVar11,0);
              if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              (**(code **)(*plVar17 + 0x4d8))
                        (plVar17,*(undefined8 *)
                                  InventoryManager_<BuyBattlepassCoroutine>d__74_TypeInfo,uVar9,
                         *(undefined8 *)(*plVar17 + 0x4e0));
            }
          }
          uVar9 = FUN_03669568(lVar11,0);
          uVar14 = FUN_03669568(unaff_x29,0);
          uVar10 = thunk_FUN_03152714(uVar9,uVar14,0);
          if ((uVar10 & 1) != 0) {
            if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
            (**(code **)(*plVar17 + 0x4d8))
                      (plVar17,*(undefined8 *)
                                Method_System_Linq_Enumerable_SelectMany<DataTable,_Type>__,
                       *(undefined8 *)PTR_DAT_04236148,*(undefined8 *)(*plVar17 + 0x4e0));
            (**(code **)(*plVar17 + 0x4d8))
                      (plVar17,*(undefined8 *)Method_System_Linq_Enumerable_SelectMany<Face,_Edge>__
                       ,*(undefined8 *)
                         Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__,
                       *(undefined8 *)(*plVar17 + 0x4e0));
          }
          uVar9 = FUN_03669568(lVar11,0);
          uVar14 = FUN_03669568(unaff_x29,0);
          uVar10 = thunk_FUN_03152714(uVar9,uVar14,0);
          if ((uVar10 & 1) == 0) {
            lVar24 = FUN_03669568(lVar11,0);
            if (lVar24 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
            if ((*(int *)(lVar24 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar8 = FUN_03670744(lVar11,0);
              if (iVar8 < 2) {
                FUN_03669568(lVar11,0);
                plVar18 = (long *)FUN_03703c88();
                if (plVar18 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                (**(code **)(*plVar18 + 0x2c8))(plVar18,plVar17,*(undefined8 *)(*plVar18 + 0x2d0));
              }
              plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
              plVar18 = *(long **)(unaff_x22 + 0x28);
              uVar9 = FUN_03669568(lVar11,0);
              if (plVar18 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                          (plVar18,uVar9,*(undefined8 *)(*plVar18 + 0x310));
              uVar9 = FUN_0367145c(lVar11,0);
              if ((plVar18 != (long *)0x0) && (*plVar18 != *(long *)PTR_DAT_0422fc38))
              goto LAB_037036b4;
              uVar9 = FUN_03152fb8(plVar18,*(undefined8 *)PTR_DAT_04236818,uVar9,0);
              if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              (**(code **)(*plVar17 + 0x4d8))
                        (plVar17,*(undefined8 *)
                                  InventoryManager_<BuyBattlepassCoroutine>d__74_TypeInfo,uVar9,
                         *(undefined8 *)(*plVar17 + 0x4e0));
              puVar23 = (undefined8 *)Method_System_Linq_Enumerable_Select<SplineInstantiate,_int>__
              ;
            }
          }
          if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
          (**(code **)(*plVar16 + 0x2c8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2d0));
          plVar18 = (long *)(**(code **)(*plVar12 + 0x208))
                                      (plVar12,iVar4,*(undefined8 *)(*plVar12 + 0x210));
          if (plVar18 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
          lVar11 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
          if (lVar11 == 0) {
            plVar18 = *(long **)(unaff_x22 + 0x48);
            if ((plVar18 == (long *)0x0) ||
               (plVar18 = (long *)(**(code **)(*plVar18 + 0x5a8))
                                            (plVar18,*puVar23,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_KeyValuePair<string,_Vector3>_get_Value__
                                             ,*(undefined8 *)
                                               VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                                             ,*(undefined8 *)(*plVar18 + 0x5b0)),
               plVar17 == (long *)0x0)) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
            (**(code **)(*plVar17 + 0x2b8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2c0));
            plVar17 = *(long **)(unaff_x22 + 0x48);
            if ((plVar17 == (long *)0x0) ||
               (plVar17 = (long *)(**(code **)(*plVar17 + 0x5a8))
                                            (plVar17,*puVar23,
                                             *(undefined8 *)
                                              Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IUpdateSelectedHandler>__
                                             ,*(undefined8 *)
                                               VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                                             ,*(undefined8 *)(*plVar17 + 0x5b0)),
               plVar18 == (long *)0x0)) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
            (**(code **)(*plVar18 + 0x2c8))(plVar18,plVar17,*(undefined8 *)(*plVar18 + 0x2d0));
            (**(code **)(*plVar12 + 0x208))(plVar12,iVar4,*(undefined8 *)(*plVar12 + 0x210));
            uVar9 = FUN_0370029c();
            if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
            (**(code **)(*plVar17 + 0x2c8))(plVar17,uVar9,*(undefined8 *)(*plVar17 + 0x2d0));
          }
        }
        iVar4 = iVar4 + 1;
        iVar8 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      } while (iVar4 < iVar8);
    }
  }
  if ((plVar16 != (long *)0x0) &&
     (uVar10 = (**(code **)(*plVar16 + 0x318))(plVar16,*(undefined8 *)(*plVar16 + 800)),
     (uVar10 & 1) == 0)) {
    (**(code **)(*plVar15 + 0x2a8))(plVar15,plVar16,*(undefined8 *)(*plVar15 + 0x2b0));
  }
  plVar12 = *(long **)(unaff_x29 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_03702058:
    puVar23 = *(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
  }
  else {
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    puVar23 = (undefined8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
    if (*(int *)(lVar11 + 0x10) == 0) goto LAB_03702058;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_03702118:
    uStack0000000000000030 = *puVar23;
  }
  else {
    FUN_03669568(unaff_x29,0);
    FUN_03703c88();
    lVar11 = FUN_03669568(unaff_x29,0);
    if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    if (*(int *)(lVar11 + 0x10) == 0) {
      puVar23 = *(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
      goto LAB_03702118;
    }
    plVar15 = *(long **)(unaff_x22 + 0x28);
    uVar9 = FUN_03669568(unaff_x29,0);
    if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
    plVar18 = (long *)(**(code **)(*plVar15 + 0x308))
                                (plVar15,uVar9,*(undefined8 *)(*plVar15 + 0x310));
    if ((plVar18 != (long *)0x0) && (*plVar18 != *(long *)PTR_DAT_0422fc38)) {
LAB_037036b4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar18);
    }
    uStack0000000000000030 = FUN_03146988(plVar18,*(undefined8 *)PTR_DAT_04236818,0);
  }
  if (plVar12 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      plVar15 = (long *)
                Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
      ;
      plVar16 = (long *)
                Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IDiagnosticsFactory>__
      ;
      do {
        plVar17 = (long *)FUN_036a11ec(plVar12,iVar4,0);
        if (plVar17 == (long *)0x0) {
LAB_03702190:
          plVar17 = (long *)FUN_036a11ec(plVar12,iVar4,0);
          if (plVar17 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar16 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar17 + 0x130)) &&
                (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) == *plVar16)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar17 = (long *)FUN_036a11ec(plVar12,iVar4,0);
              if (plVar17 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar16 + 0x130);
                if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *plVar16)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(plVar17);
                }
              }
              plVar18 = *(long **)(unaff_x22 + 0x38);
              if (plVar18 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              iVar8 = (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
              if (iVar8 < 1) {
                uVar10 = FUN_03705ea4();
                if ((uVar10 & 1) == 0) {
                  if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
LAB_03702864:
                  plVar15 = (long *)FUN_036cf6c8(plVar17,0);
                  lVar11 = FUN_036cef20(plVar17,0);
                  lVar24 = (**(code **)(*plVar17 + 0x2c8))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
                  if (lVar24 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                  lVar24 = *(long *)(lVar24 + 0x48);
                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                              Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
                                            );
                  FUN_036d9324(uVar9,*(undefined8 *)
                                      Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerExitHandler>__
                               ,lVar11,0);
                  if (lVar24 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                  plVar18 = (long *)FUN_036a18f4(lVar24,uVar9,0);
                  if (plVar18 == (long *)0x0) {
                    plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
                    uVar9 = FUN_036a0e70(plVar17,0);
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_List<Action<Texture>>__ctor__ +
                                0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)
                                          Method_System_Collections_Generic_List<Action<Texture>>__ctor__
                                        );
                    }
                    uVar9 = FUN_038919c8(uVar9,0);
                    if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    (**(code **)(*plVar16 + 0x4d8))
                              (plVar16,*(undefined8 *)PTR_DAT_04231c30,uVar9,
                               *(undefined8 *)(*plVar16 + 0x4e0));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_03702a04:
                      uVar9 = FUN_03669568(unaff_x29,0);
                      (**(code **)(*plVar16 + 0x518))
                                (plVar16,*(undefined8 *)
                                          Method_System_Linq_Enumerable_Where<WingedEdge>__,
                                 *(undefined8 *)
                                  Method_System_Security_Cryptography_DSA_FromXmlString__,uVar9,
                                 *(undefined8 *)(*plVar16 + 0x520));
                    }
                    else {
                      lVar24 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar24 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                      iVar8 = FUN_036b33b8(lVar24,*(undefined8 *)(unaff_x29 + 0x90),0);
                      if (iVar8 == -3) goto LAB_03702a04;
                    }
                    plVar20 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
                    lVar24 = (**(code **)(*plVar17 + 0x2c8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
                    if (lVar24 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    uVar9 = FUN_0367145c(lVar24,0);
                    uVar9 = FUN_03152fb8(*(undefined8 *)
                                          Method_UnityEngine_EventSystems_ExecuteEvents_Execute__,
                                         uStack0000000000000030,uVar9,0);
                    if (plVar20 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    (**(code **)(*plVar20 + 0x4d8))
                              (plVar20,*(undefined8 *)
                                        Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerExitHandler>__
                               ,uVar9,*(undefined8 *)(*plVar20 + 0x4e0));
                    (**(code **)(*plVar16 + 0x2c8))
                              (plVar16,plVar20,*(undefined8 *)(*plVar16 + 0x2d0));
                    if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    if (*(long *)(lVar11 + 0x18) != 0) {
                      plVar20 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230940);
                      FUN_03160a50(plVar20,0);
                      if (0 < *(int *)(lVar11 + 0x18)) {
                        if (plVar20 == (long *)0x0)
                        goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                        lVar24 = 0;
                        do {
                          FUN_03161a54(plVar20,0,0);
                          uVar27 = (uint)lVar24;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar19 = (long *)FUN_0315ab48(plVar20,uStack0000000000000030,0);
                            if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                            lVar26 = *(long *)(lVar11 + 0x20 + lVar24 * 8);
                            if ((lVar26 == 0) ||
                               (uVar9 = FUN_03682ebc(lVar26,0), plVar19 == (long *)0x0))
                            goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                          }
                          else {
                            if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                            plVar19 = (long *)(lVar11 + (long)(int)uVar27 * 8 + 0x20);
                            if (*plVar19 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                            FUN_03684aec(*plVar19,0);
                            FUN_03703c88();
                            if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                            if (*plVar19 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                            uVar9 = FUN_03684aec(*plVar19,0);
                            uVar10 = FUN_031532a8(uVar9,0);
                            if ((uVar10 & 1) == 0) {
                              if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                              if (*plVar19 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                              plVar25 = *(long **)(unaff_x22 + 0x28);
                              uVar9 = FUN_03684aec(*plVar19,0);
                              if (plVar25 == (long *)0x0)
                              goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                              uVar9 = (**(code **)(*plVar25 + 0x308))
                                                (plVar25,uVar9,*(undefined8 *)(*plVar25 + 0x310));
                              lVar26 = FUN_03162d5c(plVar20,uVar9,0);
                              if (lVar26 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                              FUN_0315aa9c(lVar26,0x3a,0);
                            }
                            if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                            if (*plVar19 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                            uVar9 = FUN_03682ebc(*plVar19,0);
                            plVar19 = plVar20;
                          }
                          FUN_0315ab48(plVar19,uVar9,0);
                          if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                          plVar25 = (long *)(lVar11 + (long)(int)uVar27 * 8 + 0x20);
                          plVar19 = (long *)*plVar25;
                          if (plVar19 == (long *)0x0)
                          goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                          iVar8 = (**(code **)(*plVar19 + 0x238))
                                            (plVar19,*(undefined8 *)(*plVar19 + 0x240));
                          if (iVar8 == 2) {
LAB_03702cd8:
                            FUN_03162fc4(plVar20,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                            plVar25 = (long *)*plVar25;
                            if (plVar25 == (long *)0x0)
                            goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                            iVar8 = (**(code **)(*plVar25 + 0x238))
                                              (plVar25,*(undefined8 *)(*plVar25 + 0x240));
                            if (iVar8 == 4) goto LAB_03702cd8;
                          }
                          plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
                          uVar9 = (**(code **)(*plVar20 + 0x168))
                                            (plVar20,*(undefined8 *)(*plVar20 + 0x170));
                          if (plVar19 == (long *)0x0)
                          goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                          (**(code **)(*plVar19 + 0x4d8))
                                    (plVar19,*(undefined8 *)
                                              Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerExitHandler>__
                                     ,uVar9,*(undefined8 *)(*plVar19 + 0x4e0));
                          (**(code **)(*plVar16 + 0x2c8))
                                    (plVar16,plVar19,*(undefined8 *)(*plVar16 + 0x2d0));
                          lVar24 = lVar24 + 1;
                        } while ((int)lVar24 < *(int *)(lVar11 + 0x18));
                      }
                    }
                    plVar20 = *(long **)(unaff_x22 + 0x78);
                    if (plVar20 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    (**(code **)(*plVar20 + 0x288))
                              (plVar20,plVar16,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar20 + 0x290));
                    plVar16 = (long *)
                              Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IDiagnosticsFactory>__
                    ;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)
                                       Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
                                     + 0x130);
                    if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)
                         Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
                       )) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(plVar18);
                    }
                  }
                  plVar20 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
                  uVar9 = FUN_036a0e70(plVar17,0);
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_List<Action<Texture>>__ctor__ +
                              0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        Method_System_Collections_Generic_List<Action<Texture>>__ctor__
                                      );
                  }
                  uVar9 = FUN_038919c8(uVar9,0);
                  if (plVar20 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                  (**(code **)(*plVar20 + 0x4d8))
                            (plVar20,*(undefined8 *)PTR_DAT_04231c30,uVar9,
                             *(undefined8 *)(*plVar20 + 0x4e0));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_03702e90:
                    lVar11 = (**(code **)(*plVar17 + 0x1b8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                    if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    uVar9 = FUN_03669568(lVar11,0);
                    (**(code **)(*plVar20 + 0x518))
                              (plVar20,*(undefined8 *)
                                        Method_System_Linq_Enumerable_Where<WingedEdge>__,
                               *(undefined8 *)
                                Method_System_Security_Cryptography_DSA_FromXmlString__,uVar9,
                               *(undefined8 *)(*plVar20 + 0x520));
                  }
                  else {
                    lVar24 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar11 = (**(code **)(*plVar17 + 0x2c8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
                    if ((lVar11 == 0) || (lVar24 == 0))
                    goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    iVar8 = FUN_036b33b8(lVar24,*(undefined8 *)(lVar11 + 0x90),0);
                    if (iVar8 == -3) goto LAB_03702e90;
                  }
                  plVar19 = plVar17;
                  if (plVar18 != (long *)0x0) {
                    plVar19 = plVar18;
                  }
                  uVar9 = FUN_036a0e70(plVar19,0);
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_List<Action<Texture>>__ctor__ +
                              0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        Method_System_Collections_Generic_List<Action<Texture>>__ctor__
                                      );
                  }
                  uVar9 = FUN_038919c8(uVar9,0);
                  (**(code **)(*plVar20 + 0x4d8))
                            (plVar20,*(undefined8 *)Method_Mono_Unity_Debug_CheckAndThrow__,uVar9,
                             *(undefined8 *)(*plVar20 + 0x4e0));
                  lVar11 = plVar17[6];
                  uVar9 = *(undefined8 *)Method_System_IO_Compression_DeflateStream_get_Position__;
                  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar9 = FUN_032e04b8(uVar9,0);
                  FUN_036f88b8(lVar11,plVar20,uVar9);
                  uVar9 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180))
                  ;
                  uVar14 = FUN_036a0e70(plVar17,0);
                  uVar10 = FUN_031529f8(uVar9,uVar14,0);
                  if ((uVar10 & 1) != 0) {
                    uVar9 = (**(code **)(*plVar17 + 0x178))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x180));
                    (**(code **)(*plVar20 + 0x518))
                              (plVar20,*(undefined8 *)Method_System_Linq_Enumerable_Where<Toggle>__,
                               *(undefined8 *)
                                Method_System_Security_Cryptography_DSA_FromXmlString__,uVar9,
                               *(undefined8 *)(*plVar20 + 0x520));
                  }
                  if (plVar15 == (long *)0x0) {
                    lVar11 = *plVar20;
                    uVar14 = *(undefined8 *)Method_System_Linq_Enumerable_Where<Type>__;
                    uVar21 = *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
                    uVar22 = *(undefined8 *)(lVar11 + 0x520);
                    uVar9 = *(undefined8 *)PTR_DAT_042341c8;
LAB_0370315c:
                    (**(code **)(lVar11 + 0x518))(plVar20,uVar14,uVar21,uVar9,uVar22);
                  }
                  else {
                    uVar10 = (**(code **)(*plVar15 + 0x1d8))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                    if ((uVar10 & 1) != 0) {
                      (**(code **)(*plVar20 + 0x518))
                                (plVar20,*(undefined8 *)Method_System_Linq_Enumerable_Union<char>__,
                                 *(undefined8 *)
                                  Method_System_Security_Cryptography_DSA_FromXmlString__,
                                 *(undefined8 *)PTR_DAT_042341c8,*(undefined8 *)(*plVar20 + 0x520));
                    }
                    lVar11 = plVar15[3];
                    uVar9 = *(undefined8 *)
                             Method_System_Linq_Enumerable_OrderBy<ValueTuple<string,_Type>,_string>__
                    ;
                    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar9 = FUN_032e04b8(uVar9,0);
                    FUN_036f88b8(lVar11,plVar20,uVar9);
                    uVar9 = (**(code **)(*plVar17 + 0x178))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x180));
                    uVar14 = (**(code **)(*plVar15 + 0x1c8))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
                    uVar10 = FUN_031529f8(uVar9,uVar14,0);
                    if ((uVar10 & 1) != 0) {
                      uVar9 = (**(code **)(*plVar15 + 0x1c8))
                                        (plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_List<Action<Texture>>__ctor__
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            Method_System_Collections_Generic_List<Action<Texture>>__ctor__
                                          );
                      }
                      uVar9 = FUN_038919c8(uVar9,0);
                      lVar11 = *plVar20;
                      uVar14 = *(undefined8 *)Method_System_Linq_Enumerable_Where<string>__;
                      uVar22 = *(undefined8 *)(lVar11 + 0x520);
                      uVar21 = *(undefined8 *)
                                Method_System_Security_Cryptography_DSA_FromXmlString__;
                      goto LAB_0370315c;
                    }
                  }
                  plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
                  uVar9 = FUN_0367145c(unaff_x29,0);
                  uVar9 = FUN_03152fb8(*(undefined8 *)
                                        Method_UnityEngine_EventSystems_ExecuteEvents_Execute__,
                                       uStack0000000000000030,uVar9,0);
                  if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                  (**(code **)(*plVar15 + 0x4d8))
                            (plVar15,*(undefined8 *)
                                      Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerExitHandler>__
                             ,uVar9,*(undefined8 *)(*plVar15 + 0x4e0));
                  (**(code **)(*plVar20 + 0x2c8))(plVar20,plVar15,*(undefined8 *)(*plVar20 + 0x2d0))
                  ;
                  iVar8 = (**(code **)(*plVar17 + 0x278))(plVar17,*(undefined8 *)(*plVar17 + 0x280))
                  ;
                  if (iVar8 != 0) {
                    (**(code **)(*plVar17 + 0x278))(plVar17,*(undefined8 *)(*plVar17 + 0x280));
                    uVar9 = FUN_037057b4();
                    (**(code **)(*plVar20 + 0x518))
                              (plVar20,*(undefined8 *)
                                        Method_System_Linq_Enumerable_Where<PlayerEditorConnectionEvents_MessageTypeSubscribers>__
                               ,*(undefined8 *)
                                 Method_System_Security_Cryptography_DSA_FromXmlString__,uVar9,
                               *(undefined8 *)(*plVar20 + 0x520));
                  }
                  iVar8 = (**(code **)(*plVar17 + 0x2d8))(plVar17,*(undefined8 *)(*plVar17 + 0x2e0))
                  ;
                  if (iVar8 != 1) {
                    (**(code **)(*plVar17 + 0x2d8))(plVar17,*(undefined8 *)(*plVar17 + 0x2e0));
                    uVar9 = FUN_03705824();
                    (**(code **)(*plVar20 + 0x518))
                              (plVar20,*(undefined8 *)Method_System_Linq_Enumerable_Where<Volume>__,
                               *(undefined8 *)
                                Method_System_Security_Cryptography_DSA_FromXmlString__,uVar9,
                               *(undefined8 *)(*plVar20 + 0x520));
                  }
                  iVar8 = (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0))
                  ;
                  if (iVar8 != 1) {
                    (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
                    uVar9 = FUN_03705824();
                    (**(code **)(*plVar20 + 0x518))
                              (plVar20,*(undefined8 *)
                                        Method_System_Linq_Enumerable_Where<PhotonScoreManager_Kill>__
                               ,*(undefined8 *)
                                 Method_System_Security_Cryptography_DSA_FromXmlString__,uVar9,
                               *(undefined8 *)(*plVar20 + 0x520));
                  }
                  lVar11 = (**(code **)(*plVar17 + 0x268))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x270));
                  if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                  if (*(long *)(lVar11 + 0x18) != 0) {
                    plVar15 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230940);
                    FUN_03160a50(plVar15,0);
                    if (0 < *(int *)(lVar11 + 0x18)) {
                      if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                      lVar24 = 0;
                      do {
                        FUN_03161a54(plVar15,0,0);
                        uVar27 = (uint)lVar24;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          lVar26 = FUN_0315ab48(plVar15,uStack0000000000000030,0);
                          if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                          lVar13 = *(long *)(lVar11 + 0x20 + lVar24 * 8);
                          if ((lVar13 == 0) || (uVar9 = FUN_03682ebc(lVar13,0), lVar26 == 0))
                          goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                          FUN_0315ab48(lVar26,uVar9,0);
                        }
                        else {
                          if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                          plVar16 = (long *)(lVar11 + (long)(int)uVar27 * 8 + 0x20);
                          if (*plVar16 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                          FUN_03684aec(*plVar16,0);
                          FUN_03703c88();
                          if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                          if (*plVar16 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                          uVar9 = FUN_03684aec(*plVar16,0);
                          uVar10 = FUN_031532a8(uVar9,0);
                          if ((uVar10 & 1) == 0) {
                            if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                            if (*plVar16 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                            plVar17 = *(long **)(unaff_x22 + 0x28);
                            uVar9 = FUN_03684aec(*plVar16,0);
                            if (plVar17 == (long *)0x0)
                            goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                            uVar9 = (**(code **)(*plVar17 + 0x308))
                                              (plVar17,uVar9,*(undefined8 *)(*plVar17 + 0x310));
                            lVar26 = FUN_03162d5c(plVar15,uVar9,0);
                            if (lVar26 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                            FUN_0315aa9c(lVar26,0x3a,0);
                          }
                          if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                          if (*plVar16 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                          uVar9 = FUN_03682ebc(*plVar16,0);
                          FUN_0315ab48(plVar15,uVar9,0);
                          plVar16 = (long *)
                                    Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IDiagnosticsFactory>__
                          ;
                        }
                        if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                        plVar18 = (long *)(lVar11 + (long)(int)uVar27 * 8 + 0x20);
                        plVar17 = (long *)*plVar18;
                        if (plVar17 == (long *)0x0)
                        goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                        iVar8 = (**(code **)(*plVar17 + 0x238))
                                          (plVar17,*(undefined8 *)(*plVar17 + 0x240));
                        if (iVar8 == 2) {
System_Xml_Schema_XmlSchemaSimpleContentRestriction__get_Facets:
                          FUN_03162fc4(plVar15,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                          plVar18 = (long *)*plVar18;
                          if (plVar18 == (long *)0x0)
                          goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                          iVar8 = (**(code **)(*plVar18 + 0x238))
                                            (plVar18,*(undefined8 *)(*plVar18 + 0x240));
                          if (iVar8 == 4)
                          goto System_Xml_Schema_XmlSchemaSimpleContentRestriction__get_Facets;
                        }
                        plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
                        uVar9 = (**(code **)(*plVar15 + 0x168))
                                          (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                        if (plVar17 == (long *)0x0)
                        goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                        (**(code **)(*plVar17 + 0x4d8))
                                  (plVar17,*(undefined8 *)
                                            Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerExitHandler>__
                                   ,uVar9,*(undefined8 *)(*plVar17 + 0x4e0));
                        (**(code **)(*plVar20 + 0x2c8))
                                  (plVar20,plVar17,*(undefined8 *)(*plVar20 + 0x2d0));
                        lVar24 = lVar24 + 1;
                      } while ((int)lVar24 < *(int *)(lVar11 + 0x18));
                    }
                  }
                  plVar15 = *(long **)(unaff_x22 + 0x78);
                  if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                  (**(code **)(*plVar15 + 0x298))
                            (plVar15,plVar20,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar15 + 0x2a0));
                  plVar15 = (long *)
                            Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
                  ;
                }
              }
              else {
                if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                plVar15 = *(long **)(unaff_x22 + 0x38);
                uVar9 = (**(code **)(*plVar17 + 0x2c8))(plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
                if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                uVar10 = (**(code **)(*plVar15 + 0x348))
                                   (plVar15,uVar9,*(undefined8 *)(*plVar15 + 0x350));
                plVar15 = (long *)
                          Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
                ;
                if ((uVar10 & 1) != 0) {
                  plVar15 = *(long **)(unaff_x22 + 0x38);
                  uVar9 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0))
                  ;
                  if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                  uVar10 = (**(code **)(*plVar15 + 0x348))
                                     (plVar15,uVar9,*(undefined8 *)(*plVar15 + 0x350));
                  plVar15 = (long *)
                            Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
                  ;
                  if (((uVar10 & 1) != 0) && (uVar10 = FUN_03705ea4(), (uVar10 & 1) == 0))
                  goto LAB_03702864;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar15 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *plVar15))
          goto LAB_03702190;
          plVar17 = (long *)FUN_036a11ec(plVar12,iVar4,0);
          if (plVar17 == (long *)0x0) {
            uVar10 = FUN_03705ea4();
            if ((uVar10 & 1) == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
          }
          else {
            bVar1 = *(byte *)(*plVar15 + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *plVar15)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar17);
            }
            uVar10 = FUN_03705ea4();
            if ((uVar10 & 1) == 0) {
              lVar11 = plVar17[7];
              plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_03702380:
                uVar9 = FUN_03669568(unaff_x29,0);
                if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                (**(code **)(*plVar15 + 0x518))
                          (plVar15,*(undefined8 *)Method_System_Linq_Enumerable_Where<WingedEdge>__,
                           *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                           uVar9,*(undefined8 *)(*plVar15 + 0x520));
              }
              else {
                lVar24 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar24 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                iVar8 = FUN_036b33b8(lVar24,*(undefined8 *)(unaff_x29 + 0x90),0);
                if (iVar8 == -3) goto LAB_03702380;
              }
              uVar9 = FUN_036a0e70(plVar17,0);
              if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)
                                    Method_System_Collections_Generic_List<Action<Texture>>__ctor__)
                ;
              }
              uVar9 = FUN_038919c8(uVar9,0);
              if (plVar15 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              (**(code **)(*plVar15 + 0x4d8))
                        (plVar15,*(undefined8 *)PTR_DAT_04231c30,uVar9,
                         *(undefined8 *)(*plVar15 + 0x4e0));
              uVar9 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
              uVar14 = FUN_036a0e70(plVar17,0);
              uVar10 = FUN_031529f8(uVar9,uVar14,0);
              if ((uVar10 & 1) != 0) {
                uVar9 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
                (**(code **)(*plVar15 + 0x518))
                          (plVar15,*(undefined8 *)Method_System_Linq_Enumerable_Where<Toggle>__,
                           *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                           uVar9,*(undefined8 *)(*plVar15 + 0x520));
              }
              FUN_036f88b8(plVar17[6],plVar15,0);
              plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
              uVar9 = FUN_0367145c(unaff_x29,0);
              uVar9 = FUN_03152fb8(*(undefined8 *)
                                    Method_UnityEngine_EventSystems_ExecuteEvents_Execute__,
                                   uStack0000000000000030,uVar9,0);
              if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              (**(code **)(*plVar16 + 0x4d8))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerExitHandler>__
                         ,uVar9,*(undefined8 *)(*plVar16 + 0x4e0));
              (**(code **)(*plVar15 + 0x2c8))(plVar15,plVar16,*(undefined8 *)(*plVar15 + 0x2d0));
              uVar10 = FUN_036da3d4(plVar17,0);
              if ((uVar10 & 1) != 0) {
                (**(code **)(*plVar15 + 0x518))
                          (plVar15,*(undefined8 *)Method_System_Linq_Enumerable_Sum__,
                           *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                           *(undefined8 *)PTR_DAT_042341c8,*(undefined8 *)(*plVar15 + 0x520));
              }
              if (lVar11 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              if (*(long *)(lVar11 + 0x18) != 0) {
                plVar16 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230940);
                FUN_03160a50(plVar16,0);
                if (0 < *(int *)(lVar11 + 0x18)) {
                  if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                  lVar24 = 0;
                  do {
                    FUN_03161a54(plVar16,0,0);
                    uVar27 = (uint)lVar24;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar17 = (long *)FUN_0315ab48(plVar16,uStack0000000000000030,0);
                      if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                      lVar26 = *(long *)(lVar11 + 0x20 + lVar24 * 8);
                      if ((lVar26 == 0) || (uVar9 = FUN_03682ebc(lVar26,0), plVar17 == (long *)0x0))
                      goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    }
                    else {
                      if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                      plVar17 = (long *)(lVar11 + (long)(int)uVar27 * 8 + 0x20);
                      if (*plVar17 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                      FUN_03684aec(*plVar17,0);
                      FUN_03703c88();
                      if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                      if (*plVar17 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                      uVar9 = FUN_03684aec(*plVar17,0);
                      uVar10 = FUN_031532a8(uVar9,0);
                      if ((uVar10 & 1) == 0) {
                        if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                        if (*plVar17 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                        plVar18 = *(long **)(unaff_x22 + 0x28);
                        uVar9 = FUN_03684aec(*plVar17,0);
                        if (plVar18 == (long *)0x0)
                        goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                        uVar9 = (**(code **)(*plVar18 + 0x308))
                                          (plVar18,uVar9,*(undefined8 *)(*plVar18 + 0x310));
                        lVar26 = FUN_03162d5c(plVar16,uVar9,0);
                        if (lVar26 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                        FUN_0315aa9c(lVar26,0x3a,0);
                      }
                      if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                      if (*plVar17 == 0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                      uVar9 = FUN_03682ebc(*plVar17,0);
                      plVar17 = plVar16;
                    }
                    FUN_0315ab48(plVar17,uVar9,0);
                    if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                    plVar18 = (long *)(lVar11 + (long)(int)uVar27 * 8 + 0x20);
                    plVar17 = (long *)*plVar18;
                    if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    iVar8 = (**(code **)(*plVar17 + 0x238))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x240));
                    if (iVar8 == 2) {
LAB_03702760:
                      FUN_03162fc4(plVar16,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_03703694;
                      plVar18 = (long *)*plVar18;
                      if (plVar18 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                      iVar8 = (**(code **)(*plVar18 + 0x238))
                                        (plVar18,*(undefined8 *)(*plVar18 + 0x240));
                      if (iVar8 == 4) goto LAB_03702760;
                    }
                    plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5a8))();
                    uVar9 = (**(code **)(*plVar16 + 0x168))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                    if (plVar17 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
                    (**(code **)(*plVar17 + 0x4d8))
                              (plVar17,*(undefined8 *)
                                        Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerExitHandler>__
                               ,uVar9,*(undefined8 *)(*plVar17 + 0x4e0));
                    (**(code **)(*plVar15 + 0x2c8))
                              (plVar15,plVar17,*(undefined8 *)(*plVar15 + 0x2d0));
                    lVar24 = lVar24 + 1;
                  } while ((int)lVar24 < *(int *)(lVar11 + 0x18));
                }
              }
              plVar16 = *(long **)(unaff_x22 + 0x78);
              if (plVar16 == (long *)0x0) goto System_Xml_Schema_XmlSchemaSimpleType__Clone;
              (**(code **)(*plVar16 + 0x288))
                        (plVar16,plVar15,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar16 + 0x290));
              plVar15 = (long *)
                        Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
              ;
              plVar16 = (long *)
                        Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IDiagnosticsFactory>__
              ;
            }
          }
        }
        iVar4 = iVar4 + 1;
        iVar8 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      } while (iVar4 < iVar8);
    }
    FUN_036f88b8(*(undefined8 *)(unaff_x29 + 0x88),param_2,0);
    return param_2;
  }
System_Xml_Schema_XmlSchemaSimpleType__Clone:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


