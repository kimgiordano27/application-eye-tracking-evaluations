/*
FUNCTION_NAME: OVREyeGaze$$Awake
ENTRY_POINT: 073e5fc4
PROGRAM: padelvrtraining-libil2cpp.so
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
  undefined8 uVar1;
  
  if ((DAT_0984534d & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0fc8);
    FUN_03d2d2b0(PTR_DAT_091f99f8);
    DAT_0984534d = 1;
  }
  FUN_073a3240(param_1,param_1 + 0x30,0,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a0fc8,
                         *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    thunk_FUN_03d1023c();
    FUN_073a32e4(param_1,param_1 + 0x30,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


