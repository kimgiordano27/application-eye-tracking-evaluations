/*
FUNCTION_NAME: OVR.OpenVR.IVRResources._LoadSharedResource$$EndInvoke
ENTRY_POINT: 04f1c234
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRResources__LoadSharedResource__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar14;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  lVar9 = thunk_FUN_02b79548();
  puVar1 = PTR_DAT_06330038;
  if (lVar9 != 0) {
    if ((int)unaff_x19[3] != 0) {
      unaff_x19[4] = unaff_x20;
      thunk_FUN_02bb0e9c();
      lVar9 = thunk_FUN_02b79644(*unaff_x21);
      FUN_04f1bd9c(lVar9,*(undefined8 *)puVar1,*unaff_x26);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*unaff_x19 + 0x40)), lVar10 == 0))
      goto LAB_04f1c74c;
      puVar1 = PTR_DAT_06330050;
      if ((*(uint *)(unaff_x19 + 3) & 0xfffffffe) != 0) {
        unaff_x19[5] = lVar9;
        thunk_FUN_02bb0e9c(unaff_x19 + 5,lVar9);
        lVar9 = thunk_FUN_02b79644(*unaff_x21);
        FUN_04f1bd9c(lVar9,*(undefined8 *)puVar1,*unaff_x25);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*unaff_x19 + 0x40)), lVar10 == 0))
        goto LAB_04f1c74c;
        puVar2 = PTR_DAT_06330010;
        puVar1 = PTR_DAT_063141b8;
        if (2 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[6] = lVar9;
          thunk_FUN_02bb0e9c(unaff_x19 + 6,lVar9);
          *(long **)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
          thunk_FUN_02bb0e9c();
          plVar11 = (long *)FUN_02b3c908(*unaff_x23,3);
          lVar9 = thunk_FUN_02b79644(*unaff_x21);
          FUN_04f1bd9c(lVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
          if (plVar11 == (long *)0x0) goto LAB_04f1c758;
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
          goto LAB_04f1c74c;
          puVar2 = PTR_DAT_06330030;
          if ((int)plVar11[3] != 0) {
            plVar11[4] = lVar9;
            thunk_FUN_02bb0e9c(plVar11 + 4,lVar9);
            lVar9 = thunk_FUN_02b79644(*unaff_x21);
            FUN_04f1bd9c(lVar9,*(undefined8 *)puVar2,*unaff_x25);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
            goto LAB_04f1c74c;
            puVar2 = PTR_DAT_06330048;
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
              plVar11[5] = lVar9;
              thunk_FUN_02bb0e9c(plVar11 + 5,lVar9);
              lVar9 = thunk_FUN_02b79644(*unaff_x21);
              FUN_04f1bd9c(lVar9,*(undefined8 *)puVar2,*unaff_x24);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
              goto LAB_04f1c74c;
              puVar3 = System_Converter<IGameObjectFilter,_Object>_TypeInfo;
              puVar2 = PTR_DAT_06330008;
              if (2 < *(uint *)(plVar11 + 3)) {
                plVar11[6] = lVar9;
                thunk_FUN_02bb0e9c(plVar11 + 6,lVar9);
                plVar12 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                *plVar12 = (long)plVar11;
                thunk_FUN_02bb0e9c(plVar12,plVar11);
                plVar11 = (long *)FUN_02b3c908(*unaff_x23,3);
                lVar9 = thunk_FUN_02b79644(*unaff_x21);
                FUN_04f1bd9c(lVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
                if (plVar11 == (long *)0x0) {
LAB_04f1c758:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0
                   )) goto LAB_04f1c74c;
                puVar3 = Unity_Properties_ContainerPropertyBag<Vector3Int>_TypeInfo;
                puVar2 = Unity_Properties_ContainerPropertyBag<Vector3>_TypeInfo;
                if ((int)plVar11[3] != 0) {
                  plVar11[4] = lVar9;
                  thunk_FUN_02bb0e9c(plVar11 + 4,lVar9);
                  lVar9 = thunk_FUN_02b79644(*unaff_x21);
                  FUN_04f1bd9c(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar10 == 0)) goto LAB_04f1c74c;
                  puVar2 = Unity_Properties_ContainerPropertyBag<Vector2Int>_TypeInfo;
                  if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
                    plVar11[5] = lVar9;
                    thunk_FUN_02bb0e9c(plVar11 + 5,lVar9);
                    lVar9 = thunk_FUN_02b79644(*unaff_x21);
                    FUN_04f1bd9c(lVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
                    if ((lVar9 != 0) &&
                       (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar10 == 0)) goto LAB_04f1c74c;
                    puVar5 = Unity_Properties_ContainerPropertyBag<Vector4>_TypeInfo;
                    puVar4 = Unity_Properties_ContainerPropertyBag<Translate>_TypeInfo;
                    puVar3 = Unity_Properties_ContainerPropertyBag<StylePropertyName>_TypeInfo;
                    puVar2 = Unity_Properties_ContainerPropertyBag<Scale>_TypeInfo;
                    puVar1 = Unity_Properties_ContainerPropertyBag<RectInt>_TypeInfo;
                    if (2 < *(uint *)(plVar11 + 3)) {
                      plVar11[6] = lVar9;
                      thunk_FUN_02bb0e9c(plVar11 + 6,lVar9);
                      plVar12 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                      *plVar12 = (long)plVar11;
                      thunk_FUN_02bb0e9c(plVar12,plVar11);
                      lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                      FUN_044be198(lVar9,*(undefined8 *)puVar1);
                      uVar14 = **(undefined8 **)(*unaff_x22 + 0xb8);
                      uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                      FUN_04f1bdf0(0x43340000,0x43820000,uVar13,*(undefined8 *)puVar5,
                                   *(undefined8 *)puVar4,uVar14);
                      puVar8 = System_Converter<IActiveState,_Object>_TypeInfo;
                      puVar7 = Unity_Properties_ContainerPropertyBag<Vector2>_TypeInfo;
                      puVar6 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
                      puVar5 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
                      puVar4 = Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo;
                      puVar2 = Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo;
                      puVar1 = Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo;
                      if (lVar9 != 0) {
                        FUN_044bef24(lVar9,0,uVar13,
                                     *(undefined8 *)
                                      Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo);
                        uVar14 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
                        uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                        FUN_04f1bdf0(0x43340000,0x43820000,uVar13,*(undefined8 *)puVar2,
                                     *(undefined8 *)puVar8,uVar14);
                        FUN_044bef24(lVar9,1,uVar13,*(undefined8 *)puVar1);
                        uVar14 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                        uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                        FUN_04f1bdf0(0x41000000,0x42b40000,uVar13,*(undefined8 *)puVar5,
                                     *(undefined8 *)puVar4,uVar14);
                        FUN_044bef24(lVar9,2,uVar13,*(undefined8 *)puVar1);
                        uVar14 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                        uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                        FUN_04f1bdf0(0,DAT_0103222c,uVar13,*(undefined8 *)puVar7,
                                     *(undefined8 *)puVar6,uVar14);
                        FUN_044bef24(lVar9,3,uVar13,*(undefined8 *)puVar1);
                        plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
                        *plVar11 = lVar9;
                        thunk_FUN_02bb0e9c(plVar11,lVar9);
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
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_04f1c74c:
  uVar13 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar13,0);
}


