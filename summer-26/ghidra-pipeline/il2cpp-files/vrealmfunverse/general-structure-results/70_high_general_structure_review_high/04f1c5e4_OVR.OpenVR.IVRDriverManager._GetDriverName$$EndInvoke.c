/*
FUNCTION_NAME: OVR.OpenVR.IVRDriverManager._GetDriverName$$EndInvoke
ENTRY_POINT: 04f1c5e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRDriverManager__GetDriverName__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_04f1bdf0();
  puVar6 = System_Converter<IActiveState,_Object>_TypeInfo;
  puVar5 = Unity_Properties_ContainerPropertyBag<Vector2>_TypeInfo;
  puVar4 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
  puVar3 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
  puVar2 = Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo;
  puVar1 = Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo;
  if (unaff_x19 != 0) {
    FUN_044bef24();
    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    uVar7 = thunk_FUN_02b79644(*unaff_x23);
    FUN_04f1bdf0(0x43340000,0x43820000,uVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar6,uVar8);
    FUN_044bef24();
    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    uVar7 = thunk_FUN_02b79644(*unaff_x23);
    FUN_04f1bdf0(0x41000000,0x42b40000,uVar7,*(undefined8 *)puVar3,*(undefined8 *)puVar2,uVar8);
    FUN_044bef24();
    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    uVar7 = thunk_FUN_02b79644(*unaff_x23);
    FUN_04f1bdf0(0,DAT_0103222c,uVar7,*(undefined8 *)puVar5,*(undefined8 *)puVar4,uVar8);
    FUN_044bef24();
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = unaff_x19;
    thunk_FUN_02bb0e9c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


