/*
FUNCTION_NAME: FUN_053d8370
ENTRY_POINT: 053d8370
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x053d85a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_053d8370(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_066d0a2b & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_68_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06322478);
    DAT_066d0a2b = 1;
  }
  puVar1 = OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
  local_28 = 0;
  local_2c[0] = '\0';
  local_38 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = FUN_04d94ac4(param_1,0);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_053cdb2c(param_1,0), (uVar2 & 1) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    param_1 = FUN_053e1528();
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  local_2c[0] = '\0';
  local_28 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x60);
  FUN_04ddecfc(local_28,local_2c,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x18) == 0) {
    uVar4 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_0452d044(uVar4,*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
    *puVar5 = uVar4;
    thunk_FUN_02bb0e9c(puVar5,uVar4);
    lVar3 = *(long *)puVar1;
  }
  local_38 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = FUN_0452f928(lVar3,param_1,&local_38,*(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_053e1620(param_1,&local_38);
    lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_0452ddc0(lVar3,param_1,local_38,*(undefined8 *)OVRPlugin_OVRP_1_67_0_TypeInfo);
  }
  uVar4 = local_38;
  if (local_2c[0] != '\0') {
    thunk_FUN_02b4a54c(local_28,0);
  }
  return uVar4;
}


