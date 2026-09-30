/*
FUNCTION_NAME: OVREyeGaze$$Awake
ENTRY_POINT: 0198770c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Awake(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  
                    /* try { // try from 0198770c to 01a87713 has its CatchHandler @ 01987720 */
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x748));
                    /* catch() { ... } // from try @ 01987688 with catch @ 01987714 */
  *(undefined1 *)(unaff_x19 + 0x3f9) = 1;
                    /* catch() { ... } // from try @ 01987650 with catch @ 01987720
                       catch() { ... } // from try @ 019876d8 with catch @ 01987720
                       catch() { ... } // from try @ 0198770c with catch @ 01987720 */
  lVar1 = thunk_FUN_00d62348(*unaff_x20);
  if (lVar1 != 0) {
    FUN_017b46ec(lVar1,0);
    **(long **)(*unaff_x20 + 0xb8) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


