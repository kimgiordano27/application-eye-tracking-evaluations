/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 073e36d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(code *param_1)

{
  long *plVar1;
  long unaff_x19;
  
  (*param_1)();
                    /* try { // try from 073e36dc to 074e36df has its CatchHandler @ 073e3a08 */
  plVar1 = *(long **)(unaff_x19 + 0x48);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 073e36f0 to 074e36f7 has its CatchHandler @ 073e3a04 */
                    /* WARNING: Could not recover jumptable at 0x073e36f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


