/*
FUNCTION_NAME: OVR.OpenVR.IVRDriverManager._GetDriverCount$$EndInvoke
ENTRY_POINT: 04f1c484
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRDriverManager__GetDriverCount__EndInvoke(void)

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
  undefined8 uVar11;
  long *plVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar13;
  long *unaff_x22;
  undefined8 *unaff_x26;
  
  if (unaff_x19 == (long *)0x0) {
LAB_04f1c758:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((unaff_x20 != 0) && (lVar9 = thunk_FUN_02b79548(), lVar9 == 0)) {
LAB_04f1c74c:
    uVar11 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar11,0);
  }
  puVar2 = Unity_Properties_ContainerPropertyBag<Vector3Int>_TypeInfo;
  puVar1 = Unity_Properties_ContainerPropertyBag<Vector3>_TypeInfo;
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = unaff_x20;
    thunk_FUN_02bb0e9c();
    lVar9 = thunk_FUN_02b79644(*unaff_x21);
    FUN_04f1bd9c(lVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*unaff_x19 + 0x40)), lVar10 == 0))
    goto LAB_04f1c74c;
    puVar1 = Unity_Properties_ContainerPropertyBag<Vector2Int>_TypeInfo;
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffffe) != 0) {
      unaff_x19[5] = lVar9;
      thunk_FUN_02bb0e9c(unaff_x19 + 5,lVar9);
      lVar9 = thunk_FUN_02b79644(*unaff_x21);
      FUN_04f1bd9c(lVar9,*(undefined8 *)puVar1,*unaff_x26);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*unaff_x19 + 0x40)), lVar10 == 0))
      goto LAB_04f1c74c;
      puVar5 = Unity_Properties_ContainerPropertyBag<Vector4>_TypeInfo;
      puVar4 = Unity_Properties_ContainerPropertyBag<Translate>_TypeInfo;
      puVar3 = Unity_Properties_ContainerPropertyBag<StylePropertyName>_TypeInfo;
      puVar2 = Unity_Properties_ContainerPropertyBag<Scale>_TypeInfo;
      puVar1 = Unity_Properties_ContainerPropertyBag<RectInt>_TypeInfo;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar9;
        thunk_FUN_02bb0e9c(unaff_x19 + 6,lVar9);
        *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
        thunk_FUN_02bb0e9c();
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        FUN_044be198(lVar9,*(undefined8 *)puVar1);
        uVar13 = **(undefined8 **)(*unaff_x22 + 0xb8);
        uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
        FUN_04f1bdf0(0x43340000,0x43820000,uVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar4,uVar13
                    );
        puVar8 = System_Converter<IActiveState,_Object>_TypeInfo;
        puVar7 = Unity_Properties_ContainerPropertyBag<Vector2>_TypeInfo;
        puVar6 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
        puVar5 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
        puVar4 = Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo;
        puVar2 = Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo;
        puVar1 = Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo;
        if (lVar9 != 0) {
          FUN_044bef24(lVar9,0,uVar11,
                       *(undefined8 *)Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo);
          uVar13 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
          uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_04f1bdf0(0x43340000,0x43820000,uVar11,*(undefined8 *)puVar2,*(undefined8 *)puVar8,
                       uVar13);
          FUN_044bef24(lVar9,1,uVar11,*(undefined8 *)puVar1);
          uVar13 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
          uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_04f1bdf0(0x41000000,0x42b40000,uVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar4,
                       uVar13);
          FUN_044bef24(lVar9,2,uVar11,*(undefined8 *)puVar1);
          uVar13 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
          uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_04f1bdf0(0,DAT_0103222c,uVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar6,uVar13);
          FUN_044bef24(lVar9,3,uVar11,*(undefined8 *)puVar1);
          plVar12 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
          *plVar12 = lVar9;
          thunk_FUN_02bb0e9c(plVar12,lVar9);
          return;
        }
        goto LAB_04f1c758;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


