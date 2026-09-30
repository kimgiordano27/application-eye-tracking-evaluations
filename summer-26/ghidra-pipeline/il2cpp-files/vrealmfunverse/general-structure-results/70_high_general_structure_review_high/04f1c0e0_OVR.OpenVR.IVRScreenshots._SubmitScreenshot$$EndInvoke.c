/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._SubmitScreenshot$$EndInvoke
ENTRY_POINT: 04f1c0e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_IVRScreenshots__SubmitScreenshot__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_04f1bd9c();
  if (unaff_x19 == (long *)0x0) goto LAB_04f1c758;
  if ((param_1 != 0) &&
     (lVar10 = thunk_FUN_02b79548(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar10 == 0)) {
LAB_04f1c74c:
    uVar14 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar14,0);
  }
  puVar2 = PTR_DAT_0631b830;
  puVar1 = PTR_DAT_06317fc8;
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = param_1;
    thunk_FUN_02bb0e9c(unaff_x19 + 4,param_1);
    lVar10 = thunk_FUN_02b79644(*unaff_x21);
    FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
    goto LAB_04f1c74c;
    puVar4 = Unity_Properties_ContainerPropertyBag<Version>_TypeInfo;
    puVar2 = PTR_DAT_0631b828;
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffffe) != 0) {
      unaff_x19[5] = lVar10;
      thunk_FUN_02bb0e9c(unaff_x19 + 5,lVar10);
      lVar10 = thunk_FUN_02b79644(*unaff_x21);
      FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
      goto LAB_04f1c74c;
      puVar3 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<XRInputModalityManager>_TypeInfo
      ;
      puVar2 = PTR_DAT_0631b820;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar10;
        thunk_FUN_02bb0e9c(unaff_x19 + 6,lVar10);
        **(undefined8 **)(*(long *)puVar3 + 0xb8) = unaff_x19;
        thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar3 + 0xb8));
        plVar12 = (long *)FUN_02b3c908(*unaff_x23,3);
        lVar10 = thunk_FUN_02b79644(*unaff_x21);
        FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*unaff_x24);
        if (plVar12 == (long *)0x0) goto LAB_04f1c758;
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0))
        goto LAB_04f1c74c;
        puVar2 = PTR_DAT_06330038;
        if ((int)plVar12[3] != 0) {
          plVar12[4] = lVar10;
          thunk_FUN_02bb0e9c(plVar12 + 4,lVar10);
          lVar10 = thunk_FUN_02b79644(*unaff_x21);
          FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0))
          goto LAB_04f1c74c;
          puVar1 = PTR_DAT_06330050;
          if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
            plVar12[5] = lVar10;
            thunk_FUN_02bb0e9c(plVar12 + 5,lVar10);
            lVar10 = thunk_FUN_02b79644(*unaff_x21);
            FUN_04f1bd9c(lVar10,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0))
            goto LAB_04f1c74c;
            puVar2 = PTR_DAT_06330010;
            puVar1 = PTR_DAT_063141b8;
            if (2 < *(uint *)(plVar12 + 3)) {
              plVar12[6] = lVar10;
              thunk_FUN_02bb0e9c(plVar12 + 6,lVar10);
              plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
              *plVar13 = (long)plVar12;
              thunk_FUN_02bb0e9c(plVar13,plVar12);
              plVar12 = (long *)FUN_02b3c908(*unaff_x23,3);
              lVar10 = thunk_FUN_02b79644(*unaff_x21);
              FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
              if (plVar12 == (long *)0x0) goto LAB_04f1c758;
              if ((lVar10 != 0) &&
                 (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) goto LAB_04f1c74c;
              puVar2 = PTR_DAT_06330030;
              if ((int)plVar12[3] != 0) {
                plVar12[4] = lVar10;
                thunk_FUN_02bb0e9c(plVar12 + 4,lVar10);
                lVar10 = thunk_FUN_02b79644(*unaff_x21);
                FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar11 == 0)) goto LAB_04f1c74c;
                puVar2 = PTR_DAT_06330048;
                if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
                  plVar12[5] = lVar10;
                  thunk_FUN_02bb0e9c(plVar12 + 5,lVar10);
                  lVar10 = thunk_FUN_02b79644(*unaff_x21);
                  FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*unaff_x24);
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar11 == 0)) goto LAB_04f1c74c;
                  puVar4 = System_Converter<IGameObjectFilter,_Object>_TypeInfo;
                  puVar2 = PTR_DAT_06330008;
                  if (2 < *(uint *)(plVar12 + 3)) {
                    plVar12[6] = lVar10;
                    thunk_FUN_02bb0e9c(plVar12 + 6,lVar10);
                    plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                    *plVar13 = (long)plVar12;
                    thunk_FUN_02bb0e9c(plVar13,plVar12);
                    plVar12 = (long *)FUN_02b3c908(*unaff_x23,3);
                    lVar10 = thunk_FUN_02b79644(*unaff_x21);
                    FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
                    if (plVar12 == (long *)0x0) {
LAB_04f1c758:
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    if ((lVar10 != 0) &&
                       (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar11 == 0)) goto LAB_04f1c74c;
                    puVar4 = Unity_Properties_ContainerPropertyBag<Vector3Int>_TypeInfo;
                    puVar2 = Unity_Properties_ContainerPropertyBag<Vector3>_TypeInfo;
                    if ((int)plVar12[3] != 0) {
                      plVar12[4] = lVar10;
                      thunk_FUN_02bb0e9c(plVar12 + 4,lVar10);
                      lVar10 = thunk_FUN_02b79644(*unaff_x21);
                      FUN_04f1bd9c(lVar10,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
                      if ((lVar10 != 0) &&
                         (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar11 == 0)) goto LAB_04f1c74c;
                      puVar2 = Unity_Properties_ContainerPropertyBag<Vector2Int>_TypeInfo;
                      if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
                        plVar12[5] = lVar10;
                        thunk_FUN_02bb0e9c(plVar12 + 5,lVar10);
                        lVar10 = thunk_FUN_02b79644(*unaff_x21);
                        FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
                        if ((lVar10 != 0) &&
                           (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar11 == 0)) goto LAB_04f1c74c;
                        puVar6 = Unity_Properties_ContainerPropertyBag<Vector4>_TypeInfo;
                        puVar5 = Unity_Properties_ContainerPropertyBag<Translate>_TypeInfo;
                        puVar4 = Unity_Properties_ContainerPropertyBag<StylePropertyName>_TypeInfo;
                        puVar2 = Unity_Properties_ContainerPropertyBag<Scale>_TypeInfo;
                        puVar1 = Unity_Properties_ContainerPropertyBag<RectInt>_TypeInfo;
                        if (2 < *(uint *)(plVar12 + 3)) {
                          plVar12[6] = lVar10;
                          thunk_FUN_02bb0e9c(plVar12 + 6,lVar10);
                          plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                          *plVar13 = (long)plVar12;
                          thunk_FUN_02bb0e9c(plVar13,plVar12);
                          lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_044be198(lVar10,*(undefined8 *)puVar1);
                          uVar15 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
                          uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                          FUN_04f1bdf0(0x43340000,0x43820000,uVar14,*(undefined8 *)puVar6,
                                       *(undefined8 *)puVar5,uVar15);
                          puVar9 = System_Converter<IActiveState,_Object>_TypeInfo;
                          puVar8 = Unity_Properties_ContainerPropertyBag<Vector2>_TypeInfo;
                          puVar7 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
                          puVar6 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
                          puVar5 = Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo;
                          puVar2 = Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo;
                          puVar1 = Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo;
                          if (lVar10 != 0) {
                            FUN_044bef24(lVar10,0,uVar14,
                                         *(undefined8 *)
                                          Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo);
                            uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                            uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                            FUN_04f1bdf0(0x43340000,0x43820000,uVar14,*(undefined8 *)puVar2,
                                         *(undefined8 *)puVar9,uVar15);
                            FUN_044bef24(lVar10,1,uVar14,*(undefined8 *)puVar1);
                            uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                            uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                            FUN_04f1bdf0(0x41000000,0x42b40000,uVar14,*(undefined8 *)puVar6,
                                         *(undefined8 *)puVar5,uVar15);
                            FUN_044bef24(lVar10,2,uVar14,*(undefined8 *)puVar1);
                            uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                            uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                            FUN_04f1bdf0(0,DAT_0103222c,uVar14,*(undefined8 *)puVar8,
                                         *(undefined8 *)puVar7,uVar15);
                            FUN_044bef24(lVar10,3,uVar14,*(undefined8 *)puVar1);
                            plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                            *plVar12 = lVar10;
                            thunk_FUN_02bb0e9c(plVar12,lVar10);
                            return;
                          }
                          goto LAB_04f1c758;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


