/*
FUNCTION_NAME: FUN_066a024c
ENTRY_POINT: 066a024c
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


void FUN_066a024c(undefined8 param_1,undefined4 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    thunk_FUN_02f239f0(PTR_DAT_06d02610);
    uVar1 = thunk_FUN_02ef1808();
    uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d18540);
    FUN_05558508(uVar1,uVar2,0);
  }
  else {
    if (*(int *)(param_3 + 0x18) == 0) {
      thunk_FUN_02f239f0(PTR_DAT_06d02080);
      uVar1 = thunk_FUN_02ef1808();
      puVar3 = OVRDisplay_TypeInfo;
    }
    else {
      if (param_4 <= *(int *)(param_3 + 0x18)) {
        if (DAT_071d13a0 == (code *)0x0) {
          DAT_071d13a0 = (code *)FUN_02f07e34(
                                             "UnityEngine.MaterialPropertyBlock::SetVectorArrayImpl(System.Int32,UnityEngine.Vector4[],System.Int32)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x066a02b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_071d13a0)(param_1,param_2,param_3,param_4);
        return;
      }
      thunk_FUN_02f239f0(PTR_DAT_06d02080);
      uVar1 = thunk_FUN_02ef1808();
      puVar3 = OVRDynamicObject_TypeInfo;
    }
    uVar2 = thunk_FUN_02f239f0(puVar3);
    FUN_0555e840(uVar1,uVar2,0);
  }
  uVar2 = thunk_FUN_02f239f0(OVREyeGaze_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar1,uVar2);
}


