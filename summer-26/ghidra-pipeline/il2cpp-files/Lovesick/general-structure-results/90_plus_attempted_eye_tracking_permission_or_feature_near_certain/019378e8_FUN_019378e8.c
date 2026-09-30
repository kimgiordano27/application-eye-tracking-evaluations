/*
FUNCTION_NAME: FUN_019378e8
ENTRY_POINT: 019378e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined1  [16] FUN_019378e8(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_0377a12c & 1) == 0) {
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9889);
    DAT_0377a12c = 1;
  }
  if (((*(long *)(param_1 + 0xa8) != 0) && (param_2 != 0)) && (*(long *)(param_2 + 0x30) != 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x130);
    FUN_013576e8(*(long *)(param_2 + 0x30),param_3 << 1,&local_48,*(undefined8 *)StringLiteral_9889)
    ;
    if (lVar1 != 0) {
      FUN_0132138c(lVar1,local_48,&local_44,*(undefined8 *)OVREyeGaze_TypeInfo);
      if (*(long *)(param_1 + 0xf8) != 0) {
        auVar2 = FUN_0193755c(local_44);
        uVar3 = auVar2._8_8_;
        if (*(long *)(param_1 + 0x100) != 0) {
          FUN_0193755c(local_44);
          if (*(long *)(param_1 + 0xf0) != 0) {
            FUN_0193755c(local_44);
            auVar2._8_8_ = uVar3;
            return auVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


