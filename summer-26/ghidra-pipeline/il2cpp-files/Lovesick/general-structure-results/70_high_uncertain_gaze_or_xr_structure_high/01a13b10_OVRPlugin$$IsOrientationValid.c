/*
FUNCTION_NAME: OVRPlugin$$IsOrientationValid
ENTRY_POINT: 01a13b10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsOrientationValid(long param_1)

{
  long lVar1;
  long unaff_x25;
  undefined8 *unaff_x26;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x148));
  *(undefined1 *)(unaff_x25 + 0x989) = 1;
  lVar1 = thunk_FUN_00d62348(*unaff_x26);
  if (lVar1 != 0) {
    FUN_01a0f90c();
    lVar1 = thunk_FUN_00d62348(*unaff_x26);
    if (lVar1 != 0) {
      FUN_01a0f90c();
      FUN_01a0f5d0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


