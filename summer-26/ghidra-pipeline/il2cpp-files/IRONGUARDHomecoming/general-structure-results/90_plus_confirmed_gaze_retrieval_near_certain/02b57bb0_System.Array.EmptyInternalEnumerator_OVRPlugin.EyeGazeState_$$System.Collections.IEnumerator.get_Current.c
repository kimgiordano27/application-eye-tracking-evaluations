/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b57bb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined1 in_CY;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  
  while (!(bool)in_CY) {
    unaff_x24 = unaff_x24 + 4;
    FUN_02b57444();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
      *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = FUN_0353ca4c(0);
      if (lVar1 != 0) {
        FUN_02a64cc0();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    if (uVar2 <= unaff_x23) break;
    if (*unaff_x24 == 0) {
      FUN_0358b70c(0x11,0);
      uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    }
    in_CY = uVar2 <= unaff_x23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


