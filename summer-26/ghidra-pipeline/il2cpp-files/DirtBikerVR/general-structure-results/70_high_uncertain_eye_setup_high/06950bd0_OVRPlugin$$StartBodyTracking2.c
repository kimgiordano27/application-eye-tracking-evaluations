/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 06950bd0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking2(long param_1)

{
  byte bVar1;
  long in_x10;
  long *plVar2;
  uint in_w11;
  long unaff_x19;
  long *unaff_x20;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  if (in_w11 < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x20;
    if (*(long *)(*(long *)(in_x10 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar2 = (long *)0x0;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x20) = plVar2;
  if ((uint)*(byte *)(*unaff_x20 + 0x130) < (uint)bVar1) {
    unaff_x20 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
    unaff_x20 = (long *)0x0;
  }
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20),unaff_x20);
  return;
}


