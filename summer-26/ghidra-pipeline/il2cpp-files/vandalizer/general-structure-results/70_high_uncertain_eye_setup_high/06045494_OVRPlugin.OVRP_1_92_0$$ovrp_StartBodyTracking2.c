/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StartBodyTracking2
ENTRY_POINT: 06045494
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_92_0__ovrp_StartBodyTracking2(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (DAT_07a47250 == (code *)0x0) {
    DAT_07a47250 = (code *)thunk_FUN_0322f404();
  }
  if (param_1 == 0) {
    uVar2 = (*DAT_07a47250)(0,param_2);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar1 = malloc(uVar4 * 8 + 8);
    puVar1[uVar4] = 0;
    if (0 < (int)uVar4) {
      uVar4 = uVar4 & 0xffffffff;
      puVar3 = (undefined8 *)(param_1 + 0x20);
      puVar5 = puVar1;
      do {
        uVar2 = thunk_FUN_0322f724(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar5 = uVar2;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
    uVar2 = (*DAT_07a47250)(puVar1,param_2);
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar4 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      puVar3 = puVar1;
      do {
        thunk_FUN_0322f718(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    thunk_FUN_0322f718(puVar1);
  }
  return uVar2;
}


