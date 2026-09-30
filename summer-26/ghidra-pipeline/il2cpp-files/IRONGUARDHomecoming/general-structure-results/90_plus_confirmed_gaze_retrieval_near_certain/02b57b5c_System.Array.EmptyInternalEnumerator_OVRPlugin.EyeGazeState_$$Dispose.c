/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 02b57b5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 163
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined4 unaff_w21;
  ulong uVar4;
  long unaff_x24;
  long *plVar5;
  long *unaff_x26;
  
  if (unaff_x24 == 0) {
    FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar1 = (long *)thunk_FUN_01f116d0();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  if (0 < (int)plVar1[3]) {
    uVar4 = 0;
    plVar5 = plVar1;
    do {
      plVar5 = plVar5 + 4;
      uVar3 = (ulong)*(uint *)(plVar1 + 3);
      if (uVar3 <= uVar4) {
LAB_02b57c6c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*plVar5 == 0) {
        FUN_0358b70c(0x11,0);
        uVar3 = (ulong)*(uint *)(plVar1 + 3);
      }
      if (uVar3 <= uVar4) goto LAB_02b57c6c;
      FUN_02b57444();
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)plVar1[3]);
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = FUN_0353ca4c(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02a64cc0();
  return;
}


