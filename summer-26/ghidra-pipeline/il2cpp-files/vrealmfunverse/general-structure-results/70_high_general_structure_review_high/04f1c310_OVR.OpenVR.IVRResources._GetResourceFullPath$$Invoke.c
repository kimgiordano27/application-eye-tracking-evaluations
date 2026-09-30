/*
FUNCTION_NAME: OVR.OpenVR.IVRResources._GetResourceFullPath$$Invoke
ENTRY_POINT: 04f1c310
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRResources__GetResourceFullPath__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar14;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  *(undefined8 *)(param_1 + 0x30) = unaff_x20;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_02bb0e9c();
  plVar9 = (long *)FUN_02b3c908(*unaff_x23,3);
  lVar10 = thunk_FUN_02b79644(*unaff_x21);
  FUN_04f1bd9c(lVar10,*unaff_x27,*unaff_x26);
  if (plVar9 == (long *)0x0) goto LAB_04f1c758;
  if ((lVar10 != 0) &&
     (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
LAB_04f1c74c:
    uVar13 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar13,0);
  }
  puVar1 = PTR_DAT_06330030;
  if ((int)plVar9[3] != 0) {
    plVar9[4] = lVar10;
    thunk_FUN_02bb0e9c(plVar9 + 4,lVar10);
    lVar10 = thunk_FUN_02b79644(*unaff_x21);
    FUN_04f1bd9c(lVar10,*(undefined8 *)puVar1,*unaff_x25);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_04f1c74c;
    puVar1 = PTR_DAT_06330048;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
      plVar9[5] = lVar10;
      thunk_FUN_02bb0e9c(plVar9 + 5,lVar10);
      lVar10 = thunk_FUN_02b79644(*unaff_x21);
      FUN_04f1bd9c(lVar10,*(undefined8 *)puVar1,*unaff_x24);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_04f1c74c;
      puVar2 = System_Converter<IGameObjectFilter,_Object>_TypeInfo;
      puVar1 = PTR_DAT_06330008;
      if (2 < *(uint *)(plVar9 + 3)) {
        plVar9[6] = lVar10;
        thunk_FUN_02bb0e9c(plVar9 + 6,lVar10);
        plVar12 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
        *plVar12 = (long)plVar9;
        thunk_FUN_02bb0e9c(plVar12,plVar9);
        plVar9 = (long *)FUN_02b3c908(*unaff_x23,3);
        lVar10 = thunk_FUN_02b79644(*unaff_x21);
        FUN_04f1bd9c(lVar10,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
        if (plVar9 == (long *)0x0) {
LAB_04f1c758:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_04f1c74c;
        puVar2 = Unity_Properties_ContainerPropertyBag<Vector3Int>_TypeInfo;
        puVar1 = Unity_Properties_ContainerPropertyBag<Vector3>_TypeInfo;
        if ((int)plVar9[3] != 0) {
          plVar9[4] = lVar10;
          thunk_FUN_02bb0e9c(plVar9 + 4,lVar10);
          lVar10 = thunk_FUN_02b79644(*unaff_x21);
          FUN_04f1bd9c(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
          goto LAB_04f1c74c;
          puVar1 = Unity_Properties_ContainerPropertyBag<Vector2Int>_TypeInfo;
          if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
            plVar9[5] = lVar10;
            thunk_FUN_02bb0e9c(plVar9 + 5,lVar10);
            lVar10 = thunk_FUN_02b79644(*unaff_x21);
            FUN_04f1bd9c(lVar10,*(undefined8 *)puVar1,*unaff_x26);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
            goto LAB_04f1c74c;
            puVar5 = Unity_Properties_ContainerPropertyBag<Vector4>_TypeInfo;
            puVar4 = Unity_Properties_ContainerPropertyBag<Translate>_TypeInfo;
            puVar3 = Unity_Properties_ContainerPropertyBag<StylePropertyName>_TypeInfo;
            puVar2 = Unity_Properties_ContainerPropertyBag<Scale>_TypeInfo;
            puVar1 = Unity_Properties_ContainerPropertyBag<RectInt>_TypeInfo;
            if (2 < *(uint *)(plVar9 + 3)) {
              plVar9[6] = lVar10;
              thunk_FUN_02bb0e9c(plVar9 + 6,lVar10);
              plVar12 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
              *plVar12 = (long)plVar9;
              thunk_FUN_02bb0e9c(plVar12,plVar9);
              lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
              FUN_044be198(lVar10,*(undefined8 *)puVar1);
              uVar14 = **(undefined8 **)(*unaff_x22 + 0xb8);
              uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
              FUN_04f1bdf0(0x43340000,0x43820000,uVar13,*(undefined8 *)puVar5,*(undefined8 *)puVar4,
                           uVar14);
              puVar8 = System_Converter<IActiveState,_Object>_TypeInfo;
              puVar7 = Unity_Properties_ContainerPropertyBag<Vector2>_TypeInfo;
              puVar6 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
              puVar5 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
              puVar4 = Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo;
              puVar2 = Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo;
              puVar1 = Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo;
              if (lVar10 != 0) {
                FUN_044bef24(lVar10,0,uVar13,
                             *(undefined8 *)Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo);
                uVar14 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
                uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                FUN_04f1bdf0(0x43340000,0x43820000,uVar13,*(undefined8 *)puVar2,
                             *(undefined8 *)puVar8,uVar14);
                FUN_044bef24(lVar10,1,uVar13,*(undefined8 *)puVar1);
                uVar14 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                FUN_04f1bdf0(0x41000000,0x42b40000,uVar13,*(undefined8 *)puVar5,
                             *(undefined8 *)puVar4,uVar14);
                FUN_044bef24(lVar10,2,uVar13,*(undefined8 *)puVar1);
                uVar14 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                FUN_04f1bdf0(0,DAT_0103222c,uVar13,*(undefined8 *)puVar7,*(undefined8 *)puVar6,
                             uVar14);
                FUN_044bef24(lVar10,3,uVar13,*(undefined8 *)puVar1);
                plVar9 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
                *plVar9 = lVar10;
                thunk_FUN_02bb0e9c(plVar9,lVar10);
                return;
              }
              goto LAB_04f1c758;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


