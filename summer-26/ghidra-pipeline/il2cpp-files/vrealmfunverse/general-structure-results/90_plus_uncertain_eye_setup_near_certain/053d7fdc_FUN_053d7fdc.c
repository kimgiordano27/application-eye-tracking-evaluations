/*
FUNCTION_NAME: FUN_053d7fdc
ENTRY_POINT: 053d7fdc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x053d819c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_053d7fdc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long local_38;
  char local_2c [4];
  undefined8 local_28;
  
                    /* catch() { ... } // from try @ 053d7fd4 with catch @ 053d7fdc */
  puVar2 = OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
                    /* try { // try from 053d7fe0 to 054d7fe7 has its CatchHandler @ 053d7ff0 */
                    /* try { // try from 053d7fe8 to 054d7ff3 has its CatchHandler @ 053d7dbc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053d7fe0 with catch @ 053d7ff0
                        */
  if ((DAT_066d0a23 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_65_0_TypeInfo);
    DAT_066d0a23 = 1;
  }
  lVar3 = *(long *)puVar2;
  local_28 = 0;
  local_2c[0] = '\0';
  local_38 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar2;
  }
  local_2c[0] = '\0';
  local_28 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x50);
  FUN_04ddecfc(local_28,local_2c,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_053e0d34(param_1);
  lVar3 = *(long *)puVar2;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = uVar4;
    plVar6 = *(long **)(lVar3 + 0xb8);
    lVar3 = *plVar6;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = FUN_0452f928(lVar3,plVar6[9],&local_38,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      local_38 = FUN_053e0df4();
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar2;
      }
      lVar7 = **(long **)(lVar3 + 0xb8);
      lVar3 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
      FUN_04dbdb8c(lVar3,0);
      *(undefined8 *)(lVar3 + 0x10) = uVar4;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0452ddc0(lVar7,lVar3,local_38,*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo);
    }
    if (local_38 != 0) {
      uVar1 = *(undefined4 *)(local_38 + 0x10);
      if (local_2c[0] != '\0') {
        thunk_FUN_02b4a54c(local_28,0);
      }
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


