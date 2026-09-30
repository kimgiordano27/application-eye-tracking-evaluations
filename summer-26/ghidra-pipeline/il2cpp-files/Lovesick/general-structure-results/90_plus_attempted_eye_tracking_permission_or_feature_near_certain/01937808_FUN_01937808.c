/*
FUNCTION_NAME: FUN_01937808
ENTRY_POINT: 01937808
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined1  [16] FUN_01937808(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_0377a12b & 1) == 0) {
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9889);
    DAT_0377a12b = 1;
  }
  if (((*(long *)(param_1 + 0xa8) != 0) && (param_2 != 0)) && (*(long *)(param_2 + 0x30) != 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x130);
    FUN_013576e8(*(long *)(param_2 + 0x30),param_3 << 1,&local_28,*(undefined8 *)StringLiteral_9889)
    ;
    if (lVar1 != 0) {
      FUN_0132138c(lVar1,local_28,&local_24,*(undefined8 *)OVREyeGaze_TypeInfo);
      if (*(long *)(param_1 + 0x128) != 0) {
        auVar2 = FUN_0193755c(local_24);
        uVar3 = auVar2._8_8_;
        if (*(long *)(param_1 + 0x130) != 0) {
          FUN_0193755c(local_24);
          auVar2._8_8_ = uVar3;
          return auVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


