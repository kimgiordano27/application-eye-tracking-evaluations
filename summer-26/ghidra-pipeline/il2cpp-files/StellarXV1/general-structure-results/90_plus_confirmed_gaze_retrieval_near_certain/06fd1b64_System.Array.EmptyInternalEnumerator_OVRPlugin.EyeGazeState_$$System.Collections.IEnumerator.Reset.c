/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06fd1b64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  
  uVar2 = FUN_06fd1eb8(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x1f0));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    thunk_FUN_040b5044();
    uVar1 = FUN_06fd00ac();
    if ((int)uVar1 < 0) {
      return 0;
    }
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      return *(undefined8 *)(lVar3 + (ulong)uVar1 * 0x18 + 0x30);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


