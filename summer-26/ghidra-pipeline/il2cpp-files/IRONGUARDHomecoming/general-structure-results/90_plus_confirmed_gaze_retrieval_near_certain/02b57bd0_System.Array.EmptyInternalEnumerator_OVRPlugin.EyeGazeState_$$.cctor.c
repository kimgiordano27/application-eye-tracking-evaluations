/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 02b57bd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor(undefined1 param_1 [16])

{
  long lVar1;
  ulong uVar2;
  long in_x9;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long lStack0000000000000020;
  long lStack0000000000000028;
  long lStack0000000000000030;
  
  lStack0000000000000028 = param_1._8_8_;
  lStack0000000000000020 = param_1._0_8_;
  while( true ) {
    lStack0000000000000030 = in_x9;
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
    if (uVar2 <= unaff_x23) break;
    in_x9 = unaff_x24[3];
    lStack0000000000000028 = unaff_x24[2];
    lStack0000000000000020 = unaff_x24[1];
    unaff_x24 = unaff_x24 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


