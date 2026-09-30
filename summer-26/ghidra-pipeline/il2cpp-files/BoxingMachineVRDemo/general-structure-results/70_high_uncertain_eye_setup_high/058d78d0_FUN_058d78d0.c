/*
FUNCTION_NAME: FUN_058d78d0
ENTRY_POINT: 058d78d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_12
*/


undefined8 FUN_058d78d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_06767838;
  if ((DAT_06b80b01 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06760eb0);
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(OVRPlugin_OVRP_1_107_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_109_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_10_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_110_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_111_0_TypeInfo);
    DAT_06b80b01 = 1;
  }
  puVar4 = OVRPlugin_OVRP_1_111_0_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo);
    FUN_043dec0c(lVar7,uVar8,*(undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
    lVar5 = *(long *)puVar4;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar3 = OVRPlugin_OVRP_1_108_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_107_0_TypeInfo;
  lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar10 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06760eb0);
    FUN_04f7d1b0(lVar10,uVar8,*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar6 = lVar10;
    thunk_FUN_02dd37b4(plVar6,lVar10);
  }
  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04151dc4(uVar8,lVar9 + 0x10,lVar7,lVar10,*(undefined8 *)puVar2);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar1;
  }
  memset((void *)(*(long *)(lVar5 + 0xb8) + 0x10),0,0x168);
  return uVar8;
}


