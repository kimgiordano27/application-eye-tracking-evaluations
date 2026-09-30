/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingOrientationEnabled
ENTRY_POINT: 074a4d5c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingOrientationEnabled(code *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  
  uVar1 = (*param_1)();
  if (unaff_x20 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar2 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar3 = (undefined8 *)(unaff_x20 + 0x10);
      do {
        thunk_FUN_03d2f510(puVar3[-2]);
        puVar3[-2] = 0;
        thunk_FUN_03d2f510(*puVar3);
        *puVar3 = 0;
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 5;
      } while (uVar2 != 0);
    }
    thunk_FUN_03d2f510();
  }
  return uVar1;
}


