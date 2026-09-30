/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Modulus
ENTRY_POINT: 058d795c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 Unity_Mathematics_uint2x4__op_Modulus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined1 in_w8;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x23;
  
  *(undefined1 *)(unaff_x19 + 0xb01) = in_w8;
  puVar3 = OVRPlugin_OVRP_1_111_0_TypeInfo;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar3;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  lVar8 = *(long *)(*unaff_x23 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar3;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo);
    FUN_043dec0c(lVar6,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
    lVar4 = *(long *)puVar3;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = OVRPlugin_OVRP_1_108_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_107_0_TypeInfo;
  lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar3;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06760eb0);
    FUN_04f7d1b0(lVar9,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar5 = lVar9;
    thunk_FUN_02dd37b4(plVar5,lVar9);
  }
  uVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_04151dc4(uVar7,lVar8 + 0x10,lVar6,lVar9,*(undefined8 *)puVar1);
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x23;
  }
  memset((void *)(*(long *)(lVar4 + 0xb8) + 0x10),0,0x168);
  return uVar7;
}


