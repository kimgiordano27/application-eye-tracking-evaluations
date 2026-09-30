/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 057329f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
          (long *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar3 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f261e8);
    FUN_07996cc8(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,param_3);
  }
  uVar1 = (**(code **)(*param_1 + 0x248))(param_1,param_2,*(undefined8 *)(*param_1 + 0x250));
  if ((int)param_1[0x1c] < 1) {
    return uVar1;
  }
  plVar2 = (long *)param_1[0x1d];
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,uVar1,param_1,*(undefined8 *)(*plVar2 + 0x1b0));
    lVar5 = param_1[0x1e];
    if (lVar5 == 0) {
      return uVar1;
    }
    if ((int)param_1[0x1c] + -1 < 1) {
      return uVar1;
    }
    uVar6 = 0;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar2 = *(long **)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
      if (plVar2 == (long *)0x0) break;
      uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,uVar1,param_1,*(undefined8 *)(*plVar2 + 0x1b0));
      uVar6 = uVar6 + 1;
      if ((int)param_1[0x1c] + -1 <= (int)uVar6) {
        return uVar1;
      }
      lVar5 = param_1[0x1e];
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


