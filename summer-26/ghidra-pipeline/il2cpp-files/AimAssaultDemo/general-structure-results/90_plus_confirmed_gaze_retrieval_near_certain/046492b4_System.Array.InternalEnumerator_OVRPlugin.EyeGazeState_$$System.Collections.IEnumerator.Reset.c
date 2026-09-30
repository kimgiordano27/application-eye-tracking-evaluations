/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 046492b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (void)

{
  long lVar1;
  uint in_w8;
  void *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  memcpy((void *)((long)unaff_x24 + (ulong)*(uint *)(*unaff_x24 + 0x104) * (long)(int)in_w8 + 0x20),
         unaff_x19,unaff_x21);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  if (in_w8 < *(uint *)(unaff_x24 + 3)) {
    FUN_0373b4c8(lVar1,(long)unaff_x24 +
                       (ulong)*(uint *)(*unaff_x24 + 0x104) * (long)(int)in_w8 + 0x20);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


