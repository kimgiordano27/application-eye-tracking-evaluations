/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 05d4f3c4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(long param_1)

{
  bool in_ZR;
  long *plVar1;
  long in_x9;
  long *unaff_x19;
  long unaff_x20;
  
  plVar1 = unaff_x19;
  if (!in_ZR) {
    plVar1 = (long *)0x0;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = plVar1;
  if ((uint)*(byte *)(*unaff_x19 + 0x130) < (uint)in_x9) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + in_x9 * 8 + -8) != param_1) {
      plVar1 = (long *)0x0;
    }
  }
  thunk_FUN_03048534((undefined8 *)(unaff_x20 + 0x20),plVar1);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_03048534((undefined8 *)(unaff_x20 + 0x28));
  return;
}


