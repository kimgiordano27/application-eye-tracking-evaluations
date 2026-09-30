/*
FUNCTION_NAME: FUN_01937588
ENTRY_POINT: 01937588
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_01937588(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_28;
  undefined4 local_24;
  
                    /* try { // try from 0193759c to 01a375a3 has its CatchHandler @ 01937b1c */
  if ((DAT_0377a128 & 1) == 0) {
                    /* try { // try from 019375ac to 01a375af has its CatchHandler @ 01937afc */
                    /* try { // try from 019375b0 to 01a376ef has its CatchHandler @ 019367f0 */
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9889);
    DAT_0377a128 = 1;
  }
  if (((*(long *)(param_1 + 0xa8) != 0) && (param_2 != 0)) && (*(long *)(param_2 + 0x30) != 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x130);
    FUN_013576e8(*(long *)(param_2 + 0x30),param_3,&local_28,*(undefined8 *)StringLiteral_9889);
    if (lVar1 != 0) {
      FUN_0132138c(lVar1,local_28,&local_24,*(undefined8 *)OVREyeGaze_TypeInfo);
      if (*(long *)(param_1 + 0xe0) != 0) {
        FUN_0193755c(local_24);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


