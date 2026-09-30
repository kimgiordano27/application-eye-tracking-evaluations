/*
FUNCTION_NAME: FUN_0627299c
ENTRY_POINT: 0627299c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_3;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_0627299c(long *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long *plVar2;
  
  if ((DAT_076de23c & 1) == 0) {
    thunk_FUN_032e1da0(OVRPlugin_EyeGazeState___TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<XRLoader>_TypeInfo);
    DAT_076de23c = 1;
  }
  if ((param_2 == 0) || (plVar2 = *(long **)(param_2 + 0x10), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
  if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
     (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)OVRPlugin_EyeGazeState___TypeInfo)) {
    if (plVar2[0xc] != 0) {
      plVar2 = (long *)FUN_06272ac4(plVar2[0xc],param_3);
      if (plVar2 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)System_Collections_Generic_List<XRLoader>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_List<XRLoader>_TypeInfo)) goto LAB_06272ac0;
      }
      FUN_0626f114(param_1,plVar2,0);
    }
    (**(code **)(*param_1 + 0x1b8))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x06272ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
LAB_06272ac0:
                    /* WARNING: Subroutine does not return */
  FUN_032d618c(plVar2);
}


