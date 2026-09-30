/*
FUNCTION_NAME: OVR.OpenVR.IVRDriverManager._GetDriverName$$BeginInvoke
ENTRY_POINT: 04f1c560
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRDriverManager__GetDriverName__BeginInvoke(void)

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
  undefined8 uVar10;
  long *plVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *unaff_x22;
  long unaff_x24;
  undefined8 *puVar14;
  
  puVar3 = Unity_Properties_ContainerPropertyBag<Vector4>_TypeInfo;
  puVar1 = Unity_Properties_ContainerPropertyBag<Translate>_TypeInfo;
  puVar2 = Unity_Properties_ContainerPropertyBag<StylePropertyName>_TypeInfo;
  puVar12 = *(undefined8 **)(unaff_x21 + 0x568);
  puVar14 = *(undefined8 **)(unaff_x24 + 0x558);
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  thunk_FUN_02bb0e9c();
  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
  thunk_FUN_02bb0e9c();
  lVar9 = thunk_FUN_02b79644(*puVar12);
  FUN_044be198(lVar9,*puVar14);
  uVar13 = **(undefined8 **)(*unaff_x22 + 0xb8);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_04f1bdf0(0x43340000,0x43820000,uVar10,*(undefined8 *)puVar3,*(undefined8 *)puVar1,uVar13);
  puVar8 = System_Converter<IActiveState,_Object>_TypeInfo;
  puVar7 = Unity_Properties_ContainerPropertyBag<Vector2>_TypeInfo;
  puVar6 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
  puVar5 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
  puVar4 = Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo;
  puVar3 = Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo;
  puVar1 = Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo;
  if (lVar9 != 0) {
    FUN_044bef24(lVar9,0,uVar10,
                 *(undefined8 *)Unity_Properties_ContainerPropertyBag<Rotate>_TypeInfo);
    uVar13 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_04f1bdf0(0x43340000,0x43820000,uVar10,*(undefined8 *)puVar3,*(undefined8 *)puVar8,uVar13);
    FUN_044bef24(lVar9,1,uVar10,*(undefined8 *)puVar1);
    uVar13 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_04f1bdf0(0x41000000,0x42b40000,uVar10,*(undefined8 *)puVar5,*(undefined8 *)puVar4,uVar13);
    FUN_044bef24(lVar9,2,uVar10,*(undefined8 *)puVar1);
    uVar13 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_04f1bdf0(0,DAT_0103222c,uVar10,*(undefined8 *)puVar7,*(undefined8 *)puVar6,uVar13);
    FUN_044bef24(lVar9,3,uVar10,*(undefined8 *)puVar1);
    plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *plVar11 = lVar9;
    thunk_FUN_02bb0e9c(plVar11,lVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


