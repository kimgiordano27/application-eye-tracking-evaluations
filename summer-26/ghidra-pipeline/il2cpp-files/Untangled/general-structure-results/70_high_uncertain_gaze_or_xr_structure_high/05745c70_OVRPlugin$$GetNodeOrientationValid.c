/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 05745c70
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodeOrientationValid(void)

{
  undefined4 *unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  
                    /* try { // try from 05745c70 to 05845c7b has its CatchHandler @ 05745cd0 */
  if (unaff_x21 != 0) {
                    /* try { // try from 05745c7c to 05845cc7 has its CatchHandler @ 05745be4 */
    FUN_0572c2dc();
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_043b2468(unaff_x19 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


