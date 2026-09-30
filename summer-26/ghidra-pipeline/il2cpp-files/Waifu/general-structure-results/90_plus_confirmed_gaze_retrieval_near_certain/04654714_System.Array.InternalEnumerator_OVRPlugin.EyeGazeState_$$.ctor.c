/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 04654714
PROGRAM: Waifu-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


int System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  uint in_w9;
  ulong uVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  
  if ((int)unaff_w23 < 0) {
    unaff_w23 = in_w9 & ((int)in_w9 >> 0x1f ^ 0xffffffffU);
  }
  if ((int)(unaff_w23 + unaff_w20) <= in_w8) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    lVar1 = FUN_04654e70();
    if (0 < (int)unaff_w23) {
      uVar4 = (ulong)unaff_w23;
      do {
        if (*(long *)(*(long *)(unaff_x21 + 8) + (long)unaff_w20 * 8) == lVar1) {
          return unaff_w20;
        }
        uVar4 = uVar4 - 1;
        unaff_w20 = unaff_w20 + 1;
      } while (uVar4 != 0);
    }
    return -1;
  }
  FUN_033d1ba8(&DAT_083c8a18);
  uVar2 = thunk_FUN_03398a84();
  uVar3 = FUN_033d1ba8(&DAT_08451328);
  FUN_06787d08(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar2);
}


