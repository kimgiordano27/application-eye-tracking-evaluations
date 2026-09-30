/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 021af468
PROGRAM: sharks-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
               (long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02be0698(3);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 < param_3) {
    FUN_02befb2c(0);
    uVar3 = *(uint *)(param_2 + 0x18);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar3 - param_3) < (int)(uVar2 - *(int *)(param_1 + 0x28))) {
    FUN_02bef2ac(5,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar5 = 0;
    lVar6 = lVar4 + 0x30;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_021af570:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if (-1 < *(int *)(lVar6 + -0x10)) {
        FUN_02616ec4();
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_021af570;
        lVar1 = param_2 + (long)(int)param_3 * 0x10;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        thunk_FUN_0188fd20(lVar1 + 0x28,0);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar2 != uVar5);
  }
  return;
}


