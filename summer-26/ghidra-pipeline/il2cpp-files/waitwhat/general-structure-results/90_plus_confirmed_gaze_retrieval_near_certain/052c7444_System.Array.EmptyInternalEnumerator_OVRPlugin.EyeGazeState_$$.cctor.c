/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 052c7444
PROGRAM: waitwhat-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((DAT_0754b019 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f5a38);
    DAT_0754b019 = 1;
  }
  if (*param_1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[1];
    if (*(int *)(*(long *)PTR_DAT_070f5a38 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = FUN_05880800(0x1505,(int)lVar1,0);
    uVar2 = FUN_05880800(uVar4,*(undefined4 *)((long)param_1 + 0xc),0);
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar3 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    uVar3 = uVar3 ^ uVar2;
  }
  return uVar3;
}


