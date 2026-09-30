/*
FUNCTION_NAME: FUN_058dd670
ENTRY_POINT: 058dd670
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_058dd670(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_06b80b48 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676c978);
    FUN_02d6084c(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_66_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_68_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_70_0_TypeInfo);
    DAT_06b80b48 = 1;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_67_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
    thunk_FUN_02dd37b4((long *)(param_1 + 0xe0),uVar1);
  }
  if (*(long *)(param_1 + 0xf0) == 0) {
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0xf0) = uVar1;
    thunk_FUN_02dd37b4((long *)(param_1 + 0xf0),uVar1);
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    thunk_FUN_02dd37b4((long *)(param_1 + 0xf8),uVar1);
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    thunk_FUN_02dd37b4(param_1 + 0x100,uVar1);
  }
  if (*(long *)(param_1 + 0x108) == 0) {
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x108) = uVar1;
    thunk_FUN_02dd37b4(param_1 + 0x108,uVar1);
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0xe8) = uVar1;
    thunk_FUN_02dd37b4((long *)(param_1 + 0xe8),uVar1);
  }
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x118) = uVar1;
    thunk_FUN_02dd37b4(param_1 + 0x118,uVar1);
  }
  if (*(long *)(param_1 + 0x110) == 0) {
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c978);
    FUN_047d4574(uVar1,param_1,*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x110) = uVar1;
    thunk_FUN_02dd37b4(param_1 + 0x110,uVar1);
  }
  FUN_058dfc74(param_1,1);
  return;
}


