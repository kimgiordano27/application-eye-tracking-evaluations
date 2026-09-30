/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 0532b910
PROGRAM: spatialPiano-libil2cpp.so
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
  undefined8 uVar1;
  long in_x9;
  uint in_w10;
  undefined4 in_register_00004054;
  uint in_w11;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (in_w11 < in_w10) {
    uVar1 = 0;
  }
  else {
                    /* try { // try from 0532b924 to 0542b94f has its CatchHandler @ 0532ba08 */
    uVar1 = unaff_x19;
    if (*(long *)(*(long *)(in_x9 + 200) + CONCAT44(in_register_00004054,in_w10) * 8 + -8) !=
        param_1) {
      uVar1 = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
  return;
}


