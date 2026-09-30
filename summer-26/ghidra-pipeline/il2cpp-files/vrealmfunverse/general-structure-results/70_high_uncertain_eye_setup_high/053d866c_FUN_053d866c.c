/*
FUNCTION_NAME: FUN_053d866c
ENTRY_POINT: 053d866c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x053d889c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_053d866c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 local_40;
  char local_34 [4];
  
  puVar1 = OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d8600 with catch @ 053d8688
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d860c with catch @ 053d868c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d85c0 with catch @ 053d8690
                        */
  if ((DAT_066d0a2c & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
                    /* try { // try from 053d86ac to 054d86af has its CatchHandler @ 053d86b8 */
    FUN_02b3c81c(OVRPlugin_OVRP_1_70_0_TypeInfo);
                    /* catch() { ... } // from try @ 053d86ac with catch @ 053d86b8 */
    FUN_02b3c81c(OVRPlugin_OVRP_1_71_0_TypeInfo);
                    /* try { // try from 053d86bc to 054d86c3 has its CatchHandler @ 053d86cc */
                    /* try { // try from 053d86c4 to 054d86cf has its CatchHandler @ 053d84e0 */
    FUN_02b3c81c(OVRPlugin_OVRP_1_72_0_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053d86bc with catch @ 053d86cc
                        */
    FUN_02b3c81c(OVRPlugin_OVRP_1_73_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo);
    DAT_066d0a2c = 1;
  }
  lVar2 = *(long *)puVar1;
  local_34[0] = '\0';
  local_40 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  local_34[0] = '\0';
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x60);
  FUN_04ddecfc(uVar3,local_34,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x20) == 0) {
    uVar4 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
    FUN_0452d044(uVar4,*(undefined8 *)OVRPlugin_OVRP_1_72_0_TypeInfo);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20);
    *puVar5 = uVar4;
    thunk_FUN_02bb0e9c(puVar5,uVar4);
  }
  local_40 = 0;
  uVar4 = thunk_FUN_02b79644(*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
                            );
  FUN_0558a674(uVar4,param_1,param_2,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar6 = FUN_0452f928(lVar2,uVar4,&local_40,*(undefined8 *)OVRPlugin_OVRP_1_71_0_TypeInfo);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar6 = FUN_053e1e24(param_1,param_2,&local_40);
    if ((uVar6 & 1) != 0) {
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0452ddc0(lVar2,uVar4,local_40,*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo);
    }
  }
  uVar4 = local_40;
  if (local_34[0] != '\0') {
    thunk_FUN_02b4a54c(uVar3,0);
  }
  return uVar4;
}


