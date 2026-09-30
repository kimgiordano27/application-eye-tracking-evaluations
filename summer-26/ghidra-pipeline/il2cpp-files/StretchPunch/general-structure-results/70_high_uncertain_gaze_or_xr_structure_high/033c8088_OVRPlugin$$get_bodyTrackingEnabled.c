/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 033c8088
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long *unaff_x21;
  
  uVar1 = FUN_01d79a3c();
                    /* catch() { ... } // from try @ 033c8078 with catch @ 033c8090 */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* try { // try from 033c80a0 to 034c80af has its CatchHandler @ 033c80c4 */
    thunk_FUN_01dc4f30(*unaff_x21);
  }
  uVar2 = FUN_03366174(0);
                    /* try { // try from 033c80b0 to 034c80bb has its CatchHandler @ 033c7d84 */
                    /* try { // try from 033c80bc to 034c80c3 has its CatchHandler @ 033c80c4 */
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c80a0 with catch @ 033c80c4
                       catch(type#2 @ 00000000) { ... } // from try @ 033c80bc with catch @ 033c80c4
                        */
    thunk_FUN_01dc4f30(*unaff_x20);
  }
  FUN_03297094(uVar1,uVar2,0);
  return;
}


