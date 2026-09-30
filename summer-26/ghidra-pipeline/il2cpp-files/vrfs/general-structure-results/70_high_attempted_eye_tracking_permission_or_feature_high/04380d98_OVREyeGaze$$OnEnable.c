/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 04380d98
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long OVREyeGaze__OnEnable(long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < 0) {
    FUN_031dbd14(0);
  }
  if (param_3 < 0) {
    FUN_031db91c(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_031db448(0x17,0);
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe0) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  lVar1 = thunk_FUN_015d056c();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x118) + 8))(lVar1,param_3)
    ;
    FUN_031dd848(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(lVar1 + 0x10),0,param_3,0);
    *(int *)(lVar1 + 0x18) = param_3;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


