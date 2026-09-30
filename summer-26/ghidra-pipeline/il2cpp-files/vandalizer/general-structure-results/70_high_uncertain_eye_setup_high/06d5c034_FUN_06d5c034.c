/*
FUNCTION_NAME: FUN_06d5c034
ENTRY_POINT: 06d5c034
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_06d5c034(ulong param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long unaff_x21;
  ulong uVar6;
  undefined8 *unaff_x22;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(OVRPlugin_Vector4f___TypeInfo);
    FUN_031f20f4(System_Collections_Generic_Dictionary<ulong,_Simulation_PlayerRefMapping>_TypeInfo)
    ;
    FUN_031f20f4(OVRPlugin_Vector3f___TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x8c) = 1;
  }
  puVar1 = OVRPlugin_Vector4f___TypeInfo;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = (undefined8 *)0x0;
  in_stack_00000038 = 0;
  uVar2 = FUN_06d5c1c8();
  uVar6 = (ulong)uVar2;
  FUN_04a72bec();
  param_3[1] = 0;
  *param_3 = 0;
  FUN_04af85f8(&stack0x00000040,uVar6,2,1,*unaff_x22);
  if (uVar2 != 0) {
    lVar7 = 0;
    iVar5 = 1;
    do {
      FUN_06c33a8c();
      puVar4 = (undefined8 *)(in_stack_00000040 + lVar7 * 0x28);
      lVar7 = (long)iVar5;
      iVar5 = iVar5 + 1;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
    } while (lVar7 < (long)uVar6);
  }
  FUN_03e71e30(in_stack_00000040,in_stack_00000048,*(undefined8 *)puVar1);
  uVar3 = FUN_06d5c230();
  if (uVar2 != 0) {
    lVar7 = 0;
    iVar5 = 1;
    do {
      FUN_04af85f8(&stack0x00000030,1,2,1,*unaff_x22);
      puVar4 = (undefined8 *)(in_stack_00000040 + lVar7 * 0x28);
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      uVar9 = puVar4[3];
      uVar8 = puVar4[2];
      in_stack_00000030[4] = puVar4[4];
      in_stack_00000030[1] = uVar11;
      *in_stack_00000030 = uVar10;
      in_stack_00000030[3] = uVar9;
      in_stack_00000030[2] = uVar8;
      puVar4 = (undefined8 *)(*param_3 + lVar7 * 0x10);
      puVar4[1] = in_stack_00000038;
      *puVar4 = in_stack_00000030;
      lVar7 = (long)iVar5;
      iVar5 = iVar5 + 1;
    } while (lVar7 < (long)uVar6);
  }
  uVar2 = FUN_06c344bc(uVar3,0);
  return uVar2 & 1;
}


