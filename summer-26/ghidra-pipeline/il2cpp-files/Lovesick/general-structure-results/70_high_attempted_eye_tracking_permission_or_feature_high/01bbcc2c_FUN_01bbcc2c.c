/*
FUNCTION_NAME: FUN_01bbcc2c
ENTRY_POINT: 01bbcc2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_01bbcc2c(float param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  float local_28;
  float local_24;
  
  if ((DAT_0377e767 & 1) == 0) {
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9928);
    DAT_0377e767 = 1;
  }
  local_24 = fmodf(param_1 + 360.0,360.0);
  if (*(long *)(param_2 + 0x50) != 0) {
    FUN_0132138c(*(long *)(param_2 + 0x50),param_3,&local_28,*(undefined8 *)OVREyeGaze_TypeInfo);
    if (local_28 != local_24) {
      if (*(long *)(param_2 + 0x50) == 0) goto LAB_01bbcd00;
      FUN_0132149c(*(long *)(param_2 + 0x50),param_3,&local_24,*(undefined8 *)StringLiteral_9928);
      lVar1 = *(long *)(param_2 + 0x10);
      *(undefined1 *)(param_2 + 0x30) = 0;
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      }
    }
    return;
  }
LAB_01bbcd00:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


