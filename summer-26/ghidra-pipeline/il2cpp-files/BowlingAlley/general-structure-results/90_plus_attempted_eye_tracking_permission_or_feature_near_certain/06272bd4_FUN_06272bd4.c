/*
FUNCTION_NAME: FUN_06272bd4
ENTRY_POINT: 06272bd4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_06272bd4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  if ((DAT_076de23d & 1) == 0) {
    thunk_FUN_032e1da0(OVRPlugin_EyeGazeState___TypeInfo);
    DAT_076de23d = 1;
  }
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 0x10);
    if (plVar1 != (long *)0x0) {
      lVar2 = *(long *)OVRPlugin_EyeGazeState___TypeInfo;
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2))
      {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar1,lVar2);
      }
    }
    FUN_06272c78(param_1,plVar1,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


