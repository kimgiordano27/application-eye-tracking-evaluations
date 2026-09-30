/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingPositionEnabled
ENTRY_POINT: 0369adb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionEnabled(long param_1)

{
  byte bVar1;
  long *plVar2;
  long in_x10;
  uint in_w11;
  long *unaff_x19;
  long unaff_x20;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  if (in_w11 < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(in_x10 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar2 = (long *)0x0;
    }
  }
  *(long **)(unaff_x20 + 0x130) = plVar2;
  if ((uint)*(byte *)(*unaff_x19 + 0x130) < (uint)bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_01f51358(unaff_x20 + 0x130,plVar2);
  *(long **)(unaff_x20 + 0x138) = unaff_x19;
  thunk_FUN_01f51358(unaff_x20 + 0x138);
  return;
}


