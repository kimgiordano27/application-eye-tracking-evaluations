/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 01d85a78
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(long param_1,undefined8 param_2,long param_3)

{
  bool in_CY;
  long in_x9;
  long *unaff_x20;
  
  if ((in_CY) && (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) == param_3)) {
    if (unaff_x20 != (long *)0x0) {
      (**(code **)(*unaff_x20 + 0x2c8))();
      thunk_FUN_00fce154();
                    /* try { // try from 01d85acc to 01e85ae7 has its CatchHandler @ 01d85dcc */
      FUN_01d78d28();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0();
}


